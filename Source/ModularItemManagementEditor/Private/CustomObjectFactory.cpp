// Created by Shain Furby

#include "CustomObjectFactory.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "ModularItemManagement/Public/ItemDefinition.h"
#include "ModularItemManagement/Public/ItemModule.h"

/**
 * UItemModFactory constructor
 * Initializes the factory for creating UItemModule objects.
 */
UItemModFactory::UItemModFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UItemModule::StaticClass();
}

/**
 * Creates a new UItemModule object.
 */
UObject* UItemModFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return FKismetEditorUtilities::CreateBlueprint(SupportedClass, InParent, InName, BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass());
}

/**
 * UItemDefFactory constructor
 * Initializes the factory for creating UItemDefinition data assets.
 */
UItemDefFactory::UItemDefFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UItemDefinition::StaticClass();
}

/**
 * Creates a new UItemDefinition data asset.
 */
UDataAsset* UItemDefFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UDataAsset* NewDataAsset = NewObject<UDataAsset>(InParent, InClass, InName, Flags);
	return NewDataAsset;
}
