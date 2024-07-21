// InventoryComponent.cpp

#include "InventoryComponent.h"
#include "BaseItem.h"
#include "EquipmentComponent.h"
#include "ModularItemManagement/Interfaces/InventoryInterface.h"
#include "ModularItemManagement/Interfaces/EquipmentInterface.h"
#include "Engine/ActorChannel.h"

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

void UInventoryComponent::UseItem(UBaseItem* Item)
{
    Item->DoUse(GetOwner());
}

void UInventoryComponent::EquipItem(UBaseItem* Item, AActor* Actor)
{
    if (Actor && Item)
    {
        UEquipmentComponent* EquipmentComponent = IEquipmentInterface::Execute_GetEquipment(Actor);
        if (EquipmentComponent)
        {
            Item->DoEquip(EquipmentComponent);
        }
    }
}

void UInventoryComponent::UnEquipItem(UBaseItem* Item)
{
    if (Item && Item->UseActor)
    {
        UInventoryComponent* InventoryComponent = IInventoryInterface::Execute_GetInventory(Item->UseActor);
        if (InventoryComponent)
        {
            Item->DoUnEquip(InventoryComponent);
        }
    }
}

int32 UInventoryComponent::AddItem(UBaseItem* Item, int32 Quantity)
{
    if (!Item || Quantity <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("AddItem: Invalid item pointer or quantity."));
        return Quantity; // Return the remaining quantity which is all of it
    }

    // Check if item is stackable
    if (Item->IsStackable())
    {
        // Try to find an existing stack of the same item
        for (UBaseItem* ExistingItem : Inventory)
        {
            if (ExistingItem && ExistingItem->GetClass() == Item->GetClass())
            {
                int32 AddedAmount = ExistingItem->AddToStack(Quantity);
                Quantity -= AddedAmount;

                // Broadcast the change for the updated item
                ItemAdded.Broadcast(ExistingItem, Inventory.IndexOfByKey(ExistingItem));

                // If all quantity has been added, return
                if (Quantity <= 0)
                {
                    return 0; // All items were added successfully
                }
            }
        }
    }

    // If the item is not stackable or there is leftover quantity, add a new item
    if (Item->GetOuter() != GetOwner())
    {
        Item->Rename(nullptr, GetOwner(), REN_None);
    }

    int32 AmountToAdd = FMath::Min(Quantity, Item->MaxStackSize);
    Item->StackSize = AmountToAdd;
    int32 IndexToAdd = Inventory.Add(Item);
    ItemAdded.Broadcast(Item, IndexToAdd);

    // Calculate remaining quantity
    Quantity -= AmountToAdd;

    // If there is still remaining quantity, recursively add more items
    if (Quantity > 0)
    {
        // Create a new instance of the item for the remaining quantity
        UBaseItem* NewItem = DuplicateObject<UBaseItem>(Item, GetOwner());
        return AddItem(NewItem, Quantity);
    }

    return 0; // All items were added successfully
}

int32 UInventoryComponent::RemoveItem(UBaseItem* Item, int32 Quantity)
{
    if (!Item || Quantity <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("RemoveItem: Invalid item pointer or quantity."));
        return 0;
    }

    int32 IndexToRemove = Inventory.IndexOfByKey(Item);
    if (IndexToRemove != INDEX_NONE)
    {
        if (Item->IsStackable())
        {
            int32 RemovedAmount = Item->RemoveFromStack(Quantity);
            Quantity -= RemovedAmount;

            // If there is no more quantity left in this stack, remove it from inventory
            if (Item->StackSize <= 0)
            {
                Inventory.RemoveAt(IndexToRemove);
                ItemRemoved.Broadcast(Item, IndexToRemove);
            }

            // If there is still remaining quantity, recursively remove more items
            if (Quantity > 0)
            {
                RemoveItem(Item, Quantity);
            }
        }
        else
        {
            Inventory.RemoveAt(IndexToRemove);
            ItemRemoved.Broadcast(Item, IndexToRemove);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("RemoveItem: Item not found in the inventory."));
    }
    return 0;
}

