// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/Item.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItem();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItem_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemModule_NoRegister();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Delegate FModuleChanged
struct Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics
{
	struct Item_eventModuleChanged_Parms
	{
		UItemModule* Module;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Module;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventModuleChanged_Parms, Module), Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::NewProp_Module,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "ModuleChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::Item_eventModuleChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::Item_eventModuleChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItem::FModuleChanged_DelegateWrapper(const FMulticastScriptDelegate& ModuleChanged, UItemModule* Module)
{
	struct Item_eventModuleChanged_Parms
	{
		UItemModule* Module;
	};
	Item_eventModuleChanged_Parms Parms;
	Parms.Module=Module;
	ModuleChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FModuleChanged

// Begin Delegate FStackSizeChanged
struct Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics
{
	struct Item_eventStackSizeChanged_Parms
	{
		int32 NewStackSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::NewProp_NewStackSize = { "NewStackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventStackSizeChanged_Parms, NewStackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::NewProp_NewStackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "StackSizeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::Item_eventStackSizeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::Item_eventStackSizeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItem::FStackSizeChanged_DelegateWrapper(const FMulticastScriptDelegate& StackSizeChanged, int32 NewStackSize)
{
	struct Item_eventStackSizeChanged_Parms
	{
		int32 NewStackSize;
	};
	Item_eventStackSizeChanged_Parms Parms;
	Parms.NewStackSize=NewStackSize;
	StackSizeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FStackSizeChanged

// Begin Class UItem Function AddModule
struct Z_Construct_UFunction_UItem_AddModule_Statics
{
	struct Item_eventAddModule_Parms
	{
		TSubclassOf<UItemModule> Module;
		FInstancedStruct outModuleData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Module;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outModuleData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItem_AddModule_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventAddModule_Parms, Module), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItem_AddModule_Statics::NewProp_outModuleData = { "outModuleData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventAddModule_Parms, outModuleData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_AddModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_AddModule_Statics::NewProp_Module,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_AddModule_Statics::NewProp_outModuleData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_AddModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_AddModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "AddModule", nullptr, nullptr, Z_Construct_UFunction_UItem_AddModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_AddModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_AddModule_Statics::Item_eventAddModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_AddModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_AddModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItem_AddModule_Statics::Item_eventAddModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItem_AddModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_AddModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execAddModule)
{
	P_GET_OBJECT(UClass,Z_Param_Module);
	P_GET_STRUCT(FInstancedStruct,Z_Param_outModuleData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddModule(Z_Param_Module,Z_Param_outModuleData);
	P_NATIVE_END;
}
// End Class UItem Function AddModule

// Begin Class UItem Function BeginPlay
static FName NAME_UItem_BeginPlay = FName(TEXT("BeginPlay"));
void UItem::BeginPlay()
{
	ProcessEvent(FindFunctionChecked(NAME_UItem_BeginPlay),NULL);
}
struct Z_Construct_UFunction_UItem_BeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "BeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_BeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_BeginPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItem_BeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_BeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginPlay_Implementation();
	P_NATIVE_END;
}
// End Class UItem Function BeginPlay

// Begin Class UItem Function GetModuleData
struct Z_Construct_UFunction_UItem_GetModuleData_Statics
{
	struct Item_eventGetModuleData_Parms
	{
		TSubclassOf<UItemModule> ModuleClass;
		FInstancedStruct outModuleData;
		UItemModule* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "DeterminesOutputType", "ModuleClass" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_outModuleData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItem_GetModuleData_Statics::NewProp_ModuleClass = { "ModuleClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetModuleData_Parms, ModuleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItem_GetModuleData_Statics::NewProp_outModuleData = { "outModuleData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetModuleData_Parms, outModuleData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_GetModuleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetModuleData_Parms, ReturnValue), Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetModuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetModuleData_Statics::NewProp_ModuleClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetModuleData_Statics::NewProp_outModuleData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetModuleData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetModuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetModuleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetModuleData", nullptr, nullptr, Z_Construct_UFunction_UItem_GetModuleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetModuleData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_GetModuleData_Statics::Item_eventGetModuleData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetModuleData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_GetModuleData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItem_GetModuleData_Statics::Item_eventGetModuleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItem_GetModuleData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_GetModuleData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execGetModuleData)
{
	P_GET_OBJECT(UClass,Z_Param_ModuleClass);
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_outModuleData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemModule**)Z_Param__Result=P_THIS->GetModuleData(Z_Param_ModuleClass,Z_Param_Out_outModuleData);
	P_NATIVE_END;
}
// End Class UItem Function GetModuleData

// Begin Class UItem Function GetModuleDefaultObject
struct Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics
{
	struct Item_eventGetModuleDefaultObject_Parms
	{
		TSubclassOf<UItemModule> Module;
		UItemModule* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Module;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetModuleDefaultObject_Parms, Module), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventGetModuleDefaultObject_Parms, ReturnValue), Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::NewProp_Module,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "GetModuleDefaultObject", nullptr, nullptr, Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::Item_eventGetModuleDefaultObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::Item_eventGetModuleDefaultObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItem_GetModuleDefaultObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_GetModuleDefaultObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execGetModuleDefaultObject)
{
	P_GET_OBJECT(UClass,Z_Param_Module);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemModule**)Z_Param__Result=P_THIS->GetModuleDefaultObject(Z_Param_Module);
	P_NATIVE_END;
}
// End Class UItem Function GetModuleDefaultObject

// Begin Class UItem Function InitItem
struct Z_Construct_UFunction_UItem_InitItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_InitItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "InitItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_InitItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_InitItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItem_InitItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_InitItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execInitItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitItem();
	P_NATIVE_END;
}
// End Class UItem Function InitItem

// Begin Class UItem Function OnItemLoad
struct Z_Construct_UFunction_UItem_OnItemLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_OnItemLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "OnItemLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_OnItemLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_OnItemLoad_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItem_OnItemLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_OnItemLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execOnItemLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemLoad();
	P_NATIVE_END;
}
// End Class UItem Function OnItemLoad

// Begin Class UItem Function OnItemSave
struct Z_Construct_UFunction_UItem_OnItemSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_OnItemSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "OnItemSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_OnItemSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_OnItemSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItem_OnItemSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_OnItemSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execOnItemSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemSave();
	P_NATIVE_END;
}
// End Class UItem Function OnItemSave

// Begin Class UItem Function RemoveModule
struct Z_Construct_UFunction_UItem_RemoveModule_Statics
{
	struct Item_eventRemoveModule_Parms
	{
		TSubclassOf<UItemModule> Module;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Module;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItem_RemoveModule_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventRemoveModule_Parms, Module), Z_Construct_UClass_UClass, Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_RemoveModule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_RemoveModule_Statics::NewProp_Module,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_RemoveModule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_RemoveModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "RemoveModule", nullptr, nullptr, Z_Construct_UFunction_UItem_RemoveModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_RemoveModule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_RemoveModule_Statics::Item_eventRemoveModule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_RemoveModule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_RemoveModule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItem_RemoveModule_Statics::Item_eventRemoveModule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItem_RemoveModule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_RemoveModule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execRemoveModule)
{
	P_GET_OBJECT(UClass,Z_Param_Module);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveModule(Z_Param_Module);
	P_NATIVE_END;
}
// End Class UItem Function RemoveModule

// Begin Class UItem Function SetModuleData
struct Z_Construct_UFunction_UItem_SetModuleData_Statics
{
	struct Item_eventSetModuleData_Parms
	{
		UItemModule* Module;
		FInstancedStruct InstanceStruct;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Module;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_SetModuleData_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventSetModuleData_Parms, Module), Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItem_SetModuleData_Statics::NewProp_InstanceStruct = { "InstanceStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventSetModuleData_Parms, InstanceStruct), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceStruct_MetaData), NewProp_InstanceStruct_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_SetModuleData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_SetModuleData_Statics::NewProp_Module,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_SetModuleData_Statics::NewProp_InstanceStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetModuleData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_SetModuleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "SetModuleData", nullptr, nullptr, Z_Construct_UFunction_UItem_SetModuleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetModuleData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItem_SetModuleData_Statics::Item_eventSetModuleData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_SetModuleData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItem_SetModuleData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItem_SetModuleData_Statics::Item_eventSetModuleData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItem_SetModuleData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_SetModuleData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItem::execSetModuleData)
{
	P_GET_OBJECT(UItemModule,Z_Param_Module);
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_InstanceStruct);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModuleData(Z_Param_Module,Z_Param_Out_InstanceStruct);
	P_NATIVE_END;
}
// End Class UItem Function SetModuleData

// Begin Class UItem
void UItem::StaticRegisterNativesUItem()
{
	UClass* Class = UItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddModule", &UItem::execAddModule },
		{ "BeginPlay", &UItem::execBeginPlay },
		{ "GetModuleData", &UItem::execGetModuleData },
		{ "GetModuleDefaultObject", &UItem::execGetModuleDefaultObject },
		{ "InitItem", &UItem::execInitItem },
		{ "OnItemLoad", &UItem::execOnItemLoad },
		{ "OnItemSave", &UItem::execOnItemSave },
		{ "RemoveModule", &UItem::execRemoveModule },
		{ "SetModuleData", &UItem::execSetModuleData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItem);
UClass* Z_Construct_UClass_UItem_NoRegister()
{
	return UItem::StaticClass();
}
struct Z_Construct_UClass_UItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Item.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleData_MetaData[] = {
		{ "Category", "Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// New delegate for stack size changes\n" },
#endif
		{ "ModuleRelativePath", "Public/Item.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New delegate for stack size changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleClasses_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "Item" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ModuleClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleClasses;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ModuleAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ModuleRemoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItem_AddModule, "AddModule" }, // 2521757444
		{ &Z_Construct_UFunction_UItem_BeginPlay, "BeginPlay" }, // 1510943601
		{ &Z_Construct_UFunction_UItem_GetModuleData, "GetModuleData" }, // 1098334849
		{ &Z_Construct_UFunction_UItem_GetModuleDefaultObject, "GetModuleDefaultObject" }, // 2595119885
		{ &Z_Construct_UFunction_UItem_InitItem, "InitItem" }, // 3064760260
		{ &Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature, "ModuleChanged__DelegateSignature" }, // 1267921513
		{ &Z_Construct_UFunction_UItem_OnItemLoad, "OnItemLoad" }, // 2352256040
		{ &Z_Construct_UFunction_UItem_OnItemSave, "OnItemSave" }, // 1942221815
		{ &Z_Construct_UFunction_UItem_RemoveModule, "RemoveModule" }, // 3488238719
		{ &Z_Construct_UFunction_UItem_SetModuleData, "SetModuleData" }, // 3927021615
		{ &Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature, "StackSizeChanged__DelegateSignature" }, // 470033328
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ModuleData_Inner = { "ModuleData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ModuleData = { "ModuleData", nullptr, (EPropertyFlags)0x0010000001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ModuleData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleData_MetaData), NewProp_ModuleData_MetaData) }; // 174410355
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ModuleClasses_Inner = { "ModuleClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ModuleClasses = { "ModuleClasses", nullptr, (EPropertyFlags)0x0014000001000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ModuleClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleClasses_MetaData), NewProp_ModuleClasses_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ModuleAdded = { "ModuleAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ModuleAdded), Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleAdded_MetaData), NewProp_ModuleAdded_MetaData) }; // 1267921513
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ModuleRemoved = { "ModuleRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ModuleRemoved), Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleRemoved_MetaData), NewProp_ModuleRemoved_MetaData) }; // 1267921513
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0011000001000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, ItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItem, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ModuleData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ModuleData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ModuleClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ModuleClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ModuleAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ModuleRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Guid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
	&UItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItem()
{
	if (!Z_Registration_Info_UClass_UItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItem.OuterSingleton, Z_Construct_UClass_UItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItem.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UItem>()
{
	return UItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
UItem::~UItem() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UItem)
// End Class UItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItem, UItem::StaticClass, TEXT("UItem"), &Z_Registration_Info_UClass_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItem), 717766130U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_1971384057(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
