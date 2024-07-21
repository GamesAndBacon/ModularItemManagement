// InventoryComponent.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

class UItem;
class UItemModule;

UCLASS(ClassGroup = (ModularItems), meta = (BlueprintSpawnableComponent))
class MODULARITEMMANAGEMENT_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Delegate for inventory changes
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryChanged, UItem*, NewItem, int32, Index);

	// Called every frame but turned off
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "ModularItems")
	bool AddItem(UItem* Item);

	UFUNCTION(BlueprintCallable, Category = "ModularItems")
	bool RemoveItem(UItem* Item, int32 index);
	
	UPROPERTY(EditAnywhere)
	TArray<UItem*> Inventory;

	UFUNCTION(BlueprintCallable, Category = "ModularItems")
	const TArray<UItem*>& GetInventory() const;
		
	// Declare functions for our delegate
	UPROPERTY(BlueprintAssignable)
	FInventoryChanged ItemAdded;

	UPROPERTY(BlueprintAssignable)
	FInventoryChanged ItemRemoved;

	UFUNCTION(BlueprintCallable, Category = "ModularItems")
	UItem* GetItemAt(int32 Index);
	
	UFUNCTION(BlueprintCallable, Category = "ModularItems")
	void SetItemAt(int32 Index, UItem* Item);

};