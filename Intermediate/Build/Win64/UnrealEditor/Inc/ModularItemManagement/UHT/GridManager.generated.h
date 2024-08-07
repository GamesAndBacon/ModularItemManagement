// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grid/GridManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class UItem;
class UItem;
class UItemDefinition;
#ifdef MODULARITEMMANAGEMENT_GridManager_generated_h
#error "GridManager.generated.h already included, missing '#pragma once' in GridManager.h"
#endif
#define MODULARITEMMANAGEMENT_GridManager_generated_h

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_11_DELEGATE \
MODULARITEMMANAGEMENT_API void FOnItemAddedToGrid_DelegateWrapper(const FMulticastScriptDelegate& OnItemAddedToGrid, UItem* Item, FVector2D Position);


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_12_DELEGATE \
MODULARITEMMANAGEMENT_API void FOnGridInitialized_DelegateWrapper(const FMulticastScriptDelegate& OnGridInitialized);


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemAddedToGrid); \
	DECLARE_FUNCTION(execHashPosition); \
	DECLARE_FUNCTION(execSelectItemDefinitionForNextCell); \
	DECLARE_FUNCTION(execGetGrid); \
	DECLARE_FUNCTION(execGetCellCenter); \
	DECLARE_FUNCTION(execGetCellFromWorldLocation); \
	DECLARE_FUNCTION(execGetAdjacentItems); \
	DECLARE_FUNCTION(execGetItemInCell); \
	DECLARE_FUNCTION(execReplaceItemOnGrid); \
	DECLARE_FUNCTION(execRemoveItemFromGrid); \
	DECLARE_FUNCTION(execAddItemToGrid); \
	DECLARE_FUNCTION(execInitializeGrid);


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGridManager(); \
	friend struct Z_Construct_UClass_AGridManager_Statics; \
public: \
	DECLARE_CLASS(AGridManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(AGridManager)


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGridManager(AGridManager&&); \
	AGridManager(const AGridManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGridManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGridManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGridManager) \
	NO_API virtual ~AGridManager();


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_14_PROLOG
#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class AGridManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
