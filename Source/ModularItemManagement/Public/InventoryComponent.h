// InventoryComponent.h

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

class UBaseItem;
class UBaseMutator;

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
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInventoryChanged, UBaseItem*, NewItem, int32, Index);

	// Called every frame but turned off
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "ModularItems")
	bool AddItem(UBaseItem* Item);

	UFUNCTION(BlueprintCallable, Category = "ModularItems")
	bool RemoveItem(UBaseItem* Item, int32 Quantity = 1);
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	TArray<UBaseItem*> Inventory;
	
	// Declare functions for our delegate
	UPROPERTY(BlueprintAssignable)
	FInventoryChanged ItemAdded;

	UPROPERTY(BlueprintAssignable)
	FInventoryChanged ItemRemoved;
};
