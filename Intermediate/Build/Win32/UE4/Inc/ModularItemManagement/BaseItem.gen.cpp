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
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UBaseItem_BeginPlay = FName(TEXT("BeginPlay"));
	void UBaseItem::BeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UBaseItem_BeginPlay),NULL);
	}
	static FName NAME_UBaseItem_DoEquipBP = FName(TEXT("DoEquipBP"));
	UBaseItem* UBaseItem::DoEquipBP(UEquipmentComponent* eq)
	{
		BaseItem_eventDoEquipBP_Parms Parms;
		Parms.eq=eq;
		ProcessEvent(FindFunctionChecked(NAME_UBaseItem_DoEquipBP),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UBaseItem_DoUnEquipBP = FName(TEXT("DoUnEquipBP"));
	UBaseItem* UBaseItem::DoUnEquipBP(UEquipmentComponent* eq)
	{
		BaseItem_eventDoUnEquipBP_Parms Parms;
		Parms.eq=eq;
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
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_BeginPlay_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eq_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_eq;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_eq_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_eq = { "eq", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoEquipBP_Parms, eq), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_eq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_eq_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoEquipBP_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_eq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoEquipBP", nullptr, nullptr, sizeof(BaseItem_eventDoEquipBP_Parms), Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoEquipBP_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_eq_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_eq;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_eq_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_eq = { "eq", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoUnEquipBP_Parms, eq), Z_Construct_UClass_UEquipmentComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_eq_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_eq_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseItem_eventDoUnEquipBP_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_eq,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoUnEquipBP", nullptr, nullptr, sizeof(BaseItem_eventDoUnEquipBP_Parms), Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUnEquipBP_Statics::Function_MetaDataParams)) };
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
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_DoUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "DoUse", nullptr, nullptr, sizeof(BaseItem_eventDoUse_Parms), Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_DoUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_DoUse_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnEquip", nullptr, nullptr, sizeof(BaseItem_eventOnEquip_Parms), Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnEquip_Statics::Function_MetaDataParams)) };
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
		{ "ModuleRelativePath", "Public/BaseItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseItem, nullptr, "OnUnequip", nullptr, nullptr, sizeof(BaseItem_eventOnUnequip_Parms), Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseItem_OnUnequip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseItem_OnUnequip_Statics::FuncParams);
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseItem_BeginPlay, "BeginPlay" }, // 3280713153
		{ &Z_Construct_UFunction_UBaseItem_DoEquipBP, "DoEquipBP" }, // 3631223614
		{ &Z_Construct_UFunction_UBaseItem_DoUnEquipBP, "DoUnEquipBP" }, // 2876080407
		{ &Z_Construct_UFunction_UBaseItem_DoUse, "DoUse" }, // 237835616
		{ &Z_Construct_UFunction_UBaseItem_OnEquip, "OnEquip" }, // 138506982
		{ &Z_Construct_UFunction_UBaseItem_OnUnequip, "OnUnequip" }, // 79797571
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseItem_Statics::ClassParams = {
		&UBaseItem::StaticClass,
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
	IMPLEMENT_CLASS(UBaseItem, 3677002534);
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
