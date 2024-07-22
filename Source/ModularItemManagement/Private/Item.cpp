#include "Item.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values
UItem::UItem(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

// Override GetWorld to check if we are in the editor or in the game
UWorld* UItem::GetWorld() const
{
    if (GIsEditor && !GIsPlayInEditorWorld) return nullptr;
    else if (GetOuter()) return GetOuter()->GetWorld();
    else return nullptr;
}

void UItem::PostInitProperties()
{
    Super::PostInitProperties();
    
    if (GetOuter() && GetOuter()->GetWorld())
    {
    }
}

void UItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    UObject::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UItem::InitItem()
{
    for (auto& Module : ItemData->Modules)
    {
        AddModule(Module.Key, Module.Value);
    }
}

void UItem::OnItemSave()
{
}

void UItem::OnItemLoad()
{
}

void UItem::Serialize(FArchive& Ar)
{
    Super::Serialize(Ar);

    if (Ar.IsSaving())
    {
        // Serialize ModuleClasses
        Ar << ModuleClasses;

        // Serialize the number of modules
        int32 NumModules = ModuleData.Num();
        Ar << NumModules;

        // Serialize each module
        for (FInstancedStruct& Module : ModuleData)
        {
            Module.Serialize(Ar);
        }
    }
    else if (Ar.IsLoading())
    {
        // Deserialize ModuleClasses
        Ar << ModuleClasses;

        // Deserialize the number of modules
        int32 NumModules;
        Ar << NumModules;
        ModuleData.SetNum(NumModules);

        // Deserialize each module
        for (FInstancedStruct& Module : ModuleData)
        {
            Module.Serialize(Ar);
        }
    }
}


void UItem::AddModule(TSubclassOf<UItemModule> ModuleClass, FInstancedStruct ModuleInstance)
{
    if (ModuleClass)
    {
        int32 Index = ModuleClasses.Add(ModuleClass);

        // Clean up the old value before replacing it
        if (ModuleData.IsValidIndex(Index))
        {
            ModuleData[Index].Reset();  // Explicitly clean up the old data
            ModuleData[Index] = ModuleInstance;
        }
        else
        {
            ModuleData.Add(ModuleInstance);
        }

        UItemModule* ModuleObject = GetModuleDefaultObject(ModuleClass);
        ModuleObject->OnAddedToItem(this);
        ModuleAdded.Broadcast(ModuleObject);
    }
}

void UItem::RemoveModule(TSubclassOf<UItemModule> ModuleClass)
{
    int32 Index = ModuleClasses.IndexOfByKey(ModuleClass);
    if (Index != INDEX_NONE)
    {
        ModuleClasses.RemoveAt(Index);
        
        // Clean up the data before removing it
        if (ModuleData.IsValidIndex(Index))
        {
            ModuleData[Index].Reset();  // Explicitly clean up the old data
            ModuleData.RemoveAt(Index);
        }

        UItemModule* ModuleObject = GetModuleDefaultObject(ModuleClass);
        ModuleObject->OnRemovedFromItem(this);
        ModuleRemoved.Broadcast(ModuleObject);
    }
}


UItemModule* UItem::GetModuleDefaultObject(TSubclassOf<UItemModule> ModuleClass)
{
    return ModuleClass.GetDefaultObject();
}

// We add our blank native events
void UItem::BeginPlay_Implementation()
{
}

UItemModule* UItem::GetModule(TSubclassOf<UItemModule> ModuleClass, FInstancedStruct& OutInstanceStruct)
{
    int32 Index = ModuleClasses.IndexOfByKey(ModuleClass);
    if (Index != INDEX_NONE && ModuleData.IsValidIndex(Index))
    {
        OutInstanceStruct = ModuleData[Index];
        return GetModuleDefaultObject(ModuleClass);
    }
    return nullptr;
}

void UItem::SetModule(UItemModule* Module, const FInstancedStruct& InstanceStruct)
{
    if (Module)
    {
        TSubclassOf<UItemModule> ModuleClass = Module->GetClass();
        int32 Index = ModuleClasses.IndexOfByKey(ModuleClass);

        // Clean up the old value before replacing it
        if (Index != INDEX_NONE && ModuleData.IsValidIndex(Index))
        {
            ModuleData[Index].Reset();  // Explicitly clean up the old data
            ModuleData[Index] = InstanceStruct;
        }
        else
        {
            ModuleClasses.Add(ModuleClass);
            ModuleData.Add(InstanceStruct);
        }

        Module->OnAddedToItem(this);
        ModuleAdded.Broadcast(Module);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SetModuleData: Module is null."));
    }
}

UItemDataAsset* UItem::GetItemDataAsset() const
{
    return ItemData;
}
