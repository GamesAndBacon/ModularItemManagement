// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/EquipmentComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Delegate FEquipmentChanged
struct Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics
{
	struct EquipmentComponent_eventEquipmentChanged_Parms
	{
		FGameplayTag Slot;
		UBaseItem* NewItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventEquipmentChanged_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventEquipmentChanged_Parms, NewItem), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::NewProp_NewItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "EquipmentChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::EquipmentComponent_eventEquipmentChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::EquipmentComponent_eventEquipmentChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UEquipmentComponent::FEquipmentChanged_DelegateWrapper(const FMulticastScriptDelegate& EquipmentChanged, FGameplayTag Slot, UBaseItem* NewItem)
{
	struct EquipmentComponent_eventEquipmentChanged_Parms
	{
		FGameplayTag Slot;
		UBaseItem* NewItem;
	};
	EquipmentComponent_eventEquipmentChanged_Parms Parms;
	Parms.Slot=Slot;
	Parms.NewItem=NewItem;
	EquipmentChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FEquipmentChanged

// Begin Class UEquipmentComponent Function GetEquippedItem
struct Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics
{
	struct EquipmentComponent_eventGetEquippedItem_Parms
	{
		FGameplayTag Slot;
		UBaseItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItem_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItem_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetEquippedItem", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::EquipmentComponent_eventGetEquippedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::EquipmentComponent_eventGetEquippedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execGetEquippedItem)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseItem**)Z_Param__Result=P_THIS->GetEquippedItem(Z_Param_Slot);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function GetEquippedItem

// Begin Class UEquipmentComponent Function SetEquippedItem
struct Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics
{
	struct EquipmentComponent_eventSetEquippedItem_Parms
	{
		FGameplayTag Slot;
		UBaseItem* NewItem;
		UBaseItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventSetEquippedItem_Parms, Slot), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_NewItem = { "NewItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventSetEquippedItem_Parms, NewItem), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentComponent_eventSetEquippedItem_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_Slot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_NewItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "SetEquippedItem", nullptr, nullptr, Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::EquipmentComponent_eventSetEquippedItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::EquipmentComponent_eventSetEquippedItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEquipmentComponent::execSetEquippedItem)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Slot);
	P_GET_OBJECT(UBaseItem,Z_Param_NewItem);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseItem**)Z_Param__Result=P_THIS->SetEquippedItem(Z_Param_Slot,Z_Param_NewItem);
	P_NATIVE_END;
}
// End Class UEquipmentComponent Function SetEquippedItem

// Begin Class UEquipmentComponent
void UEquipmentComponent::StaticRegisterNativesUEquipmentComponent()
{
	UClass* Class = UEquipmentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetEquippedItem", &UEquipmentComponent::execGetEquippedItem },
		{ "SetEquippedItem", &UEquipmentComponent::execSetEquippedItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentComponent);
UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister()
{
	return UEquipmentComponent::StaticClass();
}
struct Z_Construct_UClass_UEquipmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "ModularItems" },
		{ "IncludePath", "EquipmentComponent.h" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemUnequipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlots_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquippedItems_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemEquipped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemUnequipped;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemSlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquippedItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EquippedItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature, "EquipmentChanged__DelegateSignature" }, // 755496868
		{ &Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem, "GetEquippedItem" }, // 576596323
		{ &Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem, "SetEquippedItem" }, // 3969294472
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemEquipped = { "ItemEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, ItemEquipped), Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemEquipped_MetaData), NewProp_ItemEquipped_MetaData) }; // 755496868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemUnequipped = { "ItemUnequipped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, ItemUnequipped), Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemUnequipped_MetaData), NewProp_ItemUnequipped_MetaData) }; // 755496868
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots_Inner = { "ItemSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots = { "ItemSlots", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, ItemSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlots_MetaData), NewProp_ItemSlots_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Inner = { "EquippedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems = { "EquippedItems", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEquipmentComponent, EquippedItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquippedItems_MetaData), NewProp_EquippedItems_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemEquipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemUnequipped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEquipmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentComponent_Statics::ClassParams = {
	&UEquipmentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentComponent()
{
	if (!Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton, Z_Construct_UClass_UEquipmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentComponent.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UEquipmentComponent>()
{
	return UEquipmentComponent::StaticClass();
}
UEquipmentComponent::UEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentComponent);
UEquipmentComponent::~UEquipmentComponent() {}
// End Class UEquipmentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentComponent, UEquipmentComponent::StaticClass, TEXT("UEquipmentComponent"), &Z_Registration_Info_UClass_UEquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentComponent), 1623092247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_2126925442(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
