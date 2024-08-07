// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/Grid/GridComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UGridComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UGridComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Class UGridComponent
void UGridComponent::StaticRegisterNativesUGridComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridComponent);
UClass* Z_Construct_UClass_UGridComponent_NoRegister()
{
	return UGridComponent::StaticClass();
}
struct Z_Construct_UClass_UGridComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Grid/GridComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grid/GridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridComponent_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridComponent, OwningGrid), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningGrid_MetaData), NewProp_OwningGrid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridComponent_Statics::NewProp_OwningGrid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridComponent_Statics::ClassParams = {
	&UGridComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridComponent()
{
	if (!Z_Registration_Info_UClass_UGridComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridComponent.OuterSingleton, Z_Construct_UClass_UGridComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridComponent.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UGridComponent>()
{
	return UGridComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridComponent);
UGridComponent::~UGridComponent() {}
// End Class UGridComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridComponent, UGridComponent::StaticClass, TEXT("UGridComponent"), &Z_Registration_Info_UClass_UGridComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridComponent), 2845774606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridComponent_h_2455566839(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
