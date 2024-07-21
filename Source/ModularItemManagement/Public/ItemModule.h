// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "UObject/NoExportTypes.h"
#include "ItemModule.generated.h"

class UItem;
/**
 * 
 */
UCLASS(EditInlineNew, Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UItemModule : public UObject
{
	GENERATED_BODY()
public:		
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnAddedToItem(UItem* Item);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnRemovedFromItem(UItem* Item);


};
