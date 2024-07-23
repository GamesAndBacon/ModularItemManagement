// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagementEditor/Public/CustomObjectFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomObjectFactory() {}

// Begin Cross Module References
MODULARITEMMANAGEMENTEDITOR_API UClass* Z_Construct_UClass_UItemDefFactory();
MODULARITEMMANAGEMENTEDITOR_API UClass* Z_Construct_UClass_UItemDefFactory_NoRegister();
MODULARITEMMANAGEMENTEDITOR_API UClass* Z_Construct_UClass_UItemModFactory();
MODULARITEMMANAGEMENTEDITOR_API UClass* Z_Construct_UClass_UItemModFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ModularItemManagementEditor();
// End Cross Module References

// Begin Class UItemModFactory
void UItemModFactory::StaticRegisterNativesUItemModFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemModFactory);
UClass* Z_Construct_UClass_UItemModFactory_NoRegister()
{
	return UItemModFactory::StaticClass();
}
struct Z_Construct_UClass_UItemModFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory class for creating UItemModule objects.\n */" },
#endif
		{ "IncludePath", "CustomObjectFactory.h" },
		{ "ModuleRelativePath", "Public/CustomObjectFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory class for creating UItemModule objects." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemModFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemModFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagementEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemModFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemModFactory_Statics::ClassParams = {
	&UItemModFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemModFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemModFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemModFactory()
{
	if (!Z_Registration_Info_UClass_UItemModFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemModFactory.OuterSingleton, Z_Construct_UClass_UItemModFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemModFactory.OuterSingleton;
}
template<> MODULARITEMMANAGEMENTEDITOR_API UClass* StaticClass<UItemModFactory>()
{
	return UItemModFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemModFactory);
UItemModFactory::~UItemModFactory() {}
// End Class UItemModFactory

// Begin Class UItemDefFactory
void UItemDefFactory::StaticRegisterNativesUItemDefFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemDefFactory);
UClass* Z_Construct_UClass_UItemDefFactory_NoRegister()
{
	return UItemDefFactory::StaticClass();
}
struct Z_Construct_UClass_UItemDefFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory class for creating UItemDefinition data assets.\n */" },
#endif
		{ "IncludePath", "CustomObjectFactory.h" },
		{ "ModuleRelativePath", "Public/CustomObjectFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory class for creating UItemDefinition data assets." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemDefFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UItemDefFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagementEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemDefFactory_Statics::ClassParams = {
	&UItemDefFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemDefFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemDefFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemDefFactory()
{
	if (!Z_Registration_Info_UClass_UItemDefFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemDefFactory.OuterSingleton, Z_Construct_UClass_UItemDefFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemDefFactory.OuterSingleton;
}
template<> MODULARITEMMANAGEMENTEDITOR_API UClass* StaticClass<UItemDefFactory>()
{
	return UItemDefFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemDefFactory);
UItemDefFactory::~UItemDefFactory() {}
// End Class UItemDefFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagementEditor_Public_CustomObjectFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemModFactory, UItemModFactory::StaticClass, TEXT("UItemModFactory"), &Z_Registration_Info_UClass_UItemModFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemModFactory), 169425829U) },
		{ Z_Construct_UClass_UItemDefFactory, UItemDefFactory::StaticClass, TEXT("UItemDefFactory"), &Z_Registration_Info_UClass_UItemDefFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemDefFactory), 2866937365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagementEditor_Public_CustomObjectFactory_h_170143845(TEXT("/Script/ModularItemManagementEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagementEditor_Public_CustomObjectFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagementEditor_Public_CustomObjectFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
