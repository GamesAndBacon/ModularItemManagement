// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/Grid/GridManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridManager() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_AGridManager();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_AGridManager_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItem_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemDefinition_NoRegister();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Delegate FOnItemAddedToGrid
struct Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics
{
	struct _Script_ModularItemManagement_eventOnItemAddedToGrid_Parms
	{
		UItem* Item;
		FVector2D Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularItemManagement_eventOnItemAddedToGrid_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ModularItemManagement_eventOnItemAddedToGrid_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModularItemManagement, nullptr, "OnItemAddedToGrid__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::_Script_ModularItemManagement_eventOnItemAddedToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::_Script_ModularItemManagement_eventOnItemAddedToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnItemAddedToGrid_DelegateWrapper(const FMulticastScriptDelegate& OnItemAddedToGrid, UItem* Item, FVector2D Position)
{
	struct _Script_ModularItemManagement_eventOnItemAddedToGrid_Parms
	{
		UItem* Item;
		FVector2D Position;
	};
	_Script_ModularItemManagement_eventOnItemAddedToGrid_Parms Parms;
	Parms.Item=Item;
	Parms.Position=Position;
	OnItemAddedToGrid.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnItemAddedToGrid

// Begin Delegate FOnGridInitialized
struct Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ModularItemManagement, nullptr, "OnGridInitialized__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGridInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnGridInitialized)
{
	OnGridInitialized.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnGridInitialized

// Begin Class AGridManager Function AddItemToGrid
struct Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics
{
	struct GridManager_eventAddItemToGrid_Parms
	{
		UItem* Item;
		FVector2D Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventAddItemToGrid_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventAddItemToGrid_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GridManager_eventAddItemToGrid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GridManager_eventAddItemToGrid_Parms), &Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "AddItemToGrid", nullptr, nullptr, Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::GridManager_eventAddItemToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::GridManager_eventAddItemToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_AddItemToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_AddItemToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execAddItemToGrid)
{
	P_GET_OBJECT(UItem,Z_Param_Item);
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItemToGrid(Z_Param_Item,Z_Param_Position);
	P_NATIVE_END;
}
// End Class AGridManager Function AddItemToGrid

// Begin Class AGridManager Function GenerateNextCell
struct Z_Construct_UFunction_AGridManager_GenerateNextCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GenerateNextCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GenerateNextCell", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GenerateNextCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GenerateNextCell_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGridManager_GenerateNextCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GenerateNextCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGenerateNextCell)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateNextCell();
	P_NATIVE_END;
}
// End Class AGridManager Function GenerateNextCell

// Begin Class AGridManager Function GetAdjacentItems
struct Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics
{
	struct GridManager_eventGetAdjacentItems_Parms
	{
		FVector2D Position;
		TArray<FVector2D> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetAdjacentItems_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetAdjacentItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetAdjacentItems", nullptr, nullptr, Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::GridManager_eventGetAdjacentItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::GridManager_eventGetAdjacentItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetAdjacentItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetAdjacentItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetAdjacentItems)
{
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector2D>*)Z_Param__Result=P_THIS->GetAdjacentItems(Z_Param_Position);
	P_NATIVE_END;
}
// End Class AGridManager Function GetAdjacentItems

// Begin Class AGridManager Function GetCellCenter
struct Z_Construct_UFunction_AGridManager_GetCellCenter_Statics
{
	struct GridManager_eventGetCellCenter_Parms
	{
		FVector2D position;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetCellCenter_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetCellCenter_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetCellCenter", nullptr, nullptr, Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::GridManager_eventGetCellCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::GridManager_eventGetCellCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetCellCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetCellCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetCellCenter)
{
	P_GET_STRUCT(FVector2D,Z_Param_position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetCellCenter(Z_Param_position);
	P_NATIVE_END;
}
// End Class AGridManager Function GetCellCenter

// Begin Class AGridManager Function GetCellFromWorldLocation
struct Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics
{
	struct GridManager_eventGetCellFromWorldLocation_Parms
	{
		FVector WorldLocation;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetCellFromWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetCellFromWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetCellFromWorldLocation", nullptr, nullptr, Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::GridManager_eventGetCellFromWorldLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::GridManager_eventGetCellFromWorldLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetCellFromWorldLocation)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetCellFromWorldLocation(Z_Param_WorldLocation);
	P_NATIVE_END;
}
// End Class AGridManager Function GetCellFromWorldLocation

// Begin Class AGridManager Function GetGrid
struct Z_Construct_UFunction_AGridManager_GetGrid_Statics
{
	struct GridManager_eventGetGrid_Parms
	{
		TMap<int32,UItem*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetGrid_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_GetGrid_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_AGridManager_GetGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetGrid_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGrid_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGrid_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetGrid", nullptr, nullptr, Z_Construct_UFunction_AGridManager_GetGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetGrid_Statics::GridManager_eventGetGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetGrid_Statics::GridManager_eventGetGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<int32,UItem*>*)Z_Param__Result=P_THIS->GetGrid();
	P_NATIVE_END;
}
// End Class AGridManager Function GetGrid

// Begin Class AGridManager Function GetItemInCell
struct Z_Construct_UFunction_AGridManager_GetItemInCell_Statics
{
	struct GridManager_eventGetItemInCell_Parms
	{
		FVector2D Position;
		UItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetItemInCell_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventGetItemInCell_Parms, ReturnValue), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "GetItemInCell", nullptr, nullptr, Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::GridManager_eventGetItemInCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::GridManager_eventGetItemInCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_GetItemInCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_GetItemInCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execGetItemInCell)
{
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItem**)Z_Param__Result=P_THIS->GetItemInCell(Z_Param_Position);
	P_NATIVE_END;
}
// End Class AGridManager Function GetItemInCell

// Begin Class AGridManager Function HashPosition
struct Z_Construct_UFunction_AGridManager_HashPosition_Statics
{
	struct GridManager_eventHashPosition_Parms
	{
		FVector2D Position;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_HashPosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventHashPosition_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGridManager_HashPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventHashPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_HashPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_HashPosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_HashPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HashPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_HashPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "HashPosition", nullptr, nullptr, Z_Construct_UFunction_AGridManager_HashPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HashPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_HashPosition_Statics::GridManager_eventHashPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_HashPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_HashPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_HashPosition_Statics::GridManager_eventHashPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_HashPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_HashPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execHashPosition)
{
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->HashPosition(Z_Param_Position);
	P_NATIVE_END;
}
// End Class AGridManager Function HashPosition

// Begin Class AGridManager Function InitializeGrid
struct Z_Construct_UFunction_AGridManager_InitializeGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_InitializeGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "InitializeGrid", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_InitializeGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_InitializeGrid_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGridManager_InitializeGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_InitializeGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execInitializeGrid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeGrid();
	P_NATIVE_END;
}
// End Class AGridManager Function InitializeGrid

// Begin Class AGridManager Function OnItemAddedToGrid
struct GridManager_eventOnItemAddedToGrid_Parms
{
	UItem* Item;
	FVector2D Position;
};
static FName NAME_AGridManager_OnItemAddedToGrid = FName(TEXT("OnItemAddedToGrid"));
void AGridManager::OnItemAddedToGrid(UItem* Item, FVector2D Position)
{
	GridManager_eventOnItemAddedToGrid_Parms Parms;
	Parms.Item=Item;
	Parms.Position=Position;
	ProcessEvent(FindFunctionChecked(NAME_AGridManager_OnItemAddedToGrid),&Parms);
}
struct Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Item;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventOnItemAddedToGrid_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventOnItemAddedToGrid_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::NewProp_Item,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "OnItemAddedToGrid", nullptr, nullptr, Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::PropPointers), sizeof(GridManager_eventOnItemAddedToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(GridManager_eventOnItemAddedToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_OnItemAddedToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_OnItemAddedToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execOnItemAddedToGrid)
{
	P_GET_OBJECT(UItem,Z_Param_Item);
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemAddedToGrid_Implementation(Z_Param_Item,Z_Param_Position);
	P_NATIVE_END;
}
// End Class AGridManager Function OnItemAddedToGrid

// Begin Class AGridManager Function RemoveItemFromGrid
struct Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics
{
	struct GridManager_eventRemoveItemFromGrid_Parms
	{
		FVector2D Position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventRemoveItemFromGrid_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "RemoveItemFromGrid", nullptr, nullptr, Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::GridManager_eventRemoveItemFromGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::GridManager_eventRemoveItemFromGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_RemoveItemFromGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_RemoveItemFromGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execRemoveItemFromGrid)
{
	P_GET_STRUCT(FVector2D,Z_Param_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveItemFromGrid(Z_Param_Position);
	P_NATIVE_END;
}
// End Class AGridManager Function RemoveItemFromGrid

// Begin Class AGridManager Function ReplaceItemOnGrid
struct Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics
{
	struct GridManager_eventReplaceItemOnGrid_Parms
	{
		UItemDefinition* ItemDef;
		FVector2D position;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemDef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::NewProp_ItemDef = { "ItemDef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventReplaceItemOnGrid_Parms, ItemDef), Z_Construct_UClass_UItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventReplaceItemOnGrid_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::NewProp_ItemDef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::NewProp_position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "ReplaceItemOnGrid", nullptr, nullptr, Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::GridManager_eventReplaceItemOnGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::GridManager_eventReplaceItemOnGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execReplaceItemOnGrid)
{
	P_GET_OBJECT(UItemDefinition,Z_Param_ItemDef);
	P_GET_STRUCT(FVector2D,Z_Param_position);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReplaceItemOnGrid(Z_Param_ItemDef,Z_Param_position);
	P_NATIVE_END;
}
// End Class AGridManager Function ReplaceItemOnGrid

// Begin Class AGridManager Function SelectItemDefinitionForNextCell
struct GridManager_eventSelectItemDefinitionForNextCell_Parms
{
	FVector2D position;
	UItemDefinition* ReturnValue;

	/** Constructor, initializes return property only **/
	GridManager_eventSelectItemDefinitionForNextCell_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_AGridManager_SelectItemDefinitionForNextCell = FName(TEXT("SelectItemDefinitionForNextCell"));
UItemDefinition* AGridManager::SelectItemDefinitionForNextCell(FVector2D position)
{
	GridManager_eventSelectItemDefinitionForNextCell_Parms Parms;
	Parms.position=position;
	ProcessEvent(FindFunctionChecked(NAME_AGridManager_SelectItemDefinitionForNextCell),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSelectItemDefinitionForNextCell_Parms, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridManager_eventSelectItemDefinitionForNextCell_Parms, ReturnValue), Z_Construct_UClass_UItemDefinition_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridManager, nullptr, "SelectItemDefinitionForNextCell", nullptr, nullptr, Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::PropPointers), sizeof(GridManager_eventSelectItemDefinitionForNextCell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::Function_MetaDataParams) };
static_assert(sizeof(GridManager_eventSelectItemDefinitionForNextCell_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGridManager::execSelectItemDefinitionForNextCell)
{
	P_GET_STRUCT(FVector2D,Z_Param_position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemDefinition**)Z_Param__Result=P_THIS->SelectItemDefinitionForNextCell_Implementation(Z_Param_position);
	P_NATIVE_END;
}
// End Class AGridManager Function SelectItemDefinitionForNextCell

// Begin Class AGridManager
void AGridManager::StaticRegisterNativesAGridManager()
{
	UClass* Class = AGridManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToGrid", &AGridManager::execAddItemToGrid },
		{ "GenerateNextCell", &AGridManager::execGenerateNextCell },
		{ "GetAdjacentItems", &AGridManager::execGetAdjacentItems },
		{ "GetCellCenter", &AGridManager::execGetCellCenter },
		{ "GetCellFromWorldLocation", &AGridManager::execGetCellFromWorldLocation },
		{ "GetGrid", &AGridManager::execGetGrid },
		{ "GetItemInCell", &AGridManager::execGetItemInCell },
		{ "HashPosition", &AGridManager::execHashPosition },
		{ "InitializeGrid", &AGridManager::execInitializeGrid },
		{ "OnItemAddedToGrid", &AGridManager::execOnItemAddedToGrid },
		{ "RemoveItemFromGrid", &AGridManager::execRemoveItemFromGrid },
		{ "ReplaceItemOnGrid", &AGridManager::execReplaceItemOnGrid },
		{ "SelectItemDefinitionForNextCell", &AGridManager::execSelectItemDefinitionForNextCell },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridManager);
UClass* Z_Construct_UClass_AGridManager_NoRegister()
{
	return AGridManager::StaticClass();
}
struct Z_Construct_UClass_AGridManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Grid/GridManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemAddedToGridEvent_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemRemovedFromGridEvent_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGridInitializedEvent_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCellDefinition_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellsPerSecond_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/GridManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemAddedToGridEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemRemovedFromGridEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGridInitializedEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultCellDefinition;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellsPerSecond;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Grid_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridManager_AddItemToGrid, "AddItemToGrid" }, // 3773612677
		{ &Z_Construct_UFunction_AGridManager_GenerateNextCell, "GenerateNextCell" }, // 1044926203
		{ &Z_Construct_UFunction_AGridManager_GetAdjacentItems, "GetAdjacentItems" }, // 2551405306
		{ &Z_Construct_UFunction_AGridManager_GetCellCenter, "GetCellCenter" }, // 2028719949
		{ &Z_Construct_UFunction_AGridManager_GetCellFromWorldLocation, "GetCellFromWorldLocation" }, // 2576825160
		{ &Z_Construct_UFunction_AGridManager_GetGrid, "GetGrid" }, // 3303468993
		{ &Z_Construct_UFunction_AGridManager_GetItemInCell, "GetItemInCell" }, // 4081014438
		{ &Z_Construct_UFunction_AGridManager_HashPosition, "HashPosition" }, // 2768129665
		{ &Z_Construct_UFunction_AGridManager_InitializeGrid, "InitializeGrid" }, // 1557456002
		{ &Z_Construct_UFunction_AGridManager_OnItemAddedToGrid, "OnItemAddedToGrid" }, // 1379205135
		{ &Z_Construct_UFunction_AGridManager_RemoveItemFromGrid, "RemoveItemFromGrid" }, // 4238301420
		{ &Z_Construct_UFunction_AGridManager_ReplaceItemOnGrid, "ReplaceItemOnGrid" }, // 3031699620
		{ &Z_Construct_UFunction_AGridManager_SelectItemDefinitionForNextCell, "SelectItemDefinitionForNextCell" }, // 1525050919
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_OnItemAddedToGridEvent = { "OnItemAddedToGridEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, OnItemAddedToGridEvent), Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemAddedToGridEvent_MetaData), NewProp_OnItemAddedToGridEvent_MetaData) }; // 2572830804
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_OnItemRemovedFromGridEvent = { "OnItemRemovedFromGridEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, OnItemRemovedFromGridEvent), Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemRemovedFromGridEvent_MetaData), NewProp_OnItemRemovedFromGridEvent_MetaData) }; // 2572830804
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_OnGridInitializedEvent = { "OnGridInitializedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, OnGridInitializedEvent), Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGridInitializedEvent_MetaData), NewProp_OnGridInitializedEvent_MetaData) }; // 3703001784
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_DefaultCellDefinition = { "DefaultCellDefinition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, DefaultCellDefinition), Z_Construct_UClass_UItemDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCellDefinition_MetaData), NewProp_DefaultCellDefinition_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_CellsPerSecond = { "CellsPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, CellsPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellsPerSecond_MetaData), NewProp_CellsPerSecond_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_Grid_ValueProp = { "Grid", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_Grid_Key_KeyProp = { "Grid_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AGridManager_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridManager, Grid), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_OnItemAddedToGridEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_OnItemRemovedFromGridEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_OnGridInitializedEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_DefaultCellDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_CellsPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_Grid_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_Grid_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridManager_Statics::NewProp_Grid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridManager_Statics::ClassParams = {
	&AGridManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGridManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridManager()
{
	if (!Z_Registration_Info_UClass_AGridManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridManager.OuterSingleton, Z_Construct_UClass_AGridManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridManager.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<AGridManager>()
{
	return AGridManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridManager);
AGridManager::~AGridManager() {}
// End Class AGridManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridManager, AGridManager::StaticClass, TEXT("AGridManager"), &Z_Registration_Info_UClass_AGridManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridManager), 257838122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_3189112062(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
