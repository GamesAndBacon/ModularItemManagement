// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularItemManagement_init() {}
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_InventoryChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_InventoryDirty__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ModularItemManagement()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UInventoryComponent_InventoryChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInventoryComponent_InventoryDirty__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModularItemManagement",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9DA86E63,
				0x44C4D486,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif