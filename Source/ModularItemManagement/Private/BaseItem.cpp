// BaseItem.cpp

#include "BaseItem.h"
#include "ModularItemManagement/Interfaces/InventoryInterface.h"
#include "ModularItemManagement/Interfaces/EquipmentInterface.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
UBaseItem::UBaseItem(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    StackSize = 1;
    MaxStackSize = 1;
}

// Override GetWorld to check if we are in the editor or in the game
UWorld* UBaseItem::GetWorld() const
{
    if (GIsEditor && !GIsPlayInEditorWorld) return nullptr;
    else if (GetOuter()) return GetOuter()->GetWorld();
    else return nullptr;
}

void UBaseItem::PostInitProperties()
{
    Super::PostInitProperties();
    
    if (GetOuter() && GetOuter()->GetWorld()) 
        BeginPlay();
}

void UBaseItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    UObject::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UBaseItem::InitItem()
{
    for (auto& mutator  : ItemData->Mutators)
    {
        AddMutator(mutator.Key, mutator.Value);
    }
}

void UBaseItem::DoEquip(UEquipmentComponent* EC)
{
    if (!EC || !EC->GetOwner())
    {
        UE_LOG(LogTemp, Warning, TEXT("DoEquip: Invalid equipment component or owner."));
        return;
    }
    
    UseActor = EC->GetOwner();
    
    UInventoryComponent* Inventory = IInventoryInterface::Execute_GetInventory(UseActor);
    if (!Inventory)
    {
        UE_LOG(LogTemp, Warning, TEXT("DoEquip: Owner does not have an inventory."));
        return;
    }

    UBaseItem* OldItem = DoEquipBP(EC);
    OnEquip(UseActor);

    if (OldItem)
    {
        OldItem->DoUnEquip(Inventory);
        OldItem->OnUnequip(UseActor);
    }

    Inventory->RemoveItem(this);

    for (const auto& Pair : Mutators)
    {
        
        GetMutatorDefaultObject(Pair.Key)->OnEquip(this, UseActor);
    }
}

void UBaseItem::DoUnEquip(UInventoryComponent* Inv)
{
    if (!UseActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("DoUnEquip: Item has no owning actor."));
        return;
    }

    UEquipmentComponent* EC = IEquipmentInterface::Execute_GetEquipment(UseActor);
    if (!EC)
    {
        UE_LOG(LogTemp, Warning, TEXT("DoUnEquip: Owner does not have an equipment component."));
        return;
    }

    UBaseItem* OldItem = DoUnEquipBP(EC);

    if (OldItem)
    {
        OldItem->OnUnequip(UseActor);
        Inv->AddItem(OldItem);
    }

    Inv->AddItem(this);

    for (const auto& Pair : Mutators)
    {
        GetMutatorDefaultObject(Pair.Key)->OnEquip(this, UseActor);
    }

    UseActor = nullptr;
}

void UBaseItem::OnItemSave()
{
    SaveMutators();
}

void UBaseItem::OnItemLoad()
{
    // LoadMutators();
}

// Default DoUsage
UBaseItem* UBaseItem::DoEquipBP_Implementation(UEquipmentComponent* EC)
{
    return nullptr;
}

UBaseItem* UBaseItem::DoUnEquipBP_Implementation(UEquipmentComponent* EC)
{
    return nullptr;
}

// Handling mutators
void UBaseItem::AddMutator(TSubclassOf<UBaseMutator> Mutator, FInstancedStruct MutatatorData)
{
    if(Mutator)
    {
        FInstancedStruct newstruct = MutatatorData;
        Mutators.Add(Mutator,newstruct);
        GetMutatorDefaultObject(Mutator)->OnAddedToItem(this);
        MutatorAdded.Broadcast(GetMutatorDefaultObject(Mutator));        
    }
}

void UBaseItem::RemoveMutator(TSubclassOf<UBaseMutator> Mutator)
{
    if(Mutator)
    {
        Mutators.Remove(Mutator);
        GetMutatorDefaultObject(Mutator)->OnRemovedFromItem(this);
        MutatorRemoved.Broadcast(GetMutatorDefaultObject(Mutator));        
    }
}

UBaseMutator* UBaseItem::GetMutatorDefaultObject(TSubclassOf<UBaseMutator> Mutator)
{
   return Mutator.GetDefaultObject();
}

void UBaseItem::SaveMutators()
{
    SavedMutators.Empty();
    for (auto& MutatorPair : Mutators)
    {
        TSubclassOf<UBaseMutator> Mutator = MutatorPair.Key;
        FInstancedStruct& MutatorData = MutatorPair.Value;

        FItemRecord Record = UItemsLib::SaveMutator(Mutator, MutatorData);
        SavedMutators.Add(Record);
    }
}

// void UBaseItem::LoadMutators()
// {
//     Mutators.Empty();
//     if (!ItemData)
//     {
//         return;
//     }
//
//     for (FItemRecord& Record : SavedMutators)
//     {
//         TSubclassOf<UBaseMutator> Mutator;
//         FInstancedStruct MutatorData;
//         UItemsLib::LoadMutator(Record, ItemData, Mutator, MutatorData);
//
//         if (Mutator)
//         {
//             Mutators.Add(Mutator, MutatorData);
//         }
//     }
// }



void UBaseItem::DoUse(AActor* Owner)
{
    UseActor = Owner;
    DoUseBP();
}

// We add our blank native events
void UBaseItem::BeginPlay_Implementation()
{
}

void UBaseItem::OnEquip_Implementation(AActor* Owner)
{
}

void UBaseItem::DoUseBP_Implementation()
{
}

void UBaseItem::OnUnequip_Implementation(AActor* Owner)
{
}

bool UBaseItem::IsStackable() const
{
    return MaxStackSize > 1;
}

int32 UBaseItem::AddToStack(int32 Amount)
{
    if (!IsStackable())
        return 0;

    int32 SpaceLeft = MaxStackSize - StackSize;
    int32 AmountToAdd = FMath::Min(Amount, SpaceLeft);
    StackSize += AmountToAdd;

    TriggerStackSizeChanged();  // Trigger the event when stack size changes

    return AmountToAdd;
}

int32 UBaseItem::RemoveFromStack(int32 Amount)
{
    int32 AmountToRemove = FMath::Min(Amount, StackSize);
    StackSize -= AmountToRemove;

    TriggerStackSizeChanged();  // Trigger the event when stack size changes

    return AmountToRemove;
}

void UBaseItem::TriggerStackSizeChanged()
{
    OnStackSizeChanged.Broadcast(StackSize);  // Broadcast the event
}
