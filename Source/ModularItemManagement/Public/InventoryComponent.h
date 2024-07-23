// Created by Shain Furby

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

class UItem;
class UItemModule;

/**
 * UInventoryComponent class
 * Actor component that manages an inventory of items.
 */
UCLASS(ClassGroup = (ModularItems), meta = (BlueprintSpawnableComponent))
class MODULARITEMMANAGEMENT_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Constructor
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Delegate for inventory changes
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryChanged, UItem*, NewItem, int32, Index);

	// Called every frame but turned off
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Inventory management functions
	UFUNCTION(BlueprintCallable, Category = "Inventory|Management")
	bool AddItem(UItem* Item);

	UFUNCTION(BlueprintCallable, Category = "Inventory|Management")
	bool RemoveItem(UItem* Item, int32 Index);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory|Access")
	const TArray<UItem*>& GetInventory() const;
		
	UFUNCTION(BlueprintCallable, Category = "Inventory|Access")
	UItem* GetItemAt(int32 Index);
	
	UFUNCTION(BlueprintCallable, Category = "Inventory|Management")
	void MoveItem(int32 FromIndex, int32 ToIndex);

	// Inventory array
	UPROPERTY(EditAnywhere)
	TArray<UItem*> Inventory;

	// Inventory change events
	UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
	FInventoryChanged ItemAdded;

	UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
	FInventoryChanged ItemRemoved;

	UPROPERTY(BlueprintAssignable, Category = "Inventory|Events")
	FInventoryChanged ItemMoved;
};
