// Created by Shain Furby

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CustomObjectFactory.generated.h"

/**
 * Factory class for creating UItemModule objects.
 */
UCLASS()
class MODULARITEMMANAGEMENTEDITOR_API UItemModFactory : public UFactory
{
	GENERATED_BODY()

public:
	UItemModFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};

/**
 * Factory class for creating UItemDefinition data assets.
 */
UCLASS()
class MODULARITEMMANAGEMENTEDITOR_API UItemDefFactory : public UFactory
{
	GENERATED_BODY()

public:
	UItemDefFactory();
	
	virtual UDataAsset* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};
