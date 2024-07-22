// Copyright 2024 Heac - All rights reserved

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"


class FItemAssetAction : public FAssetTypeActions_Base
{
public:

    FItemAssetAction(FString _Name, UClass* _SupportedClass, EAssetTypeCategories::Type _Category) :
    Name(_Name), SupportedClass(_SupportedClass), AssetCategory(_Category) {}

    virtual FText GetName() const override { return FText::FromString(Name); }
    virtual FColor GetTypeColor() const override { return FColor::Cyan; }
    virtual UClass* GetSupportedClass() const override { return SupportedClass; }
    virtual uint32 GetCategories() override { return AssetCategory; }

    FString Name;
    UClass* SupportedClass;
    EAssetTypeCategories::Type AssetCategory;
};
