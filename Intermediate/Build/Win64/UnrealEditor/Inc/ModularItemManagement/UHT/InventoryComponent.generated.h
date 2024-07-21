// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBaseItem;
#ifdef MODULARITEMMANAGEMENT_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define MODULARITEMMANAGEMENT_InventoryComponent_generated_h

#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_27_DELEGATE \
static void FInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& InventoryChanged, UBaseItem* NewItem, int32 Index);


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnEquipItem); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_12_PROLOG
#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS