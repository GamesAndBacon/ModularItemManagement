// Copyright Epic Games, Inc. All Rights Reserved.

#include "ModularItemManagement.h"

#include "Inventory/InventoryComponentDetailCustomization.h"

#define LOCTEXT_NAMESPACE "FModularItemManagementModule"

void FModularItemManagementModule::StartupModule()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
	PropertyModule.RegisterCustomClassLayout("InventoryComponent", FOnGetDetailCustomizationInstance::CreateStatic(&FInventoryComponentDetailCustomization::MakeInstance));
}


void FModularItemManagementModule::ShutdownModule()
{
	if (FModuleManager::Get().IsModuleLoaded("PropertyEditor"))
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.UnregisterCustomClassLayout("InventoryComponent");
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FModularItemManagementModule, ModularItemManagement)