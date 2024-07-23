// Created by Shain Furby

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

/**
 * FItemAssetAction class
 * Custom asset action for handling item assets in the editor.
 */
class FItemAssetAction : public FAssetTypeActions_Base
{
public:
    FItemAssetAction(FString _Name, UClass* _SupportedClass, EAssetTypeCategories::Type _Category)
        : Name(_Name), SupportedClass(_SupportedClass), AssetCategory(_Category) {}

    virtual FText GetName() const override { return FText::FromString(Name); }
    virtual FColor GetTypeColor() const override { return FColor::Cyan; }
    virtual UClass* GetSupportedClass() const override { return SupportedClass; }
    virtual uint32 GetCategories() override { return AssetCategory; }

private:
    FString Name;
    UClass* SupportedClass;
    EAssetTypeCategories::Type AssetCategory;
};
