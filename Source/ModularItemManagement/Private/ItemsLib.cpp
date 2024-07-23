// Created by Shain Furby

#include "ItemsLib.h"
#include "ItemModule.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/MemoryReader.h"

/**
 * Saves the given item to an FItemRecord.
 */
FItemRecord UItemsLib::SaveItem(UItem* Item)
{
	FItemRecord ItemRecord;
	ItemRecord.ItemGuid = Item->ItemID;
	ItemRecord.ModuleClasses = Item->ModuleClasses;

	FMemoryWriter MemoryWriter(ItemRecord.ModuleData, true);
	FObjectAndNameAsStringProxyArchive Archive(MemoryWriter, false);
	Item->Serialize(Archive);

	return ItemRecord;
}

/**
 * Loads an item from the given FItemRecord.
 */
UItem* UItemsLib::LoadItem(const FItemRecord& ItemRecord, UObject* Outer)
{
	UItem* NewItem = NewObject<UItem>(Outer);
	NewItem->ItemID = ItemRecord.ItemGuid;
	NewItem->ItemData = NewObject<UItemDefinition>();
	NewItem->ModuleClasses = ItemRecord.ModuleClasses;

	FMemoryReader MemoryReader(ItemRecord.ModuleData, true);
	FObjectAndNameAsStringProxyArchive Archive(MemoryReader, true);
	NewItem->Serialize(Archive);

	return NewItem;
}

/**
 * Creates a new item from the given item definition.
 */
UItem* UItemsLib::CreateItem(UItemDefinition* ItemDefinition, UObject* Outer)
{
	if (!ItemDefinition->ItemClass || !ItemDefinition)
	{
		return nullptr;
	}

	// Create an instance of the ItemClass
	UItem* NewItem = NewObject<UItem>(Outer, ItemDefinition->ItemClass);

	if (NewItem)
	{
		// Pass the ItemDefinition to the new item
		NewItem->Initialize(ItemDefinition);
	}

	return NewItem;
}

UItemModule* UItemsLib::GetModule(TSubclassOf<UItemModule> ModuleClass)
{
	return ModuleClass.GetDefaultObject();
}
