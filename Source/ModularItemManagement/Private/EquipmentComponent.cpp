// EquipmentComponent.cpp

#include "EquipmentComponent.h"
#include "Engine/Engine.h"

int32 UEquipmentComponent::GetSlot(FGameplayTag Slot)
{
	int32 Index = ItemSlots.Find(Slot);
	if (Index == INDEX_NONE)
	{
		FString ErrorMsg = "Attempted to equip an item in the " + Slot.ToString() + " slot, but this slot does not exist.";
		GEngine->AddOnScreenDebugMessage(-1, 300.f, FColor::Red, ErrorMsg);
	}
	return Index;
}

UBaseItem* UEquipmentComponent::GetEquippedItem(FGameplayTag Slot)
{
	int32 Index = GetSlot(Slot);
	if (Index == INDEX_NONE)
		return nullptr;

	if (Index < EquippedItems.Num())
		return EquippedItems[Index];

	return nullptr;
}

UBaseItem* UEquipmentComponent::SetEquippedItem(FGameplayTag Slot, UBaseItem* NewItem)
{
	UBaseItem* OldItem = nullptr;
	int32 Index = GetSlot(Slot);

	if (Index == INDEX_NONE)
		return nullptr;

	if (Index < EquippedItems.Num())
		OldItem = EquippedItems[Index];

	if (OldItem == NewItem)
		return nullptr;

	EquippedItems.SetNum(Index + 1, false);
	EquippedItems[Index] = NewItem;

	if (OldItem)
		ItemUnequipped.Broadcast(Slot, OldItem);

	ItemEquipped.Broadcast(Slot, NewItem);

	return OldItem;
}
