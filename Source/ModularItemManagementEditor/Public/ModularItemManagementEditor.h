// HF Stats by Mathieu Jacq, 2024

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "IAssetTools.h"


class ModularItemManagementEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	void RegisterAssetActions();
	void UnregisterAssetActions();

	void RegisterAsset(IAssetTools& AssetTools, FString _Name, UClass* _SupportedClass, EAssetTypeCategories::Type _Category);

	TArray<TSharedPtr<IAssetTypeActions>> RegisteredAssetActions;
};
