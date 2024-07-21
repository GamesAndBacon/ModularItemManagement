// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/BaseItem.h"
#include "ModularItemManagement/Public/ItemsLib.h"
#include "StructUtils/Public/InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItem() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseMutator_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemDataAsset_NoRegister();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature();
MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FItemRecord();
STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin Delegate FMutatorChanged
struct Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics
{
	struct BaseItem_eventMutatorChanged_Parms
	{
		UBaseMutator* Mutator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mutator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::NewProp_Mutator = { "Mutator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventMutatorChanged_Parms, Mutator), Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::NewProp_Mutator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "MutatorChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::BaseItem_eventMutatorChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::BaseItem_eventMutatorChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseItem::FMutatorChanged_DelegateWrapper(const FMulticastScriptDelegate& MutatorChanged, UBaseMutator* Mutator)
{
	struct BaseItem_eventMutatorChanged_Parms
	{
		UBaseMutator* Mutator;
	};
	BaseItem_eventMutatorChanged_Parms Parms;
	Parms.Mutator=Mutator;
	MutatorChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMutatorChanged

// Begin Delegate FStackSizeChanged
struct Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics
{
	struct BaseItem_eventStackSizeChanged_Parms
	{
		int32 NewStackSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewStackSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::NewProp_NewStackSize = { "NewStackSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventStackSizeChanged_Parms, NewStackSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::NewProp_NewStackSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "StackSizeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::BaseItem_eventStackSizeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::BaseItem_eventStackSizeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UBaseItem::FStackSizeChanged_DelegateWrapper(const FMulticastScriptDelegate& StackSizeChanged, int32 NewStackSize)
{
	struct BaseItem_eventStackSizeChanged_Parms
	{
		int32 NewStackSize;
	};
	BaseItem_eventStackSizeChanged_Parms Parms;
	Parms.NewStackSize=NewStackSize;
	StackSizeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FStackSizeChanged

// Begin Class UBaseItem Function AddMutator
struct Z_Construct_UFunction_UBaseItem_AddMutator_Statics
{
	struct BaseItem_eventAddMutator_Parms
	{
		TSubclassOf<UBaseMutator> Mutator;
		FInstancedStruct MutatatorData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Mutator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MutatatorData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseItem_AddMutator_Statics::NewProp_Mutator = { "Mutator", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventAddMutator_Parms, Mutator), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseItem_AddMutator_Statics::NewProp_MutatatorData = { "MutatatorData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventAddMutator_Parms, MutatatorData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_AddMutator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_AddMutator_Statics::NewProp_Mutator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_AddMutator_Statics::NewProp_MutatatorData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddMutator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_AddMutator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "AddMutator", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_AddMutator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddMutator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseItem_AddMutator_Statics::BaseItem_eventAddMutator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddMutator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_AddMutator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseItem_AddMutator_Statics::BaseItem_eventAddMutator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_AddMutator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_AddMutator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execAddMutator)
{
	P_GET_OBJECT(UClass,Z_Param_Mutator);
	P_GET_STRUCT(FInstancedStruct,Z_Param_MutatatorData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMutator(Z_Param_Mutator,Z_Param_MutatatorData);
	P_NATIVE_END;
}
// End Class UBaseItem Function AddMutator

// Begin Class UBaseItem Function AddToStack
struct Z_Construct_UFunction_UBaseItem_AddToStack_Statics
{
	struct BaseItem_eventAddToStack_Parms
	{
		int32 Amount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stacking" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseItem_AddToStack_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventAddToStack_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseItem_AddToStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventAddToStack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_AddToStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_AddToStack_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_AddToStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddToStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_AddToStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "AddToStack", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_AddToStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddToStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseItem_AddToStack_Statics::BaseItem_eventAddToStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddToStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_AddToStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseItem_AddToStack_Statics::BaseItem_eventAddToStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_AddToStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_AddToStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execAddToStack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddToStack(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UBaseItem Function AddToStack

// Begin Class UBaseItem Function BeginPlay
static FName NAME_UBaseItem_BeginPlay = FName(TEXT("BeginPlay"));
void UBaseItem::BeginPlay()
{
	ProcessEvent(FindFunctionChecked(NAME_UBaseItem_BeginPlay),NULL);
}
struct Z_Construct_UFunction_UBaseItem_BeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "BeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseItem_BeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginPlay_Implementation();
	P_NATIVE_END;
}
// End Class UBaseItem Function BeginPlay

// Begin Class UBaseItem Function DoEquipBP
struct BaseItem_eventDoEquipBP_Parms
{
	UEquipmentComponent* EC;
	UBaseItem* ReturnValue;

	/** Constructor, initializes return property only **/
	BaseItem_eventDoEquipBP_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UBaseItem_DoEquipBP = FName(TEXT("DoEquipBP"));
UBaseItem* UBaseItem::DoEquipBP(UEquipmentComponent* EC)
{
	BaseItem_eventDoEquipBP_Parms Parms;
	Parms.EC=EC;
	ProcessEvent(FindFunctionChecked(NAME_UBaseItem_DoEquipBP),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_EC = { "EC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventDoEquipBP_Parms, EC), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EC_MetaData), NewProp_EC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventDoEquipBP_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_EC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoEquipBP", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers), sizeof(BaseItem_eventDoEquipBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseItem_eventDoEquipBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_DoEquipBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execDoEquipBP)
{
	P_GET_OBJECT(UEquipmentComponent,Z_Param_EC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseItem**)Z_Param__Result=P_THIS->DoEquipBP_Implementation(Z_Param_EC);
	P_NATIVE_END;
}
// End Class UBaseItem Function DoEquipBP

// Begin Class UBaseItem Function DoUnEquipBP
struct BaseItem_eventDoUnEquipBP_Parms
{
	UEquipmentComponent* EC;
	UBaseItem* ReturnValue;

	/** Constructor, initializes return property only **/
	BaseItem_eventDoUnEquipBP_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_UBaseItem_DoUnEquipBP = FName(TEXT("DoUnEquipBP"));
UBaseItem* UBaseItem::DoUnEquipBP(UEquipmentComponent* EC)
{
	BaseItem_eventDoUnEquipBP_Parms Parms;
	Parms.EC=EC;
	ProcessEvent(FindFunctionChecked(NAME_UBaseItem_DoUnEquipBP),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_EC = { "EC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventDoUnEquipBP_Parms, EC), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EC_MetaData), NewProp_EC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventDoUnEquipBP_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_EC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoUnEquipBP", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers), sizeof(BaseItem_eventDoUnEquipBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseItem_eventDoUnEquipBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_DoUnEquipBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execDoUnEquipBP)
{
	P_GET_OBJECT(UEquipmentComponent,Z_Param_EC);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseItem**)Z_Param__Result=P_THIS->DoUnEquipBP_Implementation(Z_Param_EC);
	P_NATIVE_END;
}
// End Class UBaseItem Function DoUnEquipBP

// Begin Class UBaseItem Function DoUse
struct Z_Construct_UFunction_UBaseItem_DoUse_Statics
{
	struct BaseItem_eventDoUse_Parms
	{
		AActor* Owner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoUse_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventDoUse_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoUse_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoUse", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseItem_DoUse_Statics::BaseItem_eventDoUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_DoUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseItem_DoUse_Statics::BaseItem_eventDoUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_DoUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_DoUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execDoUse)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoUse(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UBaseItem Function DoUse

// Begin Class UBaseItem Function DoUseBP
static FName NAME_UBaseItem_DoUseBP = FName(TEXT("DoUseBP"));
void UBaseItem::DoUseBP()
{
	ProcessEvent(FindFunctionChecked(NAME_UBaseItem_DoUseBP),NULL);
}
struct Z_Construct_UFunction_UBaseItem_DoUseBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoUseBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoUseBP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUseBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_DoUseBP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseItem_DoUseBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_DoUseBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execDoUseBP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoUseBP_Implementation();
	P_NATIVE_END;
}
// End Class UBaseItem Function DoUseBP

// Begin Class UBaseItem Function GetMutatorDefaultObject
struct Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics
{
	struct BaseItem_eventGetMutatorDefaultObject_Parms
	{
		TSubclassOf<UBaseMutator> Mutator;
		UBaseMutator* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Mutator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::NewProp_Mutator = { "Mutator", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventGetMutatorDefaultObject_Parms, Mutator), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventGetMutatorDefaultObject_Parms, ReturnValue), Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::NewProp_Mutator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "GetMutatorDefaultObject", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::BaseItem_eventGetMutatorDefaultObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::BaseItem_eventGetMutatorDefaultObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execGetMutatorDefaultObject)
{
	P_GET_OBJECT(UClass,Z_Param_Mutator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseMutator**)Z_Param__Result=P_THIS->GetMutatorDefaultObject(Z_Param_Mutator);
	P_NATIVE_END;
}
// End Class UBaseItem Function GetMutatorDefaultObject

// Begin Class UBaseItem Function InitItem
struct Z_Construct_UFunction_UBaseItem_InitItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_InitItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "InitItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_InitItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_InitItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseItem_InitItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_InitItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execInitItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitItem();
	P_NATIVE_END;
}
// End Class UBaseItem Function InitItem

// Begin Class UBaseItem Function IsStackable
struct Z_Construct_UFunction_UBaseItem_IsStackable_Statics
{
	struct BaseItem_eventIsStackable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stacking" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseItem_IsStackable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseItem_eventIsStackable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseItem_IsStackable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseItem_eventIsStackable_Parms), &Z_Construct_UFunction_UBaseItem_IsStackable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_IsStackable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_IsStackable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_IsStackable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_IsStackable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "IsStackable", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_IsStackable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_IsStackable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseItem_IsStackable_Statics::BaseItem_eventIsStackable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_IsStackable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_IsStackable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseItem_IsStackable_Statics::BaseItem_eventIsStackable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_IsStackable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_IsStackable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execIsStackable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStackable();
	P_NATIVE_END;
}
// End Class UBaseItem Function IsStackable

// Begin Class UBaseItem Function OnEquip
struct BaseItem_eventOnEquip_Parms
{
	AActor* Owner;
};
static FName NAME_UBaseItem_OnEquip = FName(TEXT("OnEquip"));
void UBaseItem::OnEquip(AActor* Owner)
{
	BaseItem_eventOnEquip_Parms Parms;
	Parms.Owner=Owner;
	ProcessEvent(FindFunctionChecked(NAME_UBaseItem_OnEquip),&Parms);
}
struct Z_Construct_UFunction_UBaseItem_OnEquip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_OnEquip_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnEquip_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_OnEquip_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnEquip", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers), sizeof(BaseItem_eventOnEquip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_OnEquip_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseItem_eventOnEquip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_OnEquip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_OnEquip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execOnEquip)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEquip_Implementation(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UBaseItem Function OnEquip

// Begin Class UBaseItem Function OnItemLoad
struct Z_Construct_UFunction_UBaseItem_OnItemLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnItemLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnItemLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnItemLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_OnItemLoad_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseItem_OnItemLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_OnItemLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execOnItemLoad)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemLoad();
	P_NATIVE_END;
}
// End Class UBaseItem Function OnItemLoad

// Begin Class UBaseItem Function OnItemSave
struct Z_Construct_UFunction_UBaseItem_OnItemSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnItemSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnItemSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnItemSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_OnItemSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseItem_OnItemSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_OnItemSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execOnItemSave)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemSave();
	P_NATIVE_END;
}
// End Class UBaseItem Function OnItemSave

// Begin Class UBaseItem Function OnLoadMutator
struct BaseItem_eventOnLoadMutator_Parms
{
	UBaseMutator* Owner;
};
static FName NAME_UBaseItem_OnLoadMutator = FName(TEXT("OnLoadMutator"));
void UBaseItem::OnLoadMutator(UBaseMutator* Owner)
{
	BaseItem_eventOnLoadMutator_Parms Parms;
	Parms.Owner=Owner;
	ProcessEvent(FindFunctionChecked(NAME_UBaseItem_OnLoadMutator),&Parms);
}
struct Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnLoadMutator_Parms, Owner), Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnLoadMutator", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::PropPointers), sizeof(BaseItem_eventOnLoadMutator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseItem_eventOnLoadMutator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_OnLoadMutator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_OnLoadMutator_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseItem Function OnLoadMutator

// Begin Class UBaseItem Function OnSaveMutator
struct BaseItem_eventOnSaveMutator_Parms
{
	UBaseMutator* Owner;
};
static FName NAME_UBaseItem_OnSaveMutator = FName(TEXT("OnSaveMutator"));
void UBaseItem::OnSaveMutator(UBaseMutator* Owner)
{
	BaseItem_eventOnSaveMutator_Parms Parms;
	Parms.Owner=Owner;
	ProcessEvent(FindFunctionChecked(NAME_UBaseItem_OnSaveMutator),&Parms);
}
struct Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnSaveMutator_Parms, Owner), Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnSaveMutator", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::PropPointers), sizeof(BaseItem_eventOnSaveMutator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseItem_eventOnSaveMutator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_OnSaveMutator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_OnSaveMutator_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBaseItem Function OnSaveMutator

// Begin Class UBaseItem Function OnUnequip
struct BaseItem_eventOnUnequip_Parms
{
	AActor* Owner;
};
static FName NAME_UBaseItem_OnUnequip = FName(TEXT("OnUnequip"));
void UBaseItem::OnUnequip(AActor* Owner)
{
	BaseItem_eventOnUnequip_Parms Parms;
	Parms.Owner=Owner;
	ProcessEvent(FindFunctionChecked(NAME_UBaseItem_OnUnequip),&Parms);
}
struct Z_Construct_UFunction_UBaseItem_OnUnequip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventOnUnequip_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnUnequip", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers), sizeof(BaseItem_eventOnUnequip_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::Function_MetaDataParams) };
static_assert(sizeof(BaseItem_eventOnUnequip_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_OnUnequip()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execOnUnequip)
{
	P_GET_OBJECT(AActor,Z_Param_Owner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnUnequip_Implementation(Z_Param_Owner);
	P_NATIVE_END;
}
// End Class UBaseItem Function OnUnequip

// Begin Class UBaseItem Function RemoveFromStack
struct Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics
{
	struct BaseItem_eventRemoveFromStack_Parms
	{
		int32 Amount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stacking" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventRemoveFromStack_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventRemoveFromStack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "RemoveFromStack", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::BaseItem_eventRemoveFromStack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::BaseItem_eventRemoveFromStack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_RemoveFromStack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_RemoveFromStack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execRemoveFromStack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveFromStack(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UBaseItem Function RemoveFromStack

// Begin Class UBaseItem Function RemoveMutator
struct Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics
{
	struct BaseItem_eventRemoveMutator_Parms
	{
		TSubclassOf<UBaseMutator> Mutator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Mutator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::NewProp_Mutator = { "Mutator", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseItem_eventRemoveMutator_Parms, Mutator), Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::NewProp_Mutator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "RemoveMutator", nullptr, nullptr, Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::BaseItem_eventRemoveMutator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::BaseItem_eventRemoveMutator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseItem_RemoveMutator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execRemoveMutator)
{
	P_GET_OBJECT(UClass,Z_Param_Mutator);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveMutator(Z_Param_Mutator);
	P_NATIVE_END;
}
// End Class UBaseItem Function RemoveMutator

// Begin Class UBaseItem Function SaveMutators
struct Z_Construct_UFunction_UBaseItem_SaveMutators_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_SaveMutators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "SaveMutators", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_SaveMutators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseItem_SaveMutators_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseItem_SaveMutators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseItem_SaveMutators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseItem::execSaveMutators)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveMutators();
	P_NATIVE_END;
}
// End Class UBaseItem Function SaveMutators

// Begin Class UBaseItem
void UBaseItem::StaticRegisterNativesUBaseItem()
{
	UClass* Class = UBaseItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMutator", &UBaseItem::execAddMutator },
		{ "AddToStack", &UBaseItem::execAddToStack },
		{ "BeginPlay", &UBaseItem::execBeginPlay },
		{ "DoEquipBP", &UBaseItem::execDoEquipBP },
		{ "DoUnEquipBP", &UBaseItem::execDoUnEquipBP },
		{ "DoUse", &UBaseItem::execDoUse },
		{ "DoUseBP", &UBaseItem::execDoUseBP },
		{ "GetMutatorDefaultObject", &UBaseItem::execGetMutatorDefaultObject },
		{ "InitItem", &UBaseItem::execInitItem },
		{ "IsStackable", &UBaseItem::execIsStackable },
		{ "OnEquip", &UBaseItem::execOnEquip },
		{ "OnItemLoad", &UBaseItem::execOnItemLoad },
		{ "OnItemSave", &UBaseItem::execOnItemSave },
		{ "OnUnequip", &UBaseItem::execOnUnequip },
		{ "RemoveFromStack", &UBaseItem::execRemoveFromStack },
		{ "RemoveMutator", &UBaseItem::execRemoveMutator },
		{ "SaveMutators", &UBaseItem::execSaveMutators },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseItem);
UClass* Z_Construct_UClass_UBaseItem_NoRegister()
{
	return UBaseItem::StaticClass();
}
struct Z_Construct_UClass_UBaseItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BaseItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutatorAdded_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// New delegate for stack size changes\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "New delegate for stack size changes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MutatorRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStackSizeChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseActor_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedMutators_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackSize_MetaData[] = {
		{ "Category", "Stacking" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// properties and methods for stacking\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "properties and methods for stacking" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxStackSize_MetaData[] = {
		{ "Category", "Stacking" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mutators_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MutatorAdded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_MutatorRemoved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStackSizeChanged;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UseActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SavedMutators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedMutators;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StackSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStackSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Mutators_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_Mutators_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Mutators;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseItem_AddMutator, "AddMutator" }, // 3836585400
		{ &Z_Construct_UFunction_UBaseItem_AddToStack, "AddToStack" }, // 1656026483
		{ &Z_Construct_UFunction_UBaseItem_BeginPlay, "BeginPlay" }, // 18320015
		{ &Z_Construct_UFunction_UBaseItem_DoEquipBP, "DoEquipBP" }, // 1131902581
		{ &Z_Construct_UFunction_UBaseItem_DoUnEquipBP, "DoUnEquipBP" }, // 2744402713
		{ &Z_Construct_UFunction_UBaseItem_DoUse, "DoUse" }, // 2114279609
		{ &Z_Construct_UFunction_UBaseItem_DoUseBP, "DoUseBP" }, // 1085052474
		{ &Z_Construct_UFunction_UBaseItem_GetMutatorDefaultObject, "GetMutatorDefaultObject" }, // 2380455132
		{ &Z_Construct_UFunction_UBaseItem_InitItem, "InitItem" }, // 2887580521
		{ &Z_Construct_UFunction_UBaseItem_IsStackable, "IsStackable" }, // 1886233305
		{ &Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature, "MutatorChanged__DelegateSignature" }, // 624767478
		{ &Z_Construct_UFunction_UBaseItem_OnEquip, "OnEquip" }, // 973336482
		{ &Z_Construct_UFunction_UBaseItem_OnItemLoad, "OnItemLoad" }, // 3961665492
		{ &Z_Construct_UFunction_UBaseItem_OnItemSave, "OnItemSave" }, // 1348866582
		{ &Z_Construct_UFunction_UBaseItem_OnLoadMutator, "OnLoadMutator" }, // 2221942405
		{ &Z_Construct_UFunction_UBaseItem_OnSaveMutator, "OnSaveMutator" }, // 1726702722
		{ &Z_Construct_UFunction_UBaseItem_OnUnequip, "OnUnequip" }, // 2496866372
		{ &Z_Construct_UFunction_UBaseItem_RemoveFromStack, "RemoveFromStack" }, // 3522121412
		{ &Z_Construct_UFunction_UBaseItem_RemoveMutator, "RemoveMutator" }, // 1851799367
		{ &Z_Construct_UFunction_UBaseItem_SaveMutators, "SaveMutators" }, // 3822989103
		{ &Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature, "StackSizeChanged__DelegateSignature" }, // 3959690321
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorAdded = { "MutatorAdded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, MutatorAdded), Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutatorAdded_MetaData), NewProp_MutatorAdded_MetaData) }; // 624767478
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorRemoved = { "MutatorRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, MutatorRemoved), Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MutatorRemoved_MetaData), NewProp_MutatorRemoved_MetaData) }; // 624767478
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_OnStackSizeChanged = { "OnStackSizeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, OnStackSizeChanged), Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStackSizeChanged_MetaData), NewProp_OnStackSizeChanged_MetaData) }; // 3959690321
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_UseActor = { "UseActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, UseActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseActor_MetaData), NewProp_UseActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0011000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, ItemData), Z_Construct_UClass_UItemDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemData_MetaData), NewProp_ItemData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_SavedMutators_Inner = { "SavedMutators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FItemRecord, METADATA_PARAMS(0, nullptr) }; // 2787749913
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_SavedMutators = { "SavedMutators", nullptr, (EPropertyFlags)0x0010000001000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, SavedMutators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedMutators_MetaData), NewProp_SavedMutators_MetaData) }; // 2787749913
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_StackSize = { "StackSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, StackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackSize_MetaData), NewProp_StackSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_MaxStackSize = { "MaxStackSize", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, MaxStackSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxStackSize_MetaData), NewProp_MaxStackSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_ValueProp = { "Mutators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(0, nullptr) }; // 174410355
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_Key_KeyProp = { "Mutators_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators = { "Mutators", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseItem, Mutators), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mutators_MetaData), NewProp_Mutators_MetaData) }; // 174410355
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorAdded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorRemoved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_OnStackSizeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_UseActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_ItemData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_SavedMutators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_SavedMutators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_StackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_MaxStackSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseItem_Statics::ClassParams = {
	&UBaseItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseItem()
{
	if (!Z_Registration_Info_UClass_UBaseItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseItem.OuterSingleton, Z_Construct_UClass_UBaseItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseItem.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UBaseItem>()
{
	return UBaseItem::StaticClass();
}
void UBaseItem::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SavedMutators(TEXT("SavedMutators"));
	const bool bIsValid = true
		&& Name_SavedMutators == ClassReps[(int32)ENetFields_Private::SavedMutators].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UBaseItem"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseItem);
UBaseItem::~UBaseItem() {}
// End Class UBaseItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseItem, UBaseItem::StaticClass, TEXT("UBaseItem"), &Z_Registration_Info_UClass_UBaseItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseItem), 797026025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_3758518113(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
