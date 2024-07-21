// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/EquipmentComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentComponent() {}
// Cross Module References
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UBaseItem_NoRegister();
	MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics
	{
		struct EquipmentComponent_eventEquipmentChanged_Parms
		{
			FName slot;
			UBaseItem* neweq;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_neweq;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentComponent_eventEquipmentChanged_Parms, slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::NewProp_neweq = { "neweq", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentComponent_eventEquipmentChanged_Parms, neweq), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::NewProp_neweq,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "EquipmentChanged__DelegateSignature", nullptr, nullptr, sizeof(EquipmentComponent_eventEquipmentChanged_Parms), Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEquipmentComponent::execSetEquippedItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_slot);
		P_GET_OBJECT(UBaseItem,Z_Param_newitem);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseItem**)Z_Param__Result=P_THIS->SetEquippedItem(Z_Param_slot,Z_Param_newitem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEquipmentComponent::execGetEquippedItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_slot);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseItem**)Z_Param__Result=P_THIS->GetEquippedItem(Z_Param_slot);
		P_NATIVE_END;
	}
	void UEquipmentComponent::StaticRegisterNativesUEquipmentComponent()
	{
		UClass* Class = UEquipmentComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEquippedItem", &UEquipmentComponent::execGetEquippedItem },
			{ "SetEquippedItem", &UEquipmentComponent::execSetEquippedItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics
	{
		struct EquipmentComponent_eventGetEquippedItem_Parms
		{
			FName slot;
			UBaseItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItem_Parms, slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentComponent_eventGetEquippedItem_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "GetEquippedItem", nullptr, nullptr, sizeof(EquipmentComponent_eventGetEquippedItem_Parms), Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics
	{
		struct EquipmentComponent_eventSetEquippedItem_Parms
		{
			FName slot;
			UBaseItem* newitem;
			UBaseItem* ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_slot;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newitem;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_slot = { "slot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentComponent_eventSetEquippedItem_Parms, slot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_newitem = { "newitem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentComponent_eventSetEquippedItem_Parms, newitem), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EquipmentComponent_eventSetEquippedItem_Parms, ReturnValue), Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_slot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_newitem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Items" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEquipmentComponent, nullptr, "SetEquippedItem", nullptr, nullptr, sizeof(EquipmentComponent_eventSetEquippedItem_Parms), Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEquipmentComponent_NoRegister()
	{
		return UEquipmentComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEquipmentComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EquippedItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemUnequipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ItemUnequipped;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemSlots;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEquipmentComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEquipmentComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature, "EquipmentChanged__DelegateSignature" }, // 1386383869
		{ &Z_Construct_UFunction_UEquipmentComponent_GetEquippedItem, "GetEquippedItem" }, // 2260821479
		{ &Z_Construct_UFunction_UEquipmentComponent_SetEquippedItem, "SetEquippedItem" }, // 1809721142
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Items" },
		{ "IncludePath", "EquipmentComponent.h" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Inner = { "EquippedItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems = { "EquippedItems", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentComponent, EquippedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemEquipped = { "ItemEquipped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentComponent, ItemEquipped), Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemUnequipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemUnequipped = { "ItemUnequipped", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentComponent, ItemUnequipped), Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemUnequipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemUnequipped_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots_Inner = { "ItemSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/EquipmentComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots = { "ItemSlots", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEquipmentComponent, ItemSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_EquippedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemUnequipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEquipmentComponent_Statics::NewProp_ItemSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEquipmentComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEquipmentComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEquipmentComponent_Statics::ClassParams = {
		&UEquipmentComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEquipmentComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEquipmentComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEquipmentComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEquipmentComponent, 1237170809);
	template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UEquipmentComponent>()
	{
		return UEquipmentComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEquipmentComponent(Z_Construct_UClass_UEquipmentComponent, &UEquipmentComponent::StaticClass, TEXT("/Script/ModularItemManagement"), TEXT("UEquipmentComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEquipmentComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
