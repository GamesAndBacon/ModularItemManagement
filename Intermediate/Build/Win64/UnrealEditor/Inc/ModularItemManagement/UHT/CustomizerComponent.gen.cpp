// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/CustomizerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizerComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizer_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizerComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Class UCustomizerComponent Function UpdateCustomization
struct Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics
{
	struct CustomizerComponent_eventUpdateCustomization_Parms
	{
		FName type;
		UObject* payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/CustomizerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_type;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizerComponent_eventUpdateCustomization_Parms, type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CustomizerComponent_eventUpdateCustomization_Parms, payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::NewProp_type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::NewProp_payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizerComponent, nullptr, "UpdateCustomization", nullptr, nullptr, Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::CustomizerComponent_eventUpdateCustomization_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::CustomizerComponent_eventUpdateCustomization_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCustomizerComponent::execUpdateCustomization)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_type);
	P_GET_OBJECT(UObject,Z_Param_payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCustomization(Z_Param_type,Z_Param_payload);
	P_NATIVE_END;
}
// End Class UCustomizerComponent Function UpdateCustomization

// Begin Class UCustomizerComponent
void UCustomizerComponent::StaticRegisterNativesUCustomizerComponent()
{
	UClass* Class = UCustomizerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateCustomization", &UCustomizerComponent::execUpdateCustomization },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizerComponent);
UClass* Z_Construct_UClass_UCustomizerComponent_NoRegister()
{
	return UCustomizerComponent::StaticClass();
}
struct Z_Construct_UClass_UCustomizerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Customizer" },
		{ "IncludePath", "CustomizerComponent.h" },
		{ "ModuleRelativePath", "Public/CustomizerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Customizers_ValueProp_MetaData[] = {
		{ "Category", "Customize" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Customizers_MetaData[] = {
		{ "Category", "Customize" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Customizers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Customizers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Customizers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization, "UpdateCustomization" }, // 2034543864
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_ValueProp = { "Customizers", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UCustomizer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Customizers_ValueProp_MetaData), NewProp_Customizers_ValueProp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_Key_KeyProp = { "Customizers_Key", nullptr, (EPropertyFlags)0x0002000000080009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers = { "Customizers", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCustomizerComponent, Customizers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Customizers_MetaData), NewProp_Customizers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCustomizerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizerComponent_Statics::ClassParams = {
	&UCustomizerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCustomizerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomizerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomizerComponent()
{
	if (!Z_Registration_Info_UClass_UCustomizerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizerComponent.OuterSingleton, Z_Construct_UClass_UCustomizerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomizerComponent.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UCustomizerComponent>()
{
	return UCustomizerComponent::StaticClass();
}
UCustomizerComponent::UCustomizerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizerComponent);
UCustomizerComponent::~UCustomizerComponent() {}
// End Class UCustomizerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizerComponent, UCustomizerComponent::StaticClass, TEXT("UCustomizerComponent"), &Z_Registration_Info_UClass_UCustomizerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizerComponent), 1723577037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_3537111747(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
