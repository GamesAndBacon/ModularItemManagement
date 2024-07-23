// Created by Shain Furby

#include "ModularItemManagementEditor.h"
#include "ModularItemManagementEditorActions.h"
#include "AssetToolsModule.h"
#include "ModularItemManagement/Public/ItemDefinition.h"
#include "ModularItemManagement/Public/ItemModule.h"

/**
 * Module startup function
 * Registers asset actions when the module starts.
 */
void ModularItemManagementEditorModule::StartupModule()
{
    RegisterAssetActions();
}

/**
 * Module shutdown function
 * Unregisters asset actions when the module shuts down.
 */
void ModularItemManagementEditorModule::ShutdownModule()
{
    UnregisterAssetActions();
}

/**
 * Registers asset actions for item modules and item definitions.
 */
void ModularItemManagementEditorModule::RegisterAssetActions()
{
    IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

    const EAssetTypeCategories::Type ModularItems = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Modular Items")), FText::FromString("Modular Items"));

    RegisterAsset(AssetTools, "Item Module", UItemModule::StaticClass(), ModularItems);
    RegisterAsset(AssetTools, "Item Definition", UItemDefinition::StaticClass(), ModularItems);
}

/**
 * Unregisters asset actions.
 */
void ModularItemManagementEditorModule::UnregisterAssetActions()
{
    if (FModuleManager::Get().IsModuleLoaded("AssetTools"))
    {
        IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();

        for (auto& Action : RegisteredAssetActions)
        {
            AssetTools.UnregisterAssetTypeActions(Action.ToSharedRef());
        }

        RegisteredAssetActions.Empty();
    }
}

/**
 * Registers a custom asset with the asset tools module.
 */
void ModularItemManagementEditorModule::RegisterAsset(IAssetTools& AssetTools, FString _Name, UClass* _SupportedClass, EAssetTypeCategories::Type _Category)
{
    TSharedPtr<IAssetTypeActions> Action = MakeShareable(new FItemAssetAction(_Name, _SupportedClass, _Category));
    AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());
    RegisteredAssetActions.Add(Action);
}

IMPLEMENT_MODULE(ModularItemManagementEditorModule, ModularItemManagementEditor)
