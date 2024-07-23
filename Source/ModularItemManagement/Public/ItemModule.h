// Created by Shain Furby

#pragma once

#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "UObject/NoExportTypes.h"
#include "ItemModule.generated.h"

class UItem;

// Declare dynamic multicast delegate for module changes
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnModuleChanged, UItem*, Item, FInstancedStruct, ModuleData);


/**
 * UItemModule class
 * Represents a module that can be added to an item.
 */
UCLASS(EditInlineNew, Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UItemModule : public UObject
{
	GENERATED_BODY()

public:
	// Blueprint Native Events
	UFUNCTION(BlueprintNativeEvent)
	void OnAddedToItem(UItem* Item, FInstancedStruct ModuleData) const;
	
	UFUNCTION(BlueprintNativeEvent)
	void OnRemovedFromItem(UItem* Item, FInstancedStruct ModuleData) const;
	
	UFUNCTION(BlueprintNativeEvent)
	void OnModuleUpdated(UItem* Item, FInstancedStruct ModuleData) const;

	// BlueprintAssignable events
	UPROPERTY(BlueprintAssignable, Category = "ItemModule")
	FOnModuleChanged OnAddedToItemEvent;
	
	UPROPERTY(BlueprintAssignable, Category = "ItemModule")
	FOnModuleChanged OnRemovedFromItemEvent;
	
	UPROPERTY(BlueprintAssignable, Category = "ItemModule")
	FOnModuleChanged OnModuleUpdatedEvent;
};
