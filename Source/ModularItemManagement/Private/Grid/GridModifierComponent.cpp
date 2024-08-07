#include "Grid/GridModifierComponent.h"
#include "EngineUtils.h"
#include "Engine/World.h"

UGridModifierComponent::UGridModifierComponent()
{
    PrimaryComponentTick.bCanEverTick = true;
    OverrideGrid = nullptr;
}

void UGridModifierComponent::BeginPlay()
{
    Super::BeginPlay();
    UpdateModifier();
}

void UGridModifierComponent::OnComponentCreated()
{
    Super::OnComponentCreated();

    const UWorld* const ThisWorld = GetWorld();
    if (
        this->HasAnyFlags(RF_Transient)
        && !IsValid(ThisWorld)
        && !ThisWorld->IsEditorWorld()
        && ThisWorld->IsPlayInEditor()
        )
    {
        return;
    }

    if (AActor* Owner = GetOwner())
    {
        if (USceneComponent* RootComponent = Owner->GetRootComponent())
        {
            RootComponent->TransformUpdated.AddLambda(
                [this](USceneComponent* UpdatedComponent, EUpdateTransformFlags UpdateTransformFlag, ETeleportType Teleport)
                {
                    UpdateModifier();
                });
        }
    }
}

#if WITH_EDITOR
void UGridModifierComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

}
#endif // WITH_EDITOR

void UGridModifierComponent::UpdateModifier()
{

    if (GetOwningGrid())
    {
        UpdateAffectedCells();
    }
}

TSet<FVector2D> UGridModifierComponent::GetCells()
{
    return AffectedCells;
}

TSet<FVector2D> UGridModifierComponent::GetValidCells() const
{
    return ValidCells;
}

TSet<FVector2D> UGridModifierComponent::GetInvalidCells() const
{
    return InvalidCells;
}

void UGridModifierComponent::SetOverrideGrid(AGridManager* NewOverrideGrid)
{
    OverrideGrid = NewOverrideGrid;
    UpdateModifier();
}

AGridManager* UGridModifierComponent::GetOwningGrid()
{
    if (OverrideGrid)
    {
        return OverrideGrid;
    }
    if (OwningGrid)
    {
        return OwningGrid;
    }

    AGridManager* ClosestGrid = nullptr;
    float ClosestDistanceSquared = FLT_MAX;

    for (TActorIterator<AGridManager> It(GetWorld()); It; ++It)
    {
        float DistanceSquared = FVector::DistSquared(It->GetActorLocation(), GetComponentLocation());
        if (DistanceSquared < ClosestDistanceSquared)
        {
            ClosestDistanceSquared = DistanceSquared;
            ClosestGrid = *It;
        }
    }
    OwningGrid = ClosestGrid;
    return ClosestGrid;
}

void UGridModifierComponent::UpdateAffectedCells()
{
    TSet<FVector2D> NewAffectedCells;
    TSet<FVector2D> NewValidCells;
    TSet<FVector2D> NewInvalidCells;

    CalculateAffectedCells(NewAffectedCells);

    TSet<FVector2D> RemovedCells = AffectedCells.Difference(NewAffectedCells);
    TSet<FVector2D> AddedCells = NewAffectedCells.Difference(AffectedCells);
    
    AffectedCells = MoveTemp(NewAffectedCells);

    for (const FVector2D& Cell : AffectedCells)
    {
        if (IsCellValid(Cell))
        {
            ValidCells.Add(Cell);
            InvalidCells.Remove(Cell);
        }
        else
        {
            InvalidCells.Add(Cell);
            ValidCells.Remove(Cell);
        }
    }

    if (RemovedCells.Num() > 0)
    {
        OnCellsRemoved.Broadcast(RemovedCells);
    }
    else
    {
        OnCellsRemoved.Broadcast(AffectedCells); 
    }
   

    if (AddedCells.Num() > 0)
    {
        OnCellsUpdated.Broadcast(AddedCells);            
    }
    else
    {
        OnCellsUpdated.Broadcast(AffectedCells); 
    }

   


}

bool UGridModifierComponent::IsCellValid_Implementation(const FVector2D& Cell) const
{
    // Default implementation, override in Blueprint or C++
    return true;
}

void UGridModifierComponent::CalculateAffectedCells_Implementation(TSet<FVector2D>& OutCells)
{
    // Default implementation, override in Blueprint or C++
    // Example: Affect a single cell at the component's location
    if (OwningGrid)
    {
        FVector2D Cell = OwningGrid->GetCellFromWorldLocation(GetComponentLocation());
        OutCells.Add(Cell);
    }
}
