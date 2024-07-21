// BaseItem.cpp

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
        BeginPlay();
}

void UItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    UObject::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UItem::InitItem()
{
    for (auto& Module  : ItemData->Modules)
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

// Handling Modules
void UItem::AddModule(TSubclassOf<UItemModule> Module, FInstancedStruct ModuleData)
{
    if(Module)
    {
        FInstancedStruct newstruct = ModuleData;
        Modules.Add(Module,newstruct);
        GetModuleDefaultObject(Module)->OnAddedToItem(this);
        ModuleAdded.Broadcast(GetModuleDefaultObject(Module));        
    }
}

void UItem::RemoveModule(TSubclassOf<UItemModule> Module)
{
    if(Module)
    {
        Modules.Remove(Module);
        GetModuleDefaultObject(Module)->OnRemovedFromItem(this);
        ModuleRemoved.Broadcast(GetModuleDefaultObject(Module));        
    }
}

UItemModule* UItem::GetModuleDefaultObject(TSubclassOf<UItemModule> Module)
{
   return Module.GetDefaultObject();
}



// We add our blank native events
void UItem::BeginPlay_Implementation()
{
}

UItemModule* UItem::GetModuleData(TSubclassOf<UItemModule> ModuleClass, FInstancedStruct& OutInstanceStruct)
{
    if (const FInstancedStruct* FoundStruct = Modules.Find(ModuleClass))
    {
        OutInstanceStruct = *FoundStruct;
        return GetModuleDefaultObject(ModuleClass);
    }
    return nullptr;
}

void UItem::SetModuleData(UItemModule* Module, const FInstancedStruct& InstanceStruct)
{
    if (Module)
    {
        TSubclassOf<UItemModule> ModuleClass = Module->GetClass();

        // Check if the ModuleClass already exists in the map
        if (FInstancedStruct* ExistingStruct = Modules.Find(ModuleClass))
        {
            // Update the existing FInstancedStruct with the new data
            *ExistingStruct = InstanceStruct;
        }
        else
        {
            // Add the new data if it doesn't exist
            Modules.Add(ModuleClass, InstanceStruct);
        }

        Module->OnAddedToItem(this);
        ModuleAdded.Broadcast(Module);
    }
}
