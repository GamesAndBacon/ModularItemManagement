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
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UItemModule_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics
	{
		struct BaseItem_eventModuleChanged_Parms
		{
			UItemModule* slot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventModuleChanged_Parms, slot), Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::NewProp_slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "ModuleChanged__DelegateSignature", nullptr, nullptr, sizeof(BaseItem_eventModuleChanged_Parms), Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature_Statics::FuncParams);
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
	DEFINE_FUNCTION(UBaseItem::execRemoveModule)
	{
		P_GET_OBJECT(UItemModule,Z_Param_Module);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemModule**)Z_Param__Result=P_THIS->RemoveModule(Z_Param_Module);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseItem::execAddModule)
	{
		P_GET_OBJECT(UClass,Z_Param_Module);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UItemModule**)Z_Param__Result=P_THIS->AddModule(Z_Param_Module);
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
			{ "AddModule", &UBaseItem::execAddModule },
			{ "BeginPlay", &UBaseItem::execBeginPlay },
			{ "DoEquipBP", &UBaseItem::execDoEquipBP },
			{ "DoUnEquipBP", &UBaseItem::execDoUnEquipBP },
			{ "DoUse", &UBaseItem::execDoUse },
			{ "OnEquip", &UBaseItem::execOnEquip },
			{ "OnUnequip", &UBaseItem::execOnUnequip },
			{ "RemoveModule", &UBaseItem::execRemoveModule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseItem_AddModule_Statics
	{
		struct BaseItem_eventAddModule_Parms
		{
			TSubclassOf<UItemModule>  Module;
			UItemModule* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Module;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBaseItem_AddModule_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventAddModule_Parms, Module), Z_Construct_UClass_UItemModule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_AddModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventAddModule_Parms, ReturnValue), Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_AddModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_AddModule_Statics::NewProp_Module,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_AddModule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_AddModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_AddModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "AddModule", nullptr, nullptr, sizeof(BaseItem_eventAddModule_Parms), Z_Construct_UFunction_UBaseItem_AddModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_AddModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_AddModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_AddModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_AddModule_Statics::FuncParams);
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
	struct Z_Construct_UFunction_UBaseItem_RemoveModule_Statics
	{
		struct BaseItem_eventRemoveModule_Parms
		{
			UItemModule* Module;
			UItemModule* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Module;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::NewProp_Module = { "Module", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventRemoveModule_Parms, Module), Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventRemoveModule_Parms, ReturnValue), Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::NewProp_Module,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::Function_MetaDataParams[] = {
		{ "Category", "ModularItems" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "RemoveModule", nullptr, nullptr, sizeof(BaseItem_eventRemoveModule_Parms), Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_RemoveModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_RemoveModule_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ModuleAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleRemoved_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ModuleRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_guid;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Modules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Modules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseItem_AddModule, "AddModule" }, // 743423668
		{ &Z_Construct_UFunction_UBaseItem_BeginPlay, "BeginPlay" }, // 1758189686
		{ &Z_Construct_UFunction_UBaseItem_DoEquipBP, "DoEquipBP" }, // 1054273722
		{ &Z_Construct_UFunction_UBaseItem_DoUnEquipBP, "DoUnEquipBP" }, // 2104356421
		{ &Z_Construct_UFunction_UBaseItem_DoUse, "DoUse" }, // 1456059878
		{ &Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature, "ModuleChanged__DelegateSignature" }, // 1034025416
		{ &Z_Construct_UFunction_UBaseItem_OnEquip, "OnEquip" }, // 2059142203
		{ &Z_Construct_UFunction_UBaseItem_OnUnequip, "OnUnequip" }, // 108086461
		{ &Z_Construct_UFunction_UBaseItem_RemoveModule, "RemoveModule" }, // 1897073093
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleAdded = { "ModuleAdded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseItem, ModuleAdded), Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleAdded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleRemoved_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleRemoved = { "ModuleRemoved", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseItem, ModuleRemoved), Z_Construct_UDelegateFunction_UBaseItem_ModuleChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleRemoved_MetaData)) };
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItemModule_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseItem_Statics::NewProp_Modules_MetaData[] = {
		{ "Category", "BaseItem" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseItem_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseItem, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseItem_Statics::NewProp_Modules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseItem_Statics::NewProp_Modules_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_ModuleRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_guid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Modules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseItem_Statics::NewProp_Modules,
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
