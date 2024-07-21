// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryComponent.h"
#include "GameFramework/Actor.h"
#include "UObject/Interface.h"
#include "InventoryInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class MODULARITEMMANAGEMENT_API UInventoryInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class MODULARITEMMANAGEMENT_API IInventoryInterface
{
	GENERATED_IINTERFACE_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ModularItems")
		UInventoryComponent* GetInventory();
};
