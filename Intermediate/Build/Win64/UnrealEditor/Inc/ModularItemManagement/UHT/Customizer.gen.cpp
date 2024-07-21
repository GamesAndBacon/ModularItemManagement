// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/Customizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizer();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizer_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Class UCustomizer Function Customize
struct Customizer_eventCustomize_Parms
{
	AActor* owner;
	FName Event;
	UObject* payload;
};
static FName NAME_UCustomizer_Customize = FName(TEXT("Customize"));
void UCustomizer::Customize(AActor* owner, FName Event, UObject* payload)
{
	Customizer_eventCustomize_Parms Parms;
	Parms.owner=owner;
	Parms.Event=Event;
	Parms.payload=payload;
	ProcessEvent(FindFunctionChecked(NAME_UCustomizer_Customize),&Parms);
}
struct Z_Construct_UFunction_UCustomizer_Customize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customize" },
		{ "ModuleRelativePath", "Public/Customizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_owner;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Event;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Customizer_eventCustomize_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Customizer_eventCustomize_Parms, Event), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Customizer_eventCustomize_Parms, payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizer_Customize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_Event,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizer_Customize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizer_Customize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizer, nullptr, "Customize", nullptr, nullptr, Z_Construct_UFunction_UCustomizer_Customize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizer_Customize_Statics::PropPointers), sizeof(Customizer_eventCustomize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizer_Customize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizer_Customize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Customizer_eventCustomize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomizer_Customize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizer_Customize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCustomizer Function Customize

// Begin Class UCustomizer
void UCustomizer::StaticRegisterNativesUCustomizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizer);
UClass* Z_Construct_UClass_UCustomizer_NoRegister()
{
	return UCustomizer::StaticClass();
}
struct Z_Construct_UClass_UCustomizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Customizer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Customizer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizer_Customize, "Customize" }, // 3282008119
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizer_Statics::ClassParams = {
	&UCustomizer::StaticClass,
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
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomizer()
{
	if (!Z_Registration_Info_UClass_UCustomizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizer.OuterSingleton, Z_Construct_UClass_UCustomizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomizer.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UCustomizer>()
{
	return UCustomizer::StaticClass();
}
UCustomizer::UCustomizer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizer);
UCustomizer::~UCustomizer() {}
// End Class UCustomizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizer, UCustomizer::StaticClass, TEXT("UCustomizer"), &Z_Registration_Info_UClass_UCustomizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizer), 4127474220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_1647121997(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
