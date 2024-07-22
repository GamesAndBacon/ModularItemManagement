#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemModule.h"
#include "ItemDataAsset.h"
#include "InstancedStruct.h"
#include "Serialization/StructuredArchive.h"
#include "ItemsLib.generated.h"

class UItem;

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

UCLASS()
class MODULARITEMMANAGEMENT_API UItemsLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Item")
	static FItemRecord SaveItem(UItem* Item);

	UFUNCTION(BlueprintCallable, Category = "Item")
	static UItem* LoadItem(const FItemRecord& ItemRecord, UObject* Outer);
};
