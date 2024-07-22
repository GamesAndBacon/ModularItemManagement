#pragma once

#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "UObject/NoExportTypes.h"
#include "ItemModule.generated.h"

class UItem;

// Declare dynamic multicast delegates for blueprint events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAddedToItem, UItem*, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemovedFromItem, UItem*, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModuleUpdated, UItem*, Item);

/**
 * 
 */
UCLASS(EditInlineNew, Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UItemModule : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintNativeEvent)
	void OnAddedToItem(UItem* Item) const;
	
	UFUNCTION(BlueprintNativeEvent)
	void OnRemovedFromItem(UItem* Item) const;
	
	UFUNCTION(BlueprintNativeEvent)
	void OnModuleUpdated(UItem* Item) const;

	// BlueprintAssignable events
	UPROPERTY(BlueprintAssignable, Category = "ItemModule")
	FOnAddedToItem OnAddedToItemEvent;
	
	UPROPERTY(BlueprintAssignable, Category = "ItemModule")
	FOnRemovedFromItem OnRemovedFromItemEvent;
	
	UPROPERTY(BlueprintAssignable, Category = "ItemModule")
	FOnModuleUpdated OnModuleUpdatedEvent;
};
