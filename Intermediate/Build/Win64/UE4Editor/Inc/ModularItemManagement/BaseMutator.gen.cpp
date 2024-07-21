// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/BaseMutator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseMutator() {}
// Cross Module References
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseMutator_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseMutator();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseMutator::execOnUnEquip)
	{
		P_GET_OBJECT(UBaseItem,Z_Param_Item);
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUnEquip_Implementation(Z_Param_Item,Z_Param_owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseMutator::execOnEquip)
	{
		P_GET_OBJECT(UBaseItem,Z_Param_Item);
		P_GET_OBJECT(AActor,Z_Param_owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEquip_Implementation(Z_Param_Item,Z_Param_owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseMutator::execOnRemovedFromItem)
	{
		P_GET_OBJECT(UBaseItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemovedFromItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBaseMutator::execOnAddedToItem)
	{
		P_GET_OBJECT(UBaseItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddedToItem_Implementation(Z_Param_Item);
		P_NATIVE_END;
	}
	static FName NAME_UBaseMutator_OnAddedToItem = FName(TEXT("OnAddedToItem"));
	void UBaseMutator::OnAddedToItem(UBaseItem* Item)
	{
		BaseMutator_eventOnAddedToItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UBaseMutator_OnAddedToItem),&Parms);
	}
	static FName NAME_UBaseMutator_OnEquip = FName(TEXT("OnEquip"));
	void UBaseMutator::OnEquip(UBaseItem* Item, AActor* owner)
	{
		BaseMutator_eventOnEquip_Parms Parms;
		Parms.Item=Item;
		Parms.owner=owner;
		ProcessEvent(FindFunctionChecked(NAME_UBaseMutator_OnEquip),&Parms);
	}
	static FName NAME_UBaseMutator_OnRemovedFromItem = FName(TEXT("OnRemovedFromItem"));
	void UBaseMutator::OnRemovedFromItem(UBaseItem* Item)
	{
		BaseMutator_eventOnRemovedFromItem_Parms Parms;
		Parms.Item=Item;
		ProcessEvent(FindFunctionChecked(NAME_UBaseMutator_OnRemovedFromItem),&Parms);
	}
	static FName NAME_UBaseMutator_OnUnEquip = FName(TEXT("OnUnEquip"));
	void UBaseMutator::OnUnEquip(UBaseItem* Item, AActor* owner)
	{
		BaseMutator_eventOnUnEquip_Parms Parms;
		Parms.Item=Item;
		Parms.owner=owner;
		ProcessEvent(FindFunctionChecked(NAME_UBaseMutator_OnUnEquip),&Parms);
	}
	void UBaseMutator::StaticRegisterNativesUBaseMutator()
	{
		UClass* Class = UBaseMutator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAddedToItem", &UBaseMutator::execOnAddedToItem },
			{ "OnEquip", &UBaseMutator::execOnEquip },
			{ "OnRemovedFromItem", &UBaseMutator::execOnRemovedFromItem },
			{ "OnUnEquip", &UBaseMutator::execOnUnEquip },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseMutator_eventOnAddedToItem_Parms, Item), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseMutator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMutator, nullptr, "OnAddedToItem", nullptr, nullptr, sizeof(BaseMutator_eventOnAddedToItem_Parms), Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseMutator_OnAddedToItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseMutator_OnAddedToItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseMutator_OnEquip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseMutator_eventOnEquip_Parms, Item), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseMutator_eventOnEquip_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseMutator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMutator, nullptr, "OnEquip", nullptr, nullptr, sizeof(BaseMutator_eventOnEquip_Parms), Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseMutator_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseMutator_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseMutator_eventOnRemovedFromItem_Parms, Item), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseMutator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMutator, nullptr, "OnRemovedFromItem", nullptr, nullptr, sizeof(BaseMutator_eventOnRemovedFromItem_Parms), Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseMutator_eventOnUnEquip_Parms, Item), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::NewProp_owner = { "owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseMutator_eventOnUnEquip_Parms, owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::NewProp_Item,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::NewProp_owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseMutator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseMutator, nullptr, "OnUnEquip", nullptr, nullptr, sizeof(BaseMutator_eventOnUnEquip_Parms), Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseMutator_OnUnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseMutator_OnUnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseMutator_NoRegister()
	{
		return UBaseMutator::StaticClass();
	}
	struct Z_Construct_UClass_UBaseMutator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseMutator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseMutator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseMutator_OnAddedToItem, "OnAddedToItem" }, // 2790318287
		{ &Z_Construct_UFunction_UBaseMutator_OnEquip, "OnEquip" }, // 1281984697
		{ &Z_Construct_UFunction_UBaseMutator_OnRemovedFromItem, "OnRemovedFromItem" }, // 2070280637
		{ &Z_Construct_UFunction_UBaseMutator_OnUnEquip, "OnUnEquip" }, // 380127809
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseMutator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BaseMutator.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BaseMutator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseMutator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseMutator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseMutator_Statics::ClassParams = {
		&UBaseMutator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseMutator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseMutator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseMutator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseMutator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseMutator, 1560847842);
	template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UBaseMutator>()
	{
		return UBaseMutator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseMutator(Z_Construct_UClass_UBaseMutator, &UBaseMutator::StaticClass, TEXT("/Script/ModularItemManagement"), TEXT("UBaseMutator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseMutator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
