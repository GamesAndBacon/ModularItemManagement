#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemModule.h"
#include "InstancedStruct.h"
#include "Item.h"
#include "ItemDefinition.generated.h"

UCLASS(BlueprintType, Blueprintable)
class MODULARITEMMANAGEMENT_API UItemDefinition : public UDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Item Data")
	TSubclassOf<UItem> ItemClass = UItem::StaticClass();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Data")
	TMap<TSubclassOf<UItemModule>,FInstancedStruct> Modules;

};
