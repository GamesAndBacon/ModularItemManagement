// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/ItemModule.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemModule() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItem_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemModule();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemModule_NoRegister();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Delegate FOnModuleChanged
struct Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics
{
	struct _Script_ModularItemManagement_eventOnModuleChanged_Parms
	{
		UItem* Item;
		FInstancedStruct ModuleData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Declare dynamic multicast delegate for module changes\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Declare dynamic multicast delegate for module changes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularItemManagement_eventOnModuleChanged_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::NewProp_ModuleData = { "ModuleData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularItemManagement_eventOnModuleChanged_Parms, ModuleData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::NewProp_ModuleData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModularItemManagement, nullptr, "OnModuleChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::_Script_ModularItemManagement_eventOnModuleChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::_Script_ModularItemManagement_eventOnModuleChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnModuleChanged_DelegateWrapper(const FMulticastScriptDelegate& OnModuleChanged, UItem* Item, FInstancedStruct ModuleData)
{
	struct _Script_ModularItemManagement_eventOnModuleChanged_Parms
	{
		UItem* Item;
		FInstancedStruct ModuleData;
	};
	_Script_ModularItemManagement_eventOnModuleChanged_Parms Parms;
	Parms.Item=Item;
	Parms.ModuleData=ModuleData;
	OnModuleChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnModuleChanged

// Begin Class UItemModule Function OnAddedToItem
struct ItemModule_eventOnAddedToItem_Parms
{
	UItem* Item;
	FInstancedStruct ModuleData;
};
static FName NAME_UItemModule_OnAddedToItem = FName(TEXT("OnAddedToItem"));
void UItemModule::OnAddedToItem(UItem* Item, FInstancedStruct ModuleData) const
{
	ItemModule_eventOnAddedToItem_Parms Parms;
	Parms.Item=Item;
	Parms.ModuleData=ModuleData;
	const_cast<UItemModule*>(this)->ProcessEvent(FindFunctionChecked(NAME_UItemModule_OnAddedToItem),&Parms);
}
struct Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint Native Events\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Native Events" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemModule_eventOnAddedToItem_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::NewProp_ModuleData = { "ModuleData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemModule_eventOnAddedToItem_Parms, ModuleData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::NewProp_ModuleData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModule, nullptr, "OnAddedToItem", nullptr, nullptr, Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::PropPointers), sizeof(ItemModule_eventOnAddedToItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemModule_eventOnAddedToItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemModule_OnAddedToItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemModule_OnAddedToItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemModule::execOnAddedToItem)
{
	P_GET_OBJECT(UItem,Z_Param_Item);
	P_GET_STRUCT(FInstancedStruct,Z_Param_ModuleData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAddedToItem_Implementation(Z_Param_Item,Z_Param_ModuleData);
	P_NATIVE_END;
}
// End Class UItemModule Function OnAddedToItem

// Begin Class UItemModule Function OnModuleUpdated
struct ItemModule_eventOnModuleUpdated_Parms
{
	UItem* Item;
	FInstancedStruct ModuleData;
};
static FName NAME_UItemModule_OnModuleUpdated = FName(TEXT("OnModuleUpdated"));
void UItemModule::OnModuleUpdated(UItem* Item, FInstancedStruct ModuleData) const
{
	ItemModule_eventOnModuleUpdated_Parms Parms;
	Parms.Item=Item;
	Parms.ModuleData=ModuleData;
	const_cast<UItemModule*>(this)->ProcessEvent(FindFunctionChecked(NAME_UItemModule_OnModuleUpdated),&Parms);
}
struct Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemModule_eventOnModuleUpdated_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::NewProp_ModuleData = { "ModuleData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemModule_eventOnModuleUpdated_Parms, ModuleData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::NewProp_ModuleData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModule, nullptr, "OnModuleUpdated", nullptr, nullptr, Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::PropPointers), sizeof(ItemModule_eventOnModuleUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemModule_eventOnModuleUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemModule_OnModuleUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemModule_OnModuleUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemModule::execOnModuleUpdated)
{
	P_GET_OBJECT(UItem,Z_Param_Item);
	P_GET_STRUCT(FInstancedStruct,Z_Param_ModuleData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnModuleUpdated_Implementation(Z_Param_Item,Z_Param_ModuleData);
	P_NATIVE_END;
}
// End Class UItemModule Function OnModuleUpdated

// Begin Class UItemModule Function OnRemovedFromItem
struct ItemModule_eventOnRemovedFromItem_Parms
{
	UItem* Item;
	FInstancedStruct ModuleData;
};
static FName NAME_UItemModule_OnRemovedFromItem = FName(TEXT("OnRemovedFromItem"));
void UItemModule::OnRemovedFromItem(UItem* Item, FInstancedStruct ModuleData) const
{
	ItemModule_eventOnRemovedFromItem_Parms Parms;
	Parms.Item=Item;
	Parms.ModuleData=ModuleData;
	const_cast<UItemModule*>(this)->ProcessEvent(FindFunctionChecked(NAME_UItemModule_OnRemovedFromItem),&Parms);
}
struct Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemModule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemModule_eventOnRemovedFromItem_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::NewProp_ModuleData = { "ModuleData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemModule_eventOnRemovedFromItem_Parms, ModuleData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::NewProp_ModuleData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModule, nullptr, "OnRemovedFromItem", nullptr, nullptr, Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::PropPointers), sizeof(ItemModule_eventOnRemovedFromItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemModule_eventOnRemovedFromItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemModule_OnRemovedFromItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemModule_OnRemovedFromItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemModule::execOnRemovedFromItem)
{
	P_GET_OBJECT(UItem,Z_Param_Item);
	P_GET_STRUCT(FInstancedStruct,Z_Param_ModuleData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRemovedFromItem_Implementation(Z_Param_Item,Z_Param_ModuleData);
	P_NATIVE_END;
}
// End Class UItemModule Function OnRemovedFromItem

// Begin Class UItemModule
void UItemModule::StaticRegisterNativesUItemModule()
{
	UClass* Class = UItemModule::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAddedToItem", &UItemModule::execOnAddedToItem },
		{ "OnModuleUpdated", &UItemModule::execOnModuleUpdated },
		{ "OnRemovedFromItem", &UItemModule::execOnRemovedFromItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemModule);
UClass* Z_Construct_UClass_UItemModule_NoRegister()
{
	return UItemModule::StaticClass();
}
struct Z_Construct_UClass_UItemModule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UItemModule class\n * Represents a module that can be added to an item.\n */" },
#endif
		{ "IncludePath", "ItemModule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemModule.h" },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UItemModule class\nRepresents a module that can be added to an item." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAddedToItemEvent_MetaData[] = {
		{ "Category", "ItemModule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// BlueprintAssignable events\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemModule.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintAssignable events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemovedFromItemEvent_MetaData[] = {
		{ "Category", "ItemModule" },
		{ "ModuleRelativePath", "Public/ItemModule.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnModuleUpdatedEvent_MetaData[] = {
		{ "Category", "ItemModule" },
		{ "ModuleRelativePath", "Public/ItemModule.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAddedToItemEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemovedFromItemEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnModuleUpdatedEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemModule_OnAddedToItem, "OnAddedToItem" }, // 2120240324
		{ &Z_Construct_UFunction_UItemModule_OnModuleUpdated, "OnModuleUpdated" }, // 1594584096
		{ &Z_Construct_UFunction_UItemModule_OnRemovedFromItem, "OnRemovedFromItem" }, // 1953477468
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemModule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemModule_Statics::NewProp_OnAddedToItemEvent = { "OnAddedToItemEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemModule, OnAddedToItemEvent), Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAddedToItemEvent_MetaData), NewProp_OnAddedToItemEvent_MetaData) }; // 1034532853
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemModule_Statics::NewProp_OnRemovedFromItemEvent = { "OnRemovedFromItemEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemModule, OnRemovedFromItemEvent), Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemovedFromItemEvent_MetaData), NewProp_OnRemovedFromItemEvent_MetaData) }; // 1034532853
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemModule_Statics::NewProp_OnModuleUpdatedEvent = { "OnModuleUpdatedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemModule, OnModuleUpdatedEvent), Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnModuleUpdatedEvent_MetaData), NewProp_OnModuleUpdatedEvent_MetaData) }; // 1034532853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemModule_Statics::NewProp_OnAddedToItemEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemModule_Statics::NewProp_OnRemovedFromItemEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemModule_Statics::NewProp_OnModuleUpdatedEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemModule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemModule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemModule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemModule_Statics::ClassParams = {
	&UItemModule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemModule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemModule_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemModule_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemModule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemModule()
{
	if (!Z_Registration_Info_UClass_UItemModule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemModule.OuterSingleton, Z_Construct_UClass_UItemModule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemModule.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UItemModule>()
{
	return UItemModule::StaticClass();
}
UItemModule::UItemModule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemModule);
UItemModule::~UItemModule() {}
// End Class UItemModule

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemModule, UItemModule::StaticClass, TEXT("UItemModule"), &Z_Registration_Info_UClass_UItemModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemModule), 3529251403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_2492162892(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
