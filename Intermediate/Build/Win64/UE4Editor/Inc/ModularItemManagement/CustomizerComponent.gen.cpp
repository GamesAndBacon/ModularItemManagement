// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/CustomizerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizerComponent() {}
// Cross Module References
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizerComponent_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCustomizerComponent::execUpdateCustomization)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_type);
		P_GET_OBJECT(UObject,Z_Param_payload);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCustomization(Z_Param_type,Z_Param_payload);
		P_NATIVE_END;
	}
	void UCustomizerComponent::StaticRegisterNativesUCustomizerComponent()
	{
		UClass* Class = UCustomizerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateCustomization", &UCustomizerComponent::execUpdateCustomization },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics
	{
		struct CustomizerComponent_eventUpdateCustomization_Parms
		{
			FName type;
			UObject* payload;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_type;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizerComponent_eventUpdateCustomization_Parms, type), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomizerComponent_eventUpdateCustomization_Parms, payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::NewProp_payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customization" },
		{ "ModuleRelativePath", "Public/CustomizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizerComponent, nullptr, "UpdateCustomization", nullptr, nullptr, sizeof(CustomizerComponent_eventUpdateCustomization_Parms), Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomizerComponent_NoRegister()
	{
		return UCustomizerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Customizers_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Customizers_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Customizers_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Customizers_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Customizers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizerComponent_UpdateCustomization, "UpdateCustomization" }, // 1343874506
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Customizer" },
		{ "IncludePath", "CustomizerComponent.h" },
		{ "ModuleRelativePath", "Public/CustomizerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_ValueProp_MetaData[] = {
		{ "Category", "Customize" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_ValueProp = { "Customizers", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UCustomizer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_ValueProp_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_Key_KeyProp = { "Customizers_Key", nullptr, (EPropertyFlags)0x0002000000080009, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_MetaData[] = {
		{ "Category", "Customize" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers = { "Customizers", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomizerComponent, Customizers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizerComponent_Statics::NewProp_Customizers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizerComponent_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizerComponent, 2810072778);
	template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UCustomizerComponent>()
	{
		return UCustomizerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizerComponent(Z_Construct_UClass_UCustomizerComponent, &UCustomizerComponent::StaticClass, TEXT("/Script/ModularItemManagement"), TEXT("UCustomizerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
