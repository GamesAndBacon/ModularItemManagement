// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "UObject/NoExportTypes.h"
#include "BaseMutator.generated.h"

class UBaseItem;
/**
 * 
 */
UCLASS(EditInlineNew, Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UBaseMutator : public UObject
{
	GENERATED_BODY()
public:		
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnAddedToItem(UBaseItem* Item);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void OnRemovedFromItem(UBaseItem* Item);


};
