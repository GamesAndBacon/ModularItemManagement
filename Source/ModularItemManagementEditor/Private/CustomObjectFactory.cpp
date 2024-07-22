// Copyright 2024 Heac - All rights reserved


#include "CustomObjectFactory.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "ModularItemManagement/Public/ItemDefinition.h"
#include "ModularItemManagement/Public/ItemModule.h"

UItemModFactory::UItemModFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UItemModule::StaticClass();
}

UObject* UItemModFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FKismetEditorUtilities::CreateBlueprint(SupportedClass, InParent, InName, BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
}

UItemDefFactory::UItemDefFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UItemDefinition::StaticClass();
}

UDataAsset* UItemDefFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UDataAsset* NewDataAsset = NewObject<UDataAsset>(InParent, InClass, InName, Flags);
	return NewDataAsset;
}





