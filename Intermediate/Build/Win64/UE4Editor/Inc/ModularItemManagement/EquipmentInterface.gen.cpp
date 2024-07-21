// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Interfaces/EquipmentInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentInterface() {}
// Cross Module References
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
// End Cross Module References
	UEquipmentComponent* IEquipmentInterface::GetEquipment()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEquipment instead.");
		EquipmentInterface_eventGetEquipment_Parms Parms;
		return Parms.ReturnValue;
	}
	void UEquipmentInterface::StaticRegisterNativesUEquipmentInterface()
	{
	}
	struct Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentInterface_eventGetEquipment_Parms, ReturnValue), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Interfaces/EquipmentInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentInterface, nullptr, "GetEquipment", nullptr, nullptr, sizeof(EquipmentInterface_eventGetEquipment_Parms), Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentInterface_GetEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister()
	{
		return UEquipmentInterface::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentInterface_GetEquipment, "GetEquipment" }, // 2809534551
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interfaces/EquipmentInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipmentInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentInterface_Statics::ClassParams = {
		&UEquipmentInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentInterface, 4104102995);
	template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UEquipmentInterface>()
	{
		return UEquipmentInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentInterface(Z_Construct_UClass_UEquipmentInterface, &UEquipmentInterface::StaticClass, TEXT("/Script/ModularItemManagement"), TEXT("UEquipmentInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentInterface);
	static FName NAME_UEquipmentInterface_GetEquipment = FName(TEXT("GetEquipment"));
	UEquipmentComponent* IEquipmentInterface::Execute_GetEquipment(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UEquipmentInterface::StaticClass()));
		EquipmentInterface_eventGetEquipment_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UEquipmentInterface_GetEquipment);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
