// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/ItemDefinition.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDefinition() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItem_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemDefinition();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemDefinition_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemModule_NoRegister();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Class UItemDefinition
void UItemDefinition::StaticRegisterNativesUItemDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDefinition);
UClass* Z_Construct_UClass_UItemDefinition_NoRegister()
{
	return UItemDefinition::StaticClass();
}
struct Z_Construct_UClass_UItemDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ItemDefinition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[] = {
		{ "Category", "Item Data" },
		{ "ModuleRelativePath", "Public/ItemDefinition.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Modules_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Modules_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Modules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefinition, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_Modules_ValueProp = { "Modules", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_Modules_Key_KeyProp = { "Modules_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UItemDefinition_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemDefinition, Modules), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Modules_MetaData), NewProp_Modules_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_Modules_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_Modules_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemDefinition_Statics::NewProp_Modules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDefinition_Statics::ClassParams = {
	&UItemDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDefinition()
{
	if (!Z_Registration_Info_UClass_UItemDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDefinition.OuterSingleton, Z_Construct_UClass_UItemDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDefinition.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UItemDefinition>()
{
	return UItemDefinition::StaticClass();
}
UItemDefinition::UItemDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDefinition);
UItemDefinition::~UItemDefinition() {}
// End Class UItemDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemDefinition, UItemDefinition::StaticClass, TEXT("UItemDefinition"), &Z_Registration_Info_UClass_UItemDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDefinition), 2266849197U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemDefinition_h_4074918294(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
