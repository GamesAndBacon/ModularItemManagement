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
        
        // Find the first empty slot
        int EmptySlotIndex = INDEX_NONE;
        for (int i = 0; i < Inventory.Num(); i++)
        {
            if (Inventory[i] == nullptr)
            {
                EmptySlotIndex = i;
                break;
            }
        }

        // If no empty slot is found, add to the end
        if (EmptySlotIndex == INDEX_NONE)
        {
            EmptySlotIndex = Inventory.Add(Item);
        }
        else
        {
            Inventory[EmptySlotIndex] = Item;
        }

        ItemAdded.Broadcast(Item, EmptySlotIndex);
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
void UInventoryComponent::MoveItem(int32 FromIndex, int32 ToIndex)
{
    // Validate FromIndex
    if (!Inventory.IsValidIndex(FromIndex))
    {
        UE_LOG(LogTemp, Warning, TEXT("FromIndex %d is out of bounds"), FromIndex);
        return;
    }

    // Ensure the inventory array is large enough for ToIndex
    if (ToIndex >= Inventory.Num())
    {
        Inventory.SetNum(ToIndex + 1);
    }
  
    // Get the items at the specified indices
    UItem* FromItem = Inventory[FromIndex];
    UItem* ToItem = Inventory[ToIndex];

    
    // Swap the items
    Inventory[ToIndex] = FromItem;
    ItemMoved.Broadcast(FromItem, ToIndex);
    Inventory[FromIndex] = ToItem;
    ItemMoved.Broadcast(ToItem, FromIndex);

}
