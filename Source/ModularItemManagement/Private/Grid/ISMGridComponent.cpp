#include "Grid/ISMGridComponent.h"
#include "Engine/World.h"

UISMGridComponent::UISMGridComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
}

void UISMGridComponent::BeginPlay()
{
    Super::BeginPlay();
}

void UISMGridComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    
    for (auto& Pair : ISMComponentMap)
    {
        Pair.Value->DestroyComponent();
    }
    ISMComponentMap.Empty();
}

void UISMGridComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

FGuid UISMGridComponent::AddInstances(const TArray<FInstanceMeshData>& InstanceDataArray, FVector2D Cell, float ZOffset)
{
    int32 CellHash = OwningGrid->HashPosition(Cell);
    FTransform CellTransform;
    CellTransform.SetLocation(FVector(Cell.X, Cell.Y, ZOffset));
    FGridCellInstanceDataArray& InstanceArray = CellInstanceMap.FindOrAdd(CellHash);
    FGuid NewGUID = FGuid::NewGuid();

    for (const FInstanceMeshData& InstanceData : InstanceDataArray)
    {
        UInstancedStaticMeshComponent* ISMComponent = GetOrCreateISMComponent(InstanceData.Mesh);

        // Randomize our values
        FVector RandomLocation(
            FMath::RandRange(InstanceData.LocationRange.XRange.Min, InstanceData.LocationRange.XRange.Max),
            FMath::RandRange(InstanceData.LocationRange.YRange.Min, InstanceData.LocationRange.YRange.Max),
            FMath::RandRange(InstanceData.LocationRange.ZRange.Min, InstanceData.LocationRange.ZRange.Max)
        );

        FRotator RandomRotation(
            FMath::RandRange(InstanceData.RotationRange.PitchRange.Min, InstanceData.RotationRange.PitchRange.Max),
            FMath::RandRange(InstanceData.RotationRange.YawRange.Min, InstanceData.RotationRange.YawRange.Max),
            FMath::RandRange(InstanceData.RotationRange.RollRange.Min, InstanceData.RotationRange.RollRange.Max)
        );

        FVector RandomScale(
            FMath::RandRange(InstanceData.ScaleRange.XRange.Min, InstanceData.ScaleRange.XRange.Max),
            FMath::RandRange(InstanceData.ScaleRange.YRange.Min, InstanceData.ScaleRange.YRange.Max),
            FMath::RandRange(InstanceData.ScaleRange.ZRange.Min, InstanceData.ScaleRange.ZRange.Max)
        );

        // Create random transform
        FTransform RandomTransform;
        RandomTransform.SetLocation(RandomLocation);
        RandomTransform.SetRotation(RandomRotation.Quaternion());
        RandomTransform.SetScale3D(RandomScale);

        // Combine the transforms
        FTransform CombinedTransform = InstanceData.OffsetTransform * RandomTransform * CellTransform;

        // Set final transform
        FVector CombinedTranslation = CombinedTransform.GetTranslation();
        FTransform FinalTransform;
        FinalTransform.SetTranslation(CombinedTranslation);
        FinalTransform.SetRotation(CombinedTransform.GetRotation());
        FinalTransform.SetScale3D(CombinedTransform.GetScale3D());

        const int32 InstanceIndex = ISMComponent->AddInstance(FinalTransform);

        FGridCellInstanceData NewInstanceData;
        NewInstanceData.InstanceIndex = InstanceIndex;
        NewInstanceData.Mesh = InstanceData.Mesh;
        NewInstanceData.ISMComponent = ISMComponent;
        NewInstanceData.GUID = NewGUID;
        InstanceArray.Data.Add(NewInstanceData);
        ISMComponent->MarkRenderStateDirty();
    }

    return NewGUID;
}

void UISMGridComponent::RemoveInstancesByGUID(FGuid GUID)
{
    for (auto& CellPair : CellInstanceMap)
    {
        FGridCellInstanceDataArray& InstanceArray = CellPair.Value;
        for (int32 i = InstanceArray.Data.Num() - 1; i >= 0; --i)
        {
            FGridCellInstanceData& InstanceData = InstanceArray.Data[i];
            if (InstanceData.GUID == GUID)
            {
                if (InstanceData.ISMComponent && InstanceData.InstanceIndex >= 0 && InstanceData.InstanceIndex < InstanceData.ISMComponent->GetInstanceCount())
                {
                    InstanceData.ISMComponent->RemoveInstance(InstanceData.InstanceIndex);
                }
                InstanceArray.Data.RemoveAt(i);
            }
        }
        if (InstanceArray.Data.Num() == 0)
        {
            CellInstanceMap.Remove(CellPair.Key);
        }
    }
}

void UISMGridComponent::RemoveAllInstances(FVector2D Cell)
{
    int32 CellHash = OwningGrid->HashPosition(Cell);
    if (FGridCellInstanceDataArray* InstanceArrayPtr = CellInstanceMap.Find(CellHash))
    {
        TArray<FGridCellInstanceData>& Instances = InstanceArrayPtr->Data;
        for (FGridCellInstanceData& InstanceData : Instances)
        {
            if (InstanceData.ISMComponent)
            {
                InstanceData.ISMComponent->RemoveInstance(InstanceData.InstanceIndex);
            }
        }
        Instances.Empty();  // Clear the instances array
        CellInstanceMap.Remove(CellHash);  // Remove the entry from the map
    }
}
//
// void UISMGridComponent::RemoveInstances(FVector2D Cell, const TArray<FInstanceMeshData>& InstanceDataArray)
// {
//     int32 CellHash = OwningGrid->HashPosition(Cell);
//     if (FGridCellInstanceDataArray* InstanceArrayPtr = CellInstanceMap.Find(CellHash))
//     {
//         TArray<FGridCellInstanceData>& Instances = InstanceArrayPtr->Data;
//         for (const FInstanceMeshData& InstanceData : InstanceDataArray)
//         {
//             for (int32 i = Instances.Num() - 1; i >= 0; --i)
//             {
//                 FGridCellInstanceData& InstanceItem = Instances[i];
//                 if (InstanceItem.ISMComponent && InstanceItem.Mesh == InstanceData.Mesh)
//                 {
//                     InstanceItem.ISMComponent->RemoveInstance(InstanceItem.InstanceIndex);
//                     Instances.RemoveAt(i);
//                     if (InstanceItem.ISMComponent->GetInstanceCount() == 0)
//                     {
//                         ReturnISMComponentToPool(InstanceItem.ISMComponent);
//                     }
//                 }
//             }
//         }
//         if (Instances.Num() == 0)
//         {
//             CellInstanceMap.Remove(CellHash);
//         }
//     }
// }

UInstancedStaticMeshComponent* UISMGridComponent::GetOrCreateISMComponent(UStaticMesh* Mesh)
{
    UInstancedStaticMeshComponent** ISMComponentPtr = ISMComponentMap.Find(Mesh);

    if (!ISMComponentPtr)
    {
        UInstancedStaticMeshComponent* NewISMComponent = NewObject<UInstancedStaticMeshComponent>(this, UInstancedStaticMeshComponent::StaticClass());
        NewISMComponent->RegisterComponent();
        NewISMComponent->SetStaticMesh(Mesh);
        GetOwner()->AddInstanceComponent(NewISMComponent);
        ISMComponentMap.Add(Mesh, NewISMComponent);
        return NewISMComponent;
    }

    return *ISMComponentPtr;
}


