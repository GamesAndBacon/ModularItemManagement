#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BaseMutator.h"
#include "ItemDataAsset.h"
#include "ItemsLib.generated.h"

class UBaseItem;

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
	static FItemRecord SaveItem(UBaseItem* item);
    
	UFUNCTION(BlueprintCallable, Category = "Trinity|Item")
	static UBaseItem* LoadItem(FItemRecord savedata, UObject* Outer);
    
	UFUNCTION(BlueprintCallable, Category = "Trinity|Item")
	static FItemRecord SaveMutator(TSubclassOf<UBaseMutator> Mutator, FInstancedStruct& MutatorData);
    
	// UFUNCTION(BlueprintCallable, Category = "Trinity|Item")
	// static void LoadMutator(FItemRecord Record, UItemDataAsset* ItemDataAsset, TSubclassOf<UBaseMutator>& OutMutator, FInstancedStruct&
	//                         OutMutatorData);
};
