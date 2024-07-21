// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/BaseItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseItem() {}
// Cross Module References
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseMutator_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics
	{
		struct BaseItem_eventMutatorChanged_Parms
		{
			UBaseMutator* slot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventMutatorChanged_Parms, slot), Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "MutatorChanged__DelegateSignature", nullptr, nullptr, sizeof(BaseItem_eventMutatorChanged_Parms), Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(UBaseItem::execDoEquipBP)
	{
		P_GET_OBJECT(UEquipmentComponent,Z_Param_ec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseItem**)Z_Param__Result=P_THIS->DoEquipBP_Implementation(Z_Param_ec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseItem::execDoUnEquipBP)
	{
		P_GET_OBJECT(UEquipmentComponent,Z_Param_ec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseItem**)Z_Param__Result=P_THIS->DoUnEquipBP_Implementation(Z_Param_ec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseItem::execRemoveMutator)
	{
		P_GET_OBJECT(UBaseMutator,Z_Param_Mutator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseMutator**)Z_Param__Result=P_THIS->RemoveMutator(Z_Param_Mutator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseItem::execAddMutator)
	{
		P_GET_OBJECT(UClass,Z_Param_Mutator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseMutator**)Z_Param__Result=P_THIS->AddMutator(Z_Param_Mutator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseItem::execOnUnequip)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnequip_Implementation(Z_Param_owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseItem::execOnEquip)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquip_Implementation(Z_Param_owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseItem::execDoUse)
	{
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoUse_Implementation(Z_Param_owner);
		P_NATIVE_END;
	}
	static FName NAME_UBaseItem_BeginPlay = FName(TEXT("BeginPlay"));
	void UBaseItem::BeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseItem_BeginPlay),NULL);
	}
	static FName NAME_UBaseItem_DoEquipBP = FName(TEXT("DoEquipBP"));
	UBaseItem* UBaseItem::DoEquipBP(UEquipmentComponent* ec)
	{
		BaseItem_eventDoEquipBP_Parms Parms;
		Parms.ec=ec;
		ProcessEvent(FindFunctionChecked(NAME_UBaseItem_DoEquipBP),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseItem_DoUnEquipBP = FName(TEXT("DoUnEquipBP"));
	UBaseItem* UBaseItem::DoUnEquipBP(UEquipmentComponent* ec)
	{
		BaseItem_eventDoUnEquipBP_Parms Parms;
		Parms.ec=ec;
		ProcessEvent(FindFunctionChecked(NAME_UBaseItem_DoUnEquipBP),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseItem_DoUse = FName(TEXT("DoUse"));
	void UBaseItem::DoUse(AActor* owner)
	{
		BaseItem_eventDoUse_Parms Parms;
		Parms.owner=owner;
		ProcessEvent(FindFunctionChecked(NAME_UBaseItem_DoUse),&Parms);
	}
	static FName NAME_UBaseItem_OnEquip = FName(TEXT("OnEquip"));
	void UBaseItem::OnEquip(AActor* owner)
	{
		BaseItem_eventOnEquip_Parms Parms;
		Parms.owner=owner;
		ProcessEvent(FindFunctionChecked(NAME_UBaseItem_OnEquip),&Parms);
	}
	static FName NAME_UBaseItem_OnUnequip = FName(TEXT("OnUnequip"));
	void UBaseItem::OnUnequip(AActor* owner)
	{
		BaseItem_eventOnUnequip_Parms Parms;
		Parms.owner=owner;
		ProcessEvent(FindFunctionChecked(NAME_UBaseItem_OnUnequip),&Parms);
	}
	void UBaseItem::StaticRegisterNativesUBaseItem()
	{
		UClass* Class = UBaseItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMutator", &UBaseItem::execAddMutator },
			{ "BeginPlay", &UBaseItem::execBeginPlay },
			{ "DoEquipBP", &UBaseItem::execDoEquipBP },
			{ "DoUnEquipBP", &UBaseItem::execDoUnEquipBP },
			{ "DoUse", &UBaseItem::execDoUse },
			{ "OnEquip", &UBaseItem::execOnEquip },
			{ "OnUnequip", &UBaseItem::execOnUnequip },
			{ "RemoveMutator", &UBaseItem::execRemoveMutator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseItem_AddMutator_Statics
	{
		struct BaseItem_eventAddMutator_Parms
		{
			TSubclassOf<UBaseMutator>  Mutator;
			UBaseMutator* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Mutator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseItem_AddMutator_Statics::NewProp_Mutator = { "Mutator", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventAddMutator_Parms, Mutator), Z_Construct_UClass_UBaseMutator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_AddMutator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventAddMutator_Parms, ReturnValue), Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_AddMutator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_AddMutator_Statics::NewProp_Mutator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_AddMutator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_AddMutator_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_AddMutator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "AddMutator", nullptr, nullptr, sizeof(BaseItem_eventAddMutator_Parms), Z_Construct_UFunction_UBaseItem_AddMutator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddMutator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_AddMutator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddMutator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_AddMutator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_AddMutator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseItem_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ec_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ec;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ec_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ec = { "ec", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoEquipBP_Parms, ec), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ec_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoEquipBP_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoEquipBP", nullptr, nullptr, sizeof(BaseItem_eventDoEquipBP_Parms), Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_DoEquipBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ec_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ec;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ec_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ec = { "ec", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoUnEquipBP_Parms, ec), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ec_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ec_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoUnEquipBP_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoUnEquipBP", nullptr, nullptr, sizeof(BaseItem_eventDoUnEquipBP_Parms), Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_DoUnEquipBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseItem_DoUse_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoUse_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoUse_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoUse_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoUse", nullptr, nullptr, sizeof(BaseItem_eventDoUse_Parms), Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_DoUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_DoUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseItem_OnEquip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_OnEquip_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventOnEquip_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_OnEquip_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnEquip", nullptr, nullptr, sizeof(BaseItem_eventOnEquip_Parms), Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseItem_OnUnequip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventOnUnequip_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnUnequip", nullptr, nullptr, sizeof(BaseItem_eventOnUnequip_Parms), Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_OnUnequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics
	{
		struct BaseItem_eventRemoveMutator_Parms
		{
			UBaseMutator* Mutator;
			UBaseMutator* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mutator;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::NewProp_Mutator = { "Mutator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventRemoveMutator_Parms, Mutator), Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventRemoveMutator_Parms, ReturnValue), Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::NewProp_Mutator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "RemoveMutator", nullptr, nullptr, sizeof(BaseItem_eventRemoveMutator_Parms), Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_RemoveMutator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_RemoveMutator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseItem_NoRegister()
	{
		return UBaseItem::StaticClass();
	}
	struct Z_Construct_UClass_UBaseItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MutatorAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MutatorAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MutatorRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MutatorRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mutators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mutators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mutators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseItem_AddMutator, "AddMutator" }, // 743423668
		{ &Z_Construct_UFunction_UBaseItem_BeginPlay, "BeginPlay" }, // 1758189686
		{ &Z_Construct_UFunction_UBaseItem_DoEquipBP, "DoEquipBP" }, // 1054273722
		{ &Z_Construct_UFunction_UBaseItem_DoUnEquipBP, "DoUnEquipBP" }, // 2104356421
		{ &Z_Construct_UFunction_UBaseItem_DoUse, "DoUse" }, // 1456059878
		{ &Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature, "MutatorChanged__DelegateSignature" }, // 1034025416
		{ &Z_Construct_UFunction_UBaseItem_OnEquip, "OnEquip" }, // 2059142203
		{ &Z_Construct_UFunction_UBaseItem_OnUnequip, "OnUnequip" }, // 108086461
		{ &Z_Construct_UFunction_UBaseItem_RemoveMutator, "RemoveMutator" }, // 1897073093
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseItem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorAdded = { "MutatorAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseItem, MutatorAdded), Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorRemoved = { "MutatorRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseItem, MutatorRemoved), Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseItem, SlotName), METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_guid_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_guid = { "guid", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseItem, guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::NewProp_guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_guid_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_Inner = { "Mutators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseMutator_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators = { "Mutators", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseItem, Mutators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_MutatorRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Mutators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseItem_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseItem, 3502773365);
	template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UBaseItem>()
	{
		return UBaseItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseItem(Z_Construct_UClass_UBaseItem, &UBaseItem::StaticClass, TEXT("/Script/ModularItemManagement"), TEXT("UBaseItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
