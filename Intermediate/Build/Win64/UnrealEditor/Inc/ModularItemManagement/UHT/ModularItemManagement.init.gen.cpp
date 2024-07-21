// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularItemManagement_init() {}
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_InventoryChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModularItemManagement;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModularItemManagement()
	{
		if (!Z_Registration_Info_UPackage__Script_ModularItemManagement.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UBaseItem_MutatorChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UBaseItem_StackSizeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UEquipmentComponent_EquipmentChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInventoryComponent_InventoryChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModularItemManagement",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA78FAA9D,
				0x272E8D93,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModularItemManagement.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModularItemManagement.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModularItemManagement(Z_Construct_UPackage__Script_ModularItemManagement, TEXT("/Script/ModularItemManagement"), Z_Registration_Info_UPackage__Script_ModularItemManagement, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA78FAA9D, 0x272E8D93));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
