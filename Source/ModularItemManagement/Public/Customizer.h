// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Customizer.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Abstract,EditInlineNew)
class MODULARITEMMANAGEMENT_API UCustomizer : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintImplementableEvent, Category = "Customize")
		void Customize(AActor* owner,FName Event,UObject* payload);

};
