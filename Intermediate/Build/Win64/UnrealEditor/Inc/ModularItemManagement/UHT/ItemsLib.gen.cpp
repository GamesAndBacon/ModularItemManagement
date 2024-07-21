// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/ItemsLib.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemsLib() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseMutator_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemsLib();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemsLib_NoRegister();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FItemRecord();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin ScriptStruct FItemRecord
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemRecord;
class UScriptStruct* FItemRecord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemRecord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemRecord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemRecord, (UObject*)Z_Construct_UPackage__Script_ModularItemManagement(), TEXT("ItemRecord"));
	}
	return Z_Registration_Info_UScriptStruct_ItemRecord.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<FItemRecord>()
{
	return FItemRecord::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemRecord_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemsLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemsLib.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ItemsLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemRecord>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FItemRecord_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRecord, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Class_MetaData), NewProp_Class_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemRecord_Statics::NewProp_ItemData_Inner = { "ItemData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FItemRecord_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000001000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemRecord, ItemData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemRecord_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRecord_Statics::NewProp_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRecord_Statics::NewProp_ItemData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemRecord_Statics::NewProp_ItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRecord_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemRecord_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	nullptr,
	&NewStructOps,
	"ItemRecord",
	Z_Construct_UScriptStruct_FItemRecord_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRecord_Statics::PropPointers),
	sizeof(FItemRecord),
	alignof(FItemRecord),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemRecord_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemRecord_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemRecord()
{
	if (!Z_Registration_Info_UScriptStruct_ItemRecord.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemRecord.InnerSingleton, Z_Construct_UScriptStruct_FItemRecord_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemRecord.InnerSingleton;
}
// End ScriptStruct FItemRecord

// Begin Class UItemsLib Function LoadItem
struct Z_Construct_UFunction_UItemsLib_LoadItem_Statics
{
	struct ItemsLib_eventLoadItem_Parms
	{
		FItemRecord savedata;
		UObject* Outer;
		UBaseItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Trinity|Item" },
		{ "ModuleRelativePath", "Public/ItemsLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_savedata;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemsLib_LoadItem_Statics::NewProp_savedata = { "savedata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemsLib_eventLoadItem_Parms, savedata), Z_Construct_UScriptStruct_FItemRecord, METADATA_PARAMS(0, nullptr) }; // 2787749913
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemsLib_LoadItem_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemsLib_eventLoadItem_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemsLib_LoadItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemsLib_eventLoadItem_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemsLib_LoadItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemsLib_LoadItem_Statics::NewProp_savedata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemsLib_LoadItem_Statics::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemsLib_LoadItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_LoadItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemsLib_LoadItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemsLib, nullptr, "LoadItem", nullptr, nullptr, Z_Construct_UFunction_UItemsLib_LoadItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_LoadItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemsLib_LoadItem_Statics::ItemsLib_eventLoadItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_LoadItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemsLib_LoadItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemsLib_LoadItem_Statics::ItemsLib_eventLoadItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemsLib_LoadItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemsLib_LoadItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemsLib::execLoadItem)
{
	P_GET_STRUCT(FItemRecord,Z_Param_savedata);
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseItem**)Z_Param__Result=UItemsLib::LoadItem(Z_Param_savedata,Z_Param_Outer);
	P_NATIVE_END;
}
// End Class UItemsLib Function LoadItem

// Begin Class UItemsLib Function SaveItem
struct Z_Construct_UFunction_UItemsLib_SaveItem_Statics
{
	struct ItemsLib_eventSaveItem_Parms
	{
		UBaseItem* item;
		FItemRecord ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Trinity|Item" },
		{ "ModuleRelativePath", "Public/ItemsLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemsLib_SaveItem_Statics::NewProp_item = { "item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemsLib_eventSaveItem_Parms, item), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemsLib_SaveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemsLib_eventSaveItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemRecord, METADATA_PARAMS(0, nullptr) }; // 2787749913
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemsLib_SaveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemsLib_SaveItem_Statics::NewProp_item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemsLib_SaveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_SaveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemsLib_SaveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemsLib, nullptr, "SaveItem", nullptr, nullptr, Z_Construct_UFunction_UItemsLib_SaveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_SaveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemsLib_SaveItem_Statics::ItemsLib_eventSaveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_SaveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemsLib_SaveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemsLib_SaveItem_Statics::ItemsLib_eventSaveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemsLib_SaveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemsLib_SaveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemsLib::execSaveItem)
{
	P_GET_OBJECT(UBaseItem,Z_Param_item);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemRecord*)Z_Param__Result=UItemsLib::SaveItem(Z_Param_item);
	P_NATIVE_END;
}
// End Class UItemsLib Function SaveItem

// Begin Class UItemsLib Function SaveMutator
struct Z_Construct_UFunction_UItemsLib_SaveMutator_Statics
{
	struct ItemsLib_eventSaveMutator_Parms
	{
		TSubclassOf<UBaseMutator> Mutator;
		FInstancedStruct MutatorData;
		FItemRecord ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Trinity|Item" },
		{ "ModuleRelativePath", "Public/ItemsLib.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Mutator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MutatorData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::NewProp_Mutator = { "Mutator", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemsLib_eventSaveMutator_Parms, Mutator), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::NewProp_MutatorData = { "MutatorData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemsLib_eventSaveMutator_Parms, MutatorData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemsLib_eventSaveMutator_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemRecord, METADATA_PARAMS(0, nullptr) }; // 2787749913
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::NewProp_Mutator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::NewProp_MutatorData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemsLib, nullptr, "SaveMutator", nullptr, nullptr, Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::ItemsLib_eventSaveMutator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::ItemsLib_eventSaveMutator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemsLib_SaveMutator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemsLib_SaveMutator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemsLib::execSaveMutator)
{
	P_GET_OBJECT(UClass,Z_Param_Mutator);
	P_GET_STRUCT_REF(FInstancedStruct,Z_Param_Out_MutatorData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemRecord*)Z_Param__Result=UItemsLib::SaveMutator(Z_Param_Mutator,Z_Param_Out_MutatorData);
	P_NATIVE_END;
}
// End Class UItemsLib Function SaveMutator

// Begin Class UItemsLib
void UItemsLib::StaticRegisterNativesUItemsLib()
{
	UClass* Class = UItemsLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadItem", &UItemsLib::execLoadItem },
		{ "SaveItem", &UItemsLib::execSaveItem },
		{ "SaveMutator", &UItemsLib::execSaveMutator },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemsLib);
UClass* Z_Construct_UClass_UItemsLib_NoRegister()
{
	return UItemsLib::StaticClass();
}
struct Z_Construct_UClass_UItemsLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemsLib.h" },
		{ "ModuleRelativePath", "Public/ItemsLib.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemsLib_LoadItem, "LoadItem" }, // 2312641029
		{ &Z_Construct_UFunction_UItemsLib_SaveItem, "SaveItem" }, // 1315273058
		{ &Z_Construct_UFunction_UItemsLib_SaveMutator, "SaveMutator" }, // 575243713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemsLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemsLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemsLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemsLib_Statics::ClassParams = {
	&UItemsLib::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemsLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemsLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemsLib()
{
	if (!Z_Registration_Info_UClass_UItemsLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemsLib.OuterSingleton, Z_Construct_UClass_UItemsLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemsLib.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UItemsLib>()
{
	return UItemsLib::StaticClass();
}
UItemsLib::UItemsLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemsLib);
UItemsLib::~UItemsLib() {}
// End Class UItemsLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemRecord::StaticStruct, Z_Construct_UScriptStruct_FItemRecord_Statics::NewStructOps, TEXT("ItemRecord"), &Z_Registration_Info_UScriptStruct_ItemRecord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemRecord), 2787749913U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemsLib, UItemsLib::StaticClass, TEXT("UItemsLib"), &Z_Registration_Info_UClass_UItemsLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemsLib), 2220500316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_2764100566(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
