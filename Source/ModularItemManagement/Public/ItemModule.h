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
	UFUNCTION(BlueprintNativeEvent)
	void OnAddedToItem(UItem* Item) const;
	UFUNCTION(BlueprintNativeEvent)
	void OnRemovedFromItem(UItem* Item) const;


};
