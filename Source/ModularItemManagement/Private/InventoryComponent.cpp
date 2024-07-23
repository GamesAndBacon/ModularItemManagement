// Created by Shain Furby

#include "InventoryComponent.h"
#include "Item.h"
#include "ModularItemManagement/Interfaces/InventoryInterface.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

// Called when the game starts
void UInventoryComponent::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

/**
 * Adds an item to the inventory.
 */
bool UInventoryComponent::AddItem(UItem* Item)
{
    if (Item)
    {
        Item->Owner = GetOwner();
        int Index = Inventory.Add(Item);
        ItemAdded.Broadcast(Item, Index);
        return true;
    }
    return false;
}

/**
 * Removes an item from the inventory.
 */
bool UInventoryComponent::RemoveItem(UItem* Item, int32 Index)
{
    if (Item && Inventory.IsValidIndex(Index))
    {
        Inventory.RemoveAt(Index);
        ItemRemoved.Broadcast(Item, Index);
        return true;
    }
    return false;           
}

/**
 * Gets the inventory array.
 */
const TArray<UItem*>& UInventoryComponent::GetInventory() const
{
    return Inventory;
}

/**
 * Gets the item at the specified index.
 */
UItem* UInventoryComponent::GetItemAt(int32 Index)
{
    if (Inventory.IsValidIndex(Index))
    {
        return Inventory[Index];
    }
    return nullptr;
}

/**
 * Moves an item to the specified index, swapping if necessary.
 */
void UInventoryComponent::MoveIndex(int32 Index, UItem* Item)
{
    if (Inventory.IsValidIndex(Index))
    {
        UItem* ExistingItem = Inventory[Index];
        if (ExistingItem != nullptr)
        {
            // Swap items
            const int32 ExistingIndex = Inventory.Find(Item);
            if (ExistingIndex != INDEX_NONE)
            {
                Inventory[ExistingIndex] = ExistingItem;
                ItemMoved.Broadcast(ExistingItem, ExistingIndex, Item, Index);
                return;
            }
        }

        Inventory[Index] = Item;
        ItemMoved.Broadcast(nullptr, INDEX_NONE, Item, Index);
    }
}