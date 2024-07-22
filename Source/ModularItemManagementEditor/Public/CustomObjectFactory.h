// Copyright 2024 Heac - All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "CustomObjectFactory.generated.h"


UCLASS()
class MODULARITEMMANAGEMENTEDITOR_API UItemModFactory : public UFactory
{
	GENERATED_BODY()

	UItemModFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};

UCLASS()
class MODULARITEMMANAGEMENTEDITOR_API UItemDefFactory : public UFactory
{
	GENERATED_BODY()

	UItemDefFactory();
	
	virtual UDataAsset* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
};

