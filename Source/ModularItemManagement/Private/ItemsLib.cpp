#include "ItemsLib.h"
#include "Item.h"
#include "ItemModule.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"

FItemRecord UItemsLib::SaveItem(UItem* Item)
{
    FItemRecord IR;
    if (!Item)
    {
        IR.Class = nullptr;
        return IR;
    }
    Item->OnItemSave();
    IR.Class = Item->GetClass();
    FMemoryWriter Writer(IR.ItemData, true);
    Writer.ArIsSaveGame = true;
    FObjectAndNameAsStringProxyArchive Ar(Writer, true);
    Ar.ArIsSaveGame = true;
    Ar.SetIsLoading(false);
    Ar.SetIsSaving(true);
    Item->Serialize(Ar);

    // Save the modules associated with the item
    for (auto& ModulePair : Item->Modules)
    {
        if (ModulePair.Key)
        {
            ModulePair.Value.Serialize(Ar);
        }
    }

    return IR;
}

UItem* UItemsLib::LoadItem(FItemRecord IR, UObject* Outer)
{
    if (!IR.Class)
        return nullptr;

    FMemoryReader Reader(IR.ItemData, true);
    Reader.ArIsSaveGame = true;
    FObjectAndNameAsStringProxyArchive Ar(Reader, false);
    Ar.ArIsSaveGame = true;
    Ar.SetIsLoading(true);
    Ar.SetIsSaving(false);
    UItem* Item = NewObject<UItem>(Outer, IR.Class);
    Item->Serialize(Ar);
    Item->OnItemLoad();

    // Load the modules associated with the item
    for (auto& ModulePair : Item->Modules)
    {
        if (ModulePair.Key)
        {
            FInstancedStruct ModuleData;
            ModuleData.InitializeAs(ModulePair.Value.GetScriptStruct());
            ModuleData.Serialize(Reader);
            Item->SetModuleData(ModulePair.Key.GetDefaultObject(), ModuleData);
        }
    }

    return Item;
}
