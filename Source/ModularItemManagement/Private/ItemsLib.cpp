#include "ItemsLib.h"
#include "BaseItem.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"

FItemRecord UItemsLib::SaveItem(UBaseItem* Item)
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
    return IR;
}

UBaseItem* UItemsLib::LoadItem(FItemRecord IR, UObject* Outer)
{
    if (!IR.Class)
        return nullptr;

    FMemoryReader Reader(IR.ItemData, true);
    Reader.ArIsSaveGame = true;
    FObjectAndNameAsStringProxyArchive Ar(Reader, false);
    Ar.ArIsSaveGame = true;
    Ar.SetIsLoading(true);
    Ar.SetIsSaving(false);
    UBaseItem* Item = NewObject<UBaseItem>(Outer, IR.Class);
    Item->Serialize(Ar);
    Item->OnItemLoad();
    return Item;
}

FItemRecord UItemsLib::SaveMutator(TSubclassOf<UBaseMutator> Mutator, FInstancedStruct& MutatorData)
{
    FItemRecord Record;
    if (!Mutator)
    {
        Record.Class = nullptr;
        return Record;
    }

    // Ensure MutatorData is valid before proceeding
    if (!MutatorData.IsValid())
    {
        UE_LOG(LogTemp, Error, TEXT("Invalid MutatorData in SaveMutator"));
        return Record;
    }

    Record.Class = Mutator->GetClass();

    FMemoryWriter Writer(Record.ItemData, true);
    Writer.ArIsSaveGame = true;

    // Serialize Mutator
    Mutator->Serialize(Writer);

    // Serialize the MutatorData
    MutatorData.Serialize(Writer);

    return Record;
}


// void UItemsLib::LoadMutator(FItemRecord Record, UItemDataAsset* ItemDataAsset, TSubclassOf<UBaseMutator>& OutMutator, FInstancedStruct& OutMutatorData)
// {
//     OutMutator = nullptr;
//     if (!ItemDataAsset)
//     {
//         return;
//     }
//
//     for (TSubclassOf<UBaseMutator> Mutator : ItemDataAsset->Mutators)
//     {
//         if (Mutator && Mutator->GetClass() == Record.Class)
//         {
//             OutMutator = Mutator;
//             break;
//         }
//     }
//
//     if (OutMutator)
//     {
//         FMemoryReader Reader(Record.ItemData, true);
//         Reader.ArIsSaveGame = true;
//         OutMutator->Serialize(Reader);
//
//         // Deserialize the MutatorData from Record.ItemData
//         if (const UScriptStruct* ScriptStruct = Cast<UScriptStruct>(Record.Class))
//         {
//             OutMutatorData.InitializeAs(ScriptStruct);
//             OutMutatorData.Serialize(Reader);
//         }
//     }
// }
