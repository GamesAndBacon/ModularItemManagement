// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/ItemModuleSubSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemModuleSubSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemModuleSubsystem();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemModuleSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Class UItemModuleSubsystem Function InitializeAllItemModules
struct Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics
{
	struct ItemModuleSubsystem_eventInitializeAllItemModules_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemModule" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Function to initialize all item modules\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemModuleSubSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to initialize all item modules" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemModuleSubsystem_eventInitializeAllItemModules_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemModuleSubsystem, nullptr, "InitializeAllItemModules", nullptr, nullptr, Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::ItemModuleSubsystem_eventInitializeAllItemModules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::ItemModuleSubsystem_eventInitializeAllItemModules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemModuleSubsystem::execInitializeAllItemModules)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeAllItemModules(Z_Param_World);
	P_NATIVE_END;
}
// End Class UItemModuleSubsystem Function InitializeAllItemModules

// Begin Class UItemModuleSubsystem
void UItemModuleSubsystem::StaticRegisterNativesUItemModuleSubsystem()
{
	UClass* Class = UItemModuleSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitializeAllItemModules", &UItemModuleSubsystem::execInitializeAllItemModules },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemModuleSubsystem);
UClass* Z_Construct_UClass_UItemModuleSubsystem_NoRegister()
{
	return UItemModuleSubsystem::StaticClass();
}
struct Z_Construct_UClass_UItemModuleSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ItemModuleSubSystem.h" },
		{ "ModuleRelativePath", "Public/ItemModuleSubSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemModuleSubsystem_InitializeAllItemModules, "InitializeAllItemModules" }, // 1215264006
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemModuleSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemModuleSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemModuleSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemModuleSubsystem_Statics::ClassParams = {
	&UItemModuleSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemModuleSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemModuleSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemModuleSubsystem()
{
	if (!Z_Registration_Info_UClass_UItemModuleSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemModuleSubsystem.OuterSingleton, Z_Construct_UClass_UItemModuleSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemModuleSubsystem.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UItemModuleSubsystem>()
{
	return UItemModuleSubsystem::StaticClass();
}
UItemModuleSubsystem::UItemModuleSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemModuleSubsystem);
UItemModuleSubsystem::~UItemModuleSubsystem() {}
// End Class UItemModuleSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemModuleSubsystem, UItemModuleSubsystem::StaticClass, TEXT("UItemModuleSubsystem"), &Z_Registration_Info_UClass_UItemModuleSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemModuleSubsystem), 2285177591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_459227216(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
