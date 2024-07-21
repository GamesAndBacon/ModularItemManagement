// InventoryComponent.cpp

#include "InventoryComponent.h"
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


bool UInventoryComponent::AddItem(UItem* Item)
{
    if (Item)
    {
        Inventory.Add(Item);
        return true;
    }
    return false;
}

bool UInventoryComponent::RemoveItem(UItem* Item, int32 index)
{
    if(Item && Inventory.IsValidIndex(index))
    {
        Inventory.RemoveAt(index);
        ItemRemoved.Broadcast(Item, index);
        return true;
    }
    return false;           
}

const TArray<UItem*>& UInventoryComponent::GetInventory() const
{
    return Inventory;
}



UItem* UInventoryComponent::GetItemAt(int32 Index)
{
    if (Inventory.IsValidIndex(Index))
    {
        return Inventory[Index];
    }
    return nullptr;
}

void UInventoryComponent::SetItemAt(int32 Index, UItem* Item)
{
    if (Inventory.IsValidIndex(Index))
    {
        Inventory[Index] = Item;
    }
}
