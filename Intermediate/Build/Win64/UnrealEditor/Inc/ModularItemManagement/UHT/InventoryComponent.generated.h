// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItem;
#ifdef MODULARITEMMANAGEMENT_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define MODULARITEMMANAGEMENT_InventoryComponent_generated_h

#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_31_DELEGATE \
static void FInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& InventoryChanged, UItem* NewItem, int32 Index);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_32_DELEGATE \
static void FInventoryMoved_DelegateWrapper(const FMulticastScriptDelegate& InventoryMoved, UItem* Item1, int32 Index1, UItem* Item2, int32 Index2);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMoveIndex); \
	DECLARE_FUNCTION(execGetItemAt); \
	DECLARE_FUNCTION(execGetInventory); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_16_PROLOG
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
