#include "ItemsLib.h"
#include "Item.h"
#include "ItemModule.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/MemoryReader.h"

FItemRecord UItemsLib::SaveItem(UItem* Item)
{
	FItemRecord ItemRecord;
	ItemRecord.ItemGuid = Item->Guid;
	ItemRecord.ItemName = Item->ItemData->ItemName;
	ItemRecord.ModuleClasses = Item->ModuleClasses;

	FMemoryWriter MemoryWriter(ItemRecord.ModuleData, true);
	FObjectAndNameAsStringProxyArchive Archive(MemoryWriter, false);
	Item->Serialize(Archive);

	return ItemRecord;
}

UItem* UItemsLib::LoadItem(const FItemRecord& ItemRecord, UObject* Outer)
{
	UItem* NewItem = NewObject<UItem>(Outer);
	NewItem->Guid = ItemRecord.ItemGuid;
	NewItem->ItemData = NewObject<UItemDataAsset>();
	NewItem->ItemData->ItemName = ItemRecord.ItemName;
	NewItem->ModuleClasses = ItemRecord.ModuleClasses;

	FMemoryReader MemoryReader(ItemRecord.ModuleData, true);
	FObjectAndNameAsStringProxyArchive Archive(MemoryReader, true);
	NewItem->Serialize(Archive);

	return NewItem;
}
