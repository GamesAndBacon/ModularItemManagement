// InventoryComponentDetailCustomization.h

#pragma once

#include "IDetailCustomization.h"
#include "InventoryComponent.h"

class FInventoryComponentDetailCustomization : public IDetailCustomization
{
public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<IDetailCustomization> MakeInstance();

	/** IDetailCustomization interface */
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	void OnWidthChanged(int32 NewValue, UInventoryComponent* InventoryComponent);
	void OnHeightChanged(int32 NewValue, UInventoryComponent* InventoryComponent);
	void OnSlotsChanged(int32 NewValue, UInventoryComponent* InventoryComponent);
};
