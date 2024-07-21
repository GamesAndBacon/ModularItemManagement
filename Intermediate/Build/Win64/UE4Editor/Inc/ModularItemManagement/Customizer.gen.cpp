// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/Customizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizer() {}
// Cross Module References
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizer_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UCustomizer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static FName NAME_UCustomizer_Customize = FName(TEXT("Customize"));
	void UCustomizer::Customize(AActor* owner, FName Event, UObject* payload)
	{
		Customizer_eventCustomize_Parms Parms;
		Parms.owner=owner;
		Parms.Event=Event;
		Parms.payload=payload;
		ProcessEvent(FindFunctionChecked(NAME_UCustomizer_Customize),&Parms);
	}
	void UCustomizer::StaticRegisterNativesUCustomizer()
	{
	}
	struct Z_Construct_UFunction_UCustomizer_Customize_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_payload;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Customizer_eventCustomize_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Customizer_eventCustomize_Parms, Event), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_payload = { "payload", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Customizer_eventCustomize_Parms, payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizer_Customize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_Event,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizer_Customize_Statics::NewProp_payload,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizer_Customize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Customize" },
		{ "ModuleRelativePath", "Public/Customizer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizer_Customize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizer, nullptr, "Customize", nullptr, nullptr, sizeof(Customizer_eventCustomize_Parms), Z_Construct_UFunction_UCustomizer_Customize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizer_Customize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizer_Customize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizer_Customize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizer_Customize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomizer_Customize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomizer_NoRegister()
	{
		return UCustomizer::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizer_Customize, "Customize" }, // 1377778084
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Customizer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Customizer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomizer_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomizer, 3827978365);
	template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UCustomizer>()
	{
		return UCustomizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomizer(Z_Construct_UClass_UCustomizer, &UCustomizer::StaticClass, TEXT("/Script/ModularItemManagement"), TEXT("UCustomizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
