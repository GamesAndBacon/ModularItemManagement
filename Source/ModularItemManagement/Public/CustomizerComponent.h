// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Customizer.h"
#include "Components/ActorComponent.h"
#include "CustomizerComponent.generated.h"


UCLASS( ClassGroup=(Customizer), meta=(BlueprintSpawnableComponent) )
class MODULARITEMMANAGEMENT_API UCustomizerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Instanced,EditAnywhere, Category = "Customize")
	TMap<FName, UCustomizer*> Customizers;
	UFUNCTION(BlueprintCallable,Category="Customization")
	void UpdateCustomization(FName type, UObject* payload);

		
};
