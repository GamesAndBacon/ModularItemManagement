// InventoryComponentDetailCustomization.cpp

#include "Inventory/InventoryComponentDetailCustomization.h"
#include "Inventory/InventoryComponent.h"
#include "DetailLayoutBuilder.h"
#include "DetailCategoryBuilder.h"
#include "DetailWidgetRow.h"
#include "IDetailChildrenBuilder.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "PropertyHandle.h"

TSharedRef<IDetailCustomization> FInventoryComponentDetailCustomization::MakeInstance()
{
    return MakeShareable(new FInventoryComponentDetailCustomization);
}

void FInventoryComponentDetailCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
    TArray<TWeakObjectPtr<UObject>> ObjectsBeingCustomized;
    DetailBuilder.GetObjectsBeingCustomized(ObjectsBeingCustomized);

    if (ObjectsBeingCustomized.Num() == 1)
    {
        TWeakObjectPtr<UInventoryComponent> InventoryComponent = Cast<UInventoryComponent>(ObjectsBeingCustomized[0]);
        if (InventoryComponent.IsValid())
        {
            IDetailCategoryBuilder& InventoryCategory = DetailBuilder.EditCategory("Inventory");

            InventoryCategory.AddCustomRow(FText::FromString("Width"))
            .NameContent()
            [
                SNew(STextBlock)
                .Text(FText::FromString("Width"))
            ]
            .ValueContent()
            [
                SNew(SNumericEntryBox<int32>)
                .Value_Lambda([this, InventoryComponent]() { return InventoryComponent->Width; })
                .OnValueChanged_Lambda([this, InventoryComponent](int32 NewValue) { OnWidthChanged(NewValue, InventoryComponent.Get()); })
            ];

            InventoryCategory.AddCustomRow(FText::FromString("Height"))
            .NameContent()
            [
                SNew(STextBlock)
                .Text(FText::FromString("Height"))
            ]
            .ValueContent()
            [
                SNew(SNumericEntryBox<int32>)
                .Value_Lambda([this, InventoryComponent]() { return InventoryComponent->Height; })
                .OnValueChanged_Lambda([this, InventoryComponent](int32 NewValue) { OnHeightChanged(NewValue, InventoryComponent.Get()); })
            ];

            InventoryCategory.AddCustomRow(FText::FromString("Slots"))
            .NameContent()
            [
                SNew(STextBlock)
                .Text(FText::FromString("Slots"))
            ]
            .ValueContent()
            [
                SNew(SNumericEntryBox<int32>)
                .Value_Lambda([this, InventoryComponent]() { return InventoryComponent->Slots; })
                .OnValueChanged_Lambda([this, InventoryComponent](int32 NewValue) { OnSlotsChanged(NewValue, InventoryComponent.Get()); })
                .IsEnabled_Lambda([this, InventoryComponent]() { return InventoryComponent->Width <= 0 || InventoryComponent->Height <= 0; })
            ];
        }
    }
}

void FInventoryComponentDetailCustomization::OnWidthChanged(int32 NewValue, UInventoryComponent* InventoryComponent)
{
    if (InventoryComponent)
    {
        InventoryComponent->Width = NewValue;
        InventoryComponent->UpdateSlots();
    }
}

void FInventoryComponentDetailCustomization::OnHeightChanged(int32 NewValue, UInventoryComponent* InventoryComponent)
{
    if (InventoryComponent)
    {
        InventoryComponent->Height = NewValue;
        InventoryComponent->UpdateSlots();
    }
}

void FInventoryComponentDetailCustomization::OnSlotsChanged(int32 NewValue, UInventoryComponent* InventoryComponent)
{
    if (InventoryComponent)
    {
        InventoryComponent->OnSlotsChanged(NewValue);
    }
}
