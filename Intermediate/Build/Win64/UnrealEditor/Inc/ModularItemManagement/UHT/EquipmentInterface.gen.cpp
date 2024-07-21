// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Interfaces/EquipmentInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentInterface();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Interface UEquipmentInterface Function GetEquipment
struct EquipmentInterface_eventGetEquipment_Parms
{
	UEquipmentComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	EquipmentInterface_eventGetEquipment_Parms()
		: ReturnValue(NULL)
	{
	}
};
UEquipmentComponent* IEquipmentInterface::GetEquipment()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEquipment instead.");
	EquipmentInterface_eventGetEquipment_Parms Parms;
	return Parms.ReturnValue;
}
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
struct Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Interfaces/EquipmentInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EquipmentInterface_eventGetEquipment_Parms, ReturnValue), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentInterface, nullptr, "GetEquipment", nullptr, nullptr, Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::PropPointers), sizeof(EquipmentInterface_eventGetEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(EquipmentInterface_eventGetEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEquipmentInterface_GetEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEquipmentInterface_GetEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UEquipmentInterface Function GetEquipment

// Begin Interface UEquipmentInterface
void UEquipmentInterface::StaticRegisterNativesUEquipmentInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEquipmentInterface);
UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister()
{
	return UEquipmentInterface::StaticClass();
}
struct Z_Construct_UClass_UEquipmentInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Interfaces/EquipmentInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEquipmentInterface_GetEquipment, "GetEquipment" }, // 4228077120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEquipmentInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEquipmentInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentInterface_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UEquipmentInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEquipmentInterface()
{
	if (!Z_Registration_Info_UClass_UEquipmentInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEquipmentInterface.OuterSingleton, Z_Construct_UClass_UEquipmentInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEquipmentInterface.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UEquipmentInterface>()
{
	return UEquipmentInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentInterface);
UEquipmentInterface::~UEquipmentInterface() {}
// End Interface UEquipmentInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEquipmentInterface, UEquipmentInterface::StaticClass, TEXT("UEquipmentInterface"), &Z_Registration_Info_UClass_UEquipmentInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEquipmentInterface), 2141525677U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_432882269(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
