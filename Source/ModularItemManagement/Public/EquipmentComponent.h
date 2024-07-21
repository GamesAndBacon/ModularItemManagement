// EquipmentComponent.h

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EquipmentComponent.generated.h"

class UBaseItem;

UCLASS(ClassGroup = (ModularItems), meta = (BlueprintSpawnableComponent))
class MODULARITEMMANAGEMENT_API UEquipmentComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	int32 GetSlot(FGameplayTag Slot);

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEquipmentChanged, FGameplayTag, Slot, UBaseItem*, NewItem);

	UPROPERTY(BlueprintAssignable)
	FEquipmentChanged ItemEquipped;

	UPROPERTY(BlueprintAssignable)
	FEquipmentChanged ItemUnequipped;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	TArray<FGameplayTag> ItemSlots;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	TArray<UBaseItem*> EquippedItems;

	UFUNCTION(BlueprintPure, Category = "ModularItems")
	UBaseItem* GetEquippedItem(FGameplayTag Slot);

	UFUNCTION(BlueprintCallable, Category = "ModularItems")
	UBaseItem* SetEquippedItem(FGameplayTag Slot, UBaseItem* NewItem);
};
