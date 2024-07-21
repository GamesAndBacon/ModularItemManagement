// InventoryComponent.cpp

#include "InventoryComponent.h"
#include "BaseItem.h"
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


bool UInventoryComponent::AddItem(UBaseItem* Item)
{
    if (Item)
    {
        Inventory.Add(Item);
        return true;
    }
    return false;
}

bool UInventoryComponent::RemoveItem(UBaseItem* Item, int32 index)
{
    if(Item && Inventory.IsValidIndex(index))
    {
        Inventory.RemoveAt(index);
        ItemRemoved.Broadcast(Item, index);
        return true;
    }
    return false;           
}

