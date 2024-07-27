// Created by Shain Furby

#include "Inventory/InventoryComponent.h"
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
bool UInventoryComponent::AddItem(UItem* Item, int32 Index)
{
    return AddItemWithAdditionalIndices(Item, Index, TArray<int32>());
}

bool UInventoryComponent::AddItemWithAdditionalIndices(UItem* Item, int32 Index, const TArray<int32>& AdditionalIndices)
{
    if (Item)
    {
        Item->Owner = GetOwner();

        // Ensure the inventory array is large enough for the specified index
        if (Index >= Inventory.Num())
        {
            Inventory.SetNum(Index + 1);
        }

        // Check if the specified index is valid and empty
        if (Inventory.IsValidIndex(Index) && Inventory[Index] == nullptr)
        {
            Inventory[Index] = Item;
            ItemAdded.Broadcast(Item, Index);

            // Set the item at additional specified indices using SetItemAt
            for (int32 AdditionalIndex : AdditionalIndices)
            {
                // Ensure the inventory array is large enough for the additional index
                if (AdditionalIndex >= Inventory.Num())
                {
                    Inventory.SetNum(AdditionalIndex + 1);
                }

                // Use SetItemAt to set the item at the additional index
                SetItemAt(Item, AdditionalIndex);
            }

            return true;
        }

        // If the specified index is not empty or invalid, return false
        return false;
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
 * Sets an Item at a specific index and returns an item if it existed in the slot. this does not force any updates or events.
 */
UItem* UInventoryComponent::SetItemAt(UItem* Item,int32 index)
{
    UItem* PreviousItem = Inventory[index];
    Inventory[index] = Item;
    return PreviousItem;
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

void UInventoryComponent::UpdateSlots()
{
    if (Width > 0 && Height > 0)
    {
        Slots = Width * Height;
    }
    else
    {
        Slots = Slots;
    }
}

void UInventoryComponent::OnSlotsChanged(int32 NewValue)
{
    if (Width <= 0 || Height <= 0)
    {
        Slots = NewValue;
    }
}

bool UInventoryComponent::GetAdjacentSlots(int32 AnchorIndex, int32 InWidth, int32 InHeight, TArray<int32>& OutSlots) const
{
    OutSlots.Empty();

    // Ensure dimensions are valid
    if (InWidth <= 0 || InHeight <= 0 || Width <= 0 || Height <= 0)
    {
        return false;
    }

    // Calculate the row and column of the anchor index
    int32 AnchorRow = AnchorIndex / Width;
    int32 AnchorCol = AnchorIndex % Width;

    // Check if the block fits within the inventory dimensions
    if (AnchorRow + InHeight > Height || AnchorCol + InWidth > Width)
    {
        return false;
    }

    // Collect all slots in the specified area
    for (int32 Row = 0; Row < InHeight; ++Row)
    {
        for (int32 Col = 0; Col < InWidth; ++Col)
        {
            int32 SlotIndex = (AnchorRow + Row) * Width + (AnchorCol + Col);
            OutSlots.Add(SlotIndex);
        }
    }

    return true;
}

bool UInventoryComponent::GetFirstEmptySlot(int32& OutIndex)
{
    // Check for an existing empty slot
    for (int32 i = 0; i < Inventory.Num(); i++)
    {
        if (Inventory[i] == nullptr)
        {
            OutIndex = i;
            return true;
        }
    }

    // No existing empty slot found, check if we can add a new slot
    if (Inventory.Num() < Slots)
    {
        // Check if we have a valid width and height dimension
        if (Width > 0)
        {
            // Ensure the new slot is within the valid inventory dimensions
            int32 NewSlotIndex = Inventory.Num();
            int32 Row = Height > 0 ? NewSlotIndex / Width : 0;
            int32 Col = NewSlotIndex % Width;

            if ((Height > 0 && Row < Height) || Height == 0)
            {
                Inventory.SetNum(NewSlotIndex + 1);
                OutIndex = NewSlotIndex;
                return true;
            }
        }
    }
    OutIndex = INDEX_NONE;
    return false;
}


