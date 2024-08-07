// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/Grid/GridModifierComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridModifierComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UGridModifierComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UGridModifierComponent_NoRegister();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Delegate FGridModifierEvent
struct Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics
{
	struct _Script_ModularItemManagement_eventGridModifierEvent_Parms
	{
		TSet<FVector2D> Cells;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::NewProp_Cells_ElementProp = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FVector2D>, "The structure 'FVector2D' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularItemManagement_eventGridModifierEvent_Parms, Cells), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::NewProp_Cells_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModularItemManagement, nullptr, "GridModifierEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::_Script_ModularItemManagement_eventGridModifierEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::_Script_ModularItemManagement_eventGridModifierEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGridModifierEvent_DelegateWrapper(const FMulticastScriptDelegate& GridModifierEvent, TSet<FVector2D> const& Cells)
{
	struct _Script_ModularItemManagement_eventGridModifierEvent_Parms
	{
		TSet<FVector2D> Cells;
	};
	_Script_ModularItemManagement_eventGridModifierEvent_Parms Parms;
	Parms.Cells=Cells;
	GridModifierEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FGridModifierEvent

// Begin Class UGridModifierComponent Function CalculateAffectedCells
struct GridModifierComponent_eventCalculateAffectedCells_Parms
{
	TSet<FVector2D> OutCells;
};
static FName NAME_UGridModifierComponent_CalculateAffectedCells = FName(TEXT("CalculateAffectedCells"));
void UGridModifierComponent::CalculateAffectedCells(TSet<FVector2D>& OutCells)
{
	GridModifierComponent_eventCalculateAffectedCells_Parms Parms;
	Parms.OutCells=OutCells;
	ProcessEvent(FindFunctionChecked(NAME_UGridModifierComponent_CalculateAffectedCells),&Parms);
	OutCells=Parms.OutCells;
}
struct Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Modifier|Affected Cells" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCells_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_OutCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::NewProp_OutCells_ElementProp = { "OutCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FVector2D>, "The structure 'FVector2D' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::NewProp_OutCells = { "OutCells", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridModifierComponent_eventCalculateAffectedCells_Parms, OutCells), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::NewProp_OutCells_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::NewProp_OutCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridModifierComponent, nullptr, "CalculateAffectedCells", nullptr, nullptr, Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::PropPointers), sizeof(GridModifierComponent_eventCalculateAffectedCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::Function_MetaDataParams) };
static_assert(sizeof(GridModifierComponent_eventCalculateAffectedCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridModifierComponent::execCalculateAffectedCells)
{
	P_GET_TSET_REF(FVector2D,Z_Param_Out_OutCells);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateAffectedCells_Implementation(Z_Param_Out_OutCells);
	P_NATIVE_END;
}
// End Class UGridModifierComponent Function CalculateAffectedCells

// Begin Class UGridModifierComponent Function GetCells
struct Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics
{
	struct GridModifierComponent_eventGetCells_Parms
	{
		TSet<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Modifier" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FVector2D>, "The structure 'FVector2D' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridModifierComponent_eventGetCells_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridModifierComponent, nullptr, "GetCells", nullptr, nullptr, Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::GridModifierComponent_eventGetCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::GridModifierComponent_eventGetCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridModifierComponent_GetCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridModifierComponent_GetCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridModifierComponent::execGetCells)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FVector2D>*)Z_Param__Result=P_THIS->GetCells();
	P_NATIVE_END;
}
// End Class UGridModifierComponent Function GetCells

// Begin Class UGridModifierComponent Function GetInvalidCells
struct Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics
{
	struct GridModifierComponent_eventGetInvalidCells_Parms
	{
		TSet<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Modifier" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FVector2D>, "The structure 'FVector2D' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridModifierComponent_eventGetInvalidCells_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridModifierComponent, nullptr, "GetInvalidCells", nullptr, nullptr, Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::GridModifierComponent_eventGetInvalidCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::GridModifierComponent_eventGetInvalidCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridModifierComponent::execGetInvalidCells)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FVector2D>*)Z_Param__Result=P_THIS->GetInvalidCells();
	P_NATIVE_END;
}
// End Class UGridModifierComponent Function GetInvalidCells

// Begin Class UGridModifierComponent Function GetOwningGrid
struct Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics
{
	struct GridModifierComponent_eventGetOwningGrid_Parms
	{
		AGridManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Modifier|Owning Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridModifierComponent_eventGetOwningGrid_Parms, ReturnValue), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridModifierComponent, nullptr, "GetOwningGrid", nullptr, nullptr, Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::GridModifierComponent_eventGetOwningGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::GridModifierComponent_eventGetOwningGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridModifierComponent::execGetOwningGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AGridManager**)Z_Param__Result=P_THIS->GetOwningGrid();
	P_NATIVE_END;
}
// End Class UGridModifierComponent Function GetOwningGrid

// Begin Class UGridModifierComponent Function GetValidCells
struct Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics
{
	struct GridModifierComponent_eventGetValidCells_Parms
	{
		TSet<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Modifier" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FVector2D>, "The structure 'FVector2D' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridModifierComponent_eventGetValidCells_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridModifierComponent, nullptr, "GetValidCells", nullptr, nullptr, Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::GridModifierComponent_eventGetValidCells_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::GridModifierComponent_eventGetValidCells_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridModifierComponent_GetValidCells()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridModifierComponent_GetValidCells_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridModifierComponent::execGetValidCells)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<FVector2D>*)Z_Param__Result=P_THIS->GetValidCells();
	P_NATIVE_END;
}
// End Class UGridModifierComponent Function GetValidCells

// Begin Class UGridModifierComponent Function IsCellValid
struct GridModifierComponent_eventIsCellValid_Parms
{
	FVector2D Cell;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	GridModifierComponent_eventIsCellValid_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UGridModifierComponent_IsCellValid = FName(TEXT("IsCellValid"));
bool UGridModifierComponent::IsCellValid(FVector2D const& Cell) const
{
	GridModifierComponent_eventIsCellValid_Parms Parms;
	Parms.Cell=Cell;
	const_cast<UGridModifierComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGridModifierComponent_IsCellValid),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Modifier|Cell Validity" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cell_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridModifierComponent_eventIsCellValid_Parms, Cell), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cell_MetaData), NewProp_Cell_MetaData) };
void Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridModifierComponent_eventIsCellValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridModifierComponent_eventIsCellValid_Parms), &Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridModifierComponent, nullptr, "IsCellValid", nullptr, nullptr, Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::PropPointers), sizeof(GridModifierComponent_eventIsCellValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(GridModifierComponent_eventIsCellValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridModifierComponent_IsCellValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridModifierComponent_IsCellValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridModifierComponent::execIsCellValid)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Cell);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCellValid_Implementation(Z_Param_Out_Cell);
	P_NATIVE_END;
}
// End Class UGridModifierComponent Function IsCellValid

// Begin Class UGridModifierComponent Function SetOverrideGrid
struct Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics
{
	struct GridModifierComponent_eventSetOverrideGrid_Parms
	{
		AGridManager* NewOverrideGrid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Modifier" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOverrideGrid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::NewProp_NewOverrideGrid = { "NewOverrideGrid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridModifierComponent_eventSetOverrideGrid_Parms, NewOverrideGrid), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::NewProp_NewOverrideGrid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridModifierComponent, nullptr, "SetOverrideGrid", nullptr, nullptr, Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::GridModifierComponent_eventSetOverrideGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::GridModifierComponent_eventSetOverrideGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridModifierComponent::execSetOverrideGrid)
{
	P_GET_OBJECT(AGridManager,Z_Param_NewOverrideGrid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOverrideGrid(Z_Param_NewOverrideGrid);
	P_NATIVE_END;
}
// End Class UGridModifierComponent Function SetOverrideGrid

// Begin Class UGridModifierComponent Function UpdateModifier
struct Z_Construct_UFunction_UGridModifierComponent_UpdateModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid Modifier" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridModifierComponent_UpdateModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridModifierComponent, nullptr, "UpdateModifier", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridModifierComponent_UpdateModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridModifierComponent_UpdateModifier_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGridModifierComponent_UpdateModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridModifierComponent_UpdateModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridModifierComponent::execUpdateModifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateModifier();
	P_NATIVE_END;
}
// End Class UGridModifierComponent Function UpdateModifier

// Begin Class UGridModifierComponent
void UGridModifierComponent::StaticRegisterNativesUGridModifierComponent()
{
	UClass* Class = UGridModifierComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateAffectedCells", &UGridModifierComponent::execCalculateAffectedCells },
		{ "GetCells", &UGridModifierComponent::execGetCells },
		{ "GetInvalidCells", &UGridModifierComponent::execGetInvalidCells },
		{ "GetOwningGrid", &UGridModifierComponent::execGetOwningGrid },
		{ "GetValidCells", &UGridModifierComponent::execGetValidCells },
		{ "IsCellValid", &UGridModifierComponent::execIsCellValid },
		{ "SetOverrideGrid", &UGridModifierComponent::execSetOverrideGrid },
		{ "UpdateModifier", &UGridModifierComponent::execUpdateModifier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridModifierComponent);
UClass* Z_Construct_UClass_UGridModifierComponent_NoRegister()
{
	return UGridModifierComponent::StaticClass();
}
struct Z_Construct_UClass_UGridModifierComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Grid" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Grid/GridModifierComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCellsUpdated_MetaData[] = {
		{ "Category", "Grid Modifier|Events" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCellsRemoved_MetaData[] = {
		{ "Category", "Grid Modifier|Events" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideGrid_MetaData[] = {
		{ "Category", "Grid Modifier|Owning Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningGrid_MetaData[] = {
		{ "Category", "Grid Modifier|Owning Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridModifierComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCellsUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCellsRemoved;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideGrid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningGrid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridModifierComponent_CalculateAffectedCells, "CalculateAffectedCells" }, // 3389412146
		{ &Z_Construct_UFunction_UGridModifierComponent_GetCells, "GetCells" }, // 1902704640
		{ &Z_Construct_UFunction_UGridModifierComponent_GetInvalidCells, "GetInvalidCells" }, // 856599902
		{ &Z_Construct_UFunction_UGridModifierComponent_GetOwningGrid, "GetOwningGrid" }, // 1820593276
		{ &Z_Construct_UFunction_UGridModifierComponent_GetValidCells, "GetValidCells" }, // 1031829126
		{ &Z_Construct_UFunction_UGridModifierComponent_IsCellValid, "IsCellValid" }, // 1237581438
		{ &Z_Construct_UFunction_UGridModifierComponent_SetOverrideGrid, "SetOverrideGrid" }, // 2629292680
		{ &Z_Construct_UFunction_UGridModifierComponent_UpdateModifier, "UpdateModifier" }, // 3185970954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridModifierComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridModifierComponent_Statics::NewProp_OnCellsUpdated = { "OnCellsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridModifierComponent, OnCellsUpdated), Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCellsUpdated_MetaData), NewProp_OnCellsUpdated_MetaData) }; // 3035103553
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGridModifierComponent_Statics::NewProp_OnCellsRemoved = { "OnCellsRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridModifierComponent, OnCellsRemoved), Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCellsRemoved_MetaData), NewProp_OnCellsRemoved_MetaData) }; // 3035103553
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridModifierComponent_Statics::NewProp_OverrideGrid = { "OverrideGrid", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridModifierComponent, OverrideGrid), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideGrid_MetaData), NewProp_OverrideGrid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGridModifierComponent_Statics::NewProp_OwningGrid = { "OwningGrid", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridModifierComponent, OwningGrid), Z_Construct_UClass_AGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningGrid_MetaData), NewProp_OwningGrid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridModifierComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridModifierComponent_Statics::NewProp_OnCellsUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridModifierComponent_Statics::NewProp_OnCellsRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridModifierComponent_Statics::NewProp_OverrideGrid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridModifierComponent_Statics::NewProp_OwningGrid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridModifierComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridModifierComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridModifierComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridModifierComponent_Statics::ClassParams = {
	&UGridModifierComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGridModifierComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridModifierComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridModifierComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridModifierComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridModifierComponent()
{
	if (!Z_Registration_Info_UClass_UGridModifierComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridModifierComponent.OuterSingleton, Z_Construct_UClass_UGridModifierComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridModifierComponent.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UGridModifierComponent>()
{
	return UGridModifierComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridModifierComponent);
UGridModifierComponent::~UGridModifierComponent() {}
// End Class UGridModifierComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridModifierComponent, UGridModifierComponent::StaticClass, TEXT("UGridModifierComponent"), &Z_Registration_Info_UClass_UGridModifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridModifierComponent), 154078824U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_2815185658(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
