#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ItemModule.h"
#include "ItemDataAsset.h"
#include "ItemsLib.generated.h"

class UItem;

USTRUCT(BlueprintType)
struct FItemRecord
{
	GENERATED_BODY()
public:
	UPROPERTY(SaveGame)
	UClass* Class;

	UPROPERTY(SaveGame)
	TArray<uint8> ItemData;

	friend FArchive& operator<<(FArchive& Ar, FItemRecord& CompData)
	{
		Ar << CompData.Class;
		Ar << CompData.ItemData;
		return Ar;
	}
};

/**
 * 
 */
UCLASS()
class MODULARITEMMANAGEMENT_API UItemsLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Trinity|Item")
	static FItemRecord SaveItem(UItem* item);
    
	UFUNCTION(BlueprintCallable, Category = "Trinity|Item")
	static UItem* LoadItem(FItemRecord savedata, UObject* Outer); 
};
