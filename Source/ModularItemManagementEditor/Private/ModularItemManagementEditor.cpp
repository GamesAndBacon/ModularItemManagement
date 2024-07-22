// HF Stats by Mathieu Jacq, 2024

#include "ModularItemManagementEditor.h"
#include "ModularItemManagementEditorActions.h"
#include "AssetToolsModule.h"
#include "ModularItemManagement/Public/ItemDefinition.h"
#include "ModularItemManagement/Public/ItemModule.h"


void ModularItemManagementEditorModule::StartupModule()
{
    RegisterAssetActions();
}

void ModularItemManagementEditorModule::ShutdownModule()
{
    UnregisterAssetActions();
}

void ModularItemManagementEditorModule::RegisterAssetActions()
{
    IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();

    const EAssetTypeCategories::Type ModularItems = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("Modular Items")), FText::FromString("Modular Items"));

    RegisterAsset(AssetTools, "Item Module", UItemModule::StaticClass(), ModularItems);
    RegisterAsset(AssetTools, "Item Definition", UItemDefinition::StaticClass(), ModularItems);

}

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

void ModularItemManagementEditorModule::RegisterAsset(IAssetTools& AssetTools, FString _Name, UClass* _SupportedClass, EAssetTypeCategories::Type _Category)
{
    TSharedPtr<IAssetTypeActions> Action = MakeShareable(new FItemAssetAction(_Name, _SupportedClass, _Category));
    AssetTools.RegisterAssetTypeActions(Action.ToSharedRef());
    RegisteredAssetActions.Add(Action);
}


IMPLEMENT_MODULE(ModularItemManagementEditorModule, ModularItemManagementEditor)