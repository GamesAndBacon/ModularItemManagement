// BaseItem.cpp

#include "BaseItem.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
UBaseItem::UBaseItem(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{

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



void UBaseItem::OnItemSave()
{
    SaveMutators();
}

void UBaseItem::OnItemLoad()
{
    // LoadMutators();
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


// We add our blank native events
void UBaseItem::BeginPlay_Implementation()
{
}
