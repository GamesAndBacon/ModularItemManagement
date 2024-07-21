﻿#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ItemModule.h"
#include "InstancedStruct.h"
#include "ItemDataAsset.generated.h"

UCLASS(BlueprintType, Blueprintable)
class MODULARITEMMANAGEMENT_API UItemDataAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Data")
	TMap<TSubclassOf<UItemModule>,FInstancedStruct> Modules;
	    
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item Data")
	FString ItemName;
    
};
