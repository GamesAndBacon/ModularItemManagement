// Created by Shain Furby

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemModule.h"
#include "ItemDefinition.h"
#include "InstancedStruct.h"
#include "Item.h"
#include "Serialization/StructuredArchive.h"
#include "ItemsLib.generated.h"

class UItem;

/**
 * Struct representing an item record, used for saving and loading items.
 */
USTRUCT(BlueprintType)
struct FItemRecord
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FGuid ItemGuid;

	UPROPERTY()
	FString ItemName;

	UPROPERTY()
	TArray<TSubclassOf<UItemModule>> ModuleClasses;

	UPROPERTY()
	TArray<uint8> ModuleData;
};

/**
 * UItemsLib class
 * Blueprint function library for handling items.
 */
UCLASS()
class MODULARITEMMANAGEMENT_API UItemsLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// Functions for item management
	UFUNCTION(BlueprintCallable, Category = "Item|SaveLoad")
	static FItemRecord SaveItem(UItem* Item);

	UFUNCTION(BlueprintCallable, Category = "Item|SaveLoad")
	static UItem* LoadItem(const FItemRecord& ItemRecord, UObject* Outer);
	
	UFUNCTION(BlueprintCallable, Category = "Item|Creation", meta = (DefaultToSelf = "Outer", DeterminesOutputType = "ItemClass"))
	static UItem* CreateItem(UItemDefinition* ItemDefinition, UObject* Outer);
};
