// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularItemManagement_init() {}
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_InventoryChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature();
	MODULARITEMMANAGEMENT_API UFunction* Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModularItemManagement;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModularItemManagement()
	{
		if (!Z_Registration_Info_UPackage__Script_ModularItemManagement.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularItemManagement_GridModifierEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularItemManagement_OnGridInitialized__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularItemManagement_OnItemAddedToGrid__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ModularItemManagement_OnModuleChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UInventoryComponent_InventoryChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UItem_ModuleChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UItem_StackSizeChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModularItemManagement",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x01CC3B0D,
				0xC75FED57,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModularItemManagement.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModularItemManagement.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModularItemManagement(Z_Construct_UPackage__Script_ModularItemManagement, TEXT("/Script/ModularItemManagement"), Z_Registration_Info_UPackage__Script_ModularItemManagement, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x01CC3B0D, 0xC75FED57));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
