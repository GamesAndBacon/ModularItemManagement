// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/BaseMutator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMutator() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseMutator();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseMutator_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Class UBaseMutator Function OnAddedToItem
struct BaseMutator_eventOnAddedToItem_Parms
{
	UBaseItem* Item;
};
static FName NAME_UBaseMutator_OnAddedToItem = FName(TEXT("OnAddedToItem"));
void UBaseMutator::OnAddedToItem(UBaseItem* Item)
{
	BaseMutator_eventOnAddedToItem_Parms Parms;
	Parms.Item=Item;
	ProcessEvent(FindFunctionChecked(NAME_UBaseMutator_OnAddedToItem),&Parms);
}
struct Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseMutator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMutator_eventOnAddedToItem_Parms, Item), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMutator, nullptr, "OnAddedToItem", nullptr, nullptr, Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::PropPointers), sizeof(BaseMutator_eventOnAddedToItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseMutator_eventOnAddedToItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMutator_OnAddedToItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseMutator::execOnAddedToItem)
{
	P_GET_OBJECT(UBaseItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAddedToItem_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UBaseMutator Function OnAddedToItem

// Begin Class UBaseMutator Function OnRemovedFromItem
struct BaseMutator_eventOnRemovedFromItem_Parms
{
	UBaseItem* Item;
};
static FName NAME_UBaseMutator_OnRemovedFromItem = FName(TEXT("OnRemovedFromItem"));
void UBaseMutator::OnRemovedFromItem(UBaseItem* Item)
{
	BaseMutator_eventOnRemovedFromItem_Parms Parms;
	Parms.Item=Item;
	ProcessEvent(FindFunctionChecked(NAME_UBaseMutator_OnRemovedFromItem),&Parms);
}
struct Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseMutator.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseMutator_eventOnRemovedFromItem_Parms, Item), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::NewProp_Item,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMutator, nullptr, "OnRemovedFromItem", nullptr, nullptr, Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::PropPointers), sizeof(BaseMutator_eventOnRemovedFromItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseMutator_eventOnRemovedFromItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseMutator::execOnRemovedFromItem)
{
	P_GET_OBJECT(UBaseItem,Z_Param_Item);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRemovedFromItem_Implementation(Z_Param_Item);
	P_NATIVE_END;
}
// End Class UBaseMutator Function OnRemovedFromItem

// Begin Class UBaseMutator
void UBaseMutator::StaticRegisterNativesUBaseMutator()
{
	UClass* Class = UBaseMutator::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAddedToItem", &UBaseMutator::execOnAddedToItem },
		{ "OnRemovedFromItem", &UBaseMutator::execOnRemovedFromItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseMutator);
UClass* Z_Construct_UClass_UBaseMutator_NoRegister()
{
	return UBaseMutator::StaticClass();
}
struct Z_Construct_UClass_UBaseMutator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseMutator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseMutator.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseMutator_OnAddedToItem, "OnAddedToItem" }, // 1556322905
		{ &Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem, "OnRemovedFromItem" }, // 4284350512
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMutator>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseMutator_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMutator_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseMutator_Statics::ClassParams = {
	&UBaseMutator::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMutator_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseMutator_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseMutator()
{
	if (!Z_Registration_Info_UClass_UBaseMutator.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseMutator.OuterSingleton, Z_Construct_UClass_UBaseMutator_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseMutator.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UBaseMutator>()
{
	return UBaseMutator::StaticClass();
}
UBaseMutator::UBaseMutator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMutator);
UBaseMutator::~UBaseMutator() {}
// End Class UBaseMutator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseMutator, UBaseMutator::StaticClass, TEXT("UBaseMutator"), &Z_Registration_Info_UClass_UBaseMutator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseMutator), 76138607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_2377094248(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
