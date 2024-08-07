// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grid/GridModifierComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGridManager;
#ifdef MODULARITEMMANAGEMENT_GridModifierComponent_generated_h
#error "GridModifierComponent.generated.h already included, missing '#pragma once' in GridModifierComponent.h"
#endif
#define MODULARITEMMANAGEMENT_GridModifierComponent_generated_h

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_8_DELEGATE \
MODULARITEMMANAGEMENT_API void FGridModifierEvent_DelegateWrapper(const FMulticastScriptDelegate& GridModifierEvent, TSet<FVector2D> const& Cells);


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsCellValid); \
	DECLARE_FUNCTION(execCalculateAffectedCells); \
	DECLARE_FUNCTION(execSetOverrideGrid); \
	DECLARE_FUNCTION(execGetOwningGrid); \
	DECLARE_FUNCTION(execGetInvalidCells); \
	DECLARE_FUNCTION(execGetValidCells); \
	DECLARE_FUNCTION(execGetCells); \
	DECLARE_FUNCTION(execUpdateModifier);


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridModifierComponent(); \
	friend struct Z_Construct_UClass_UGridModifierComponent_Statics; \
public: \
	DECLARE_CLASS(UGridModifierComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UGridModifierComponent)


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridModifierComponent(UGridModifierComponent&&); \
	UGridModifierComponent(const UGridModifierComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridModifierComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridModifierComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridModifierComponent) \
	NO_API virtual ~UGridModifierComponent();


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_10_PROLOG
#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UGridModifierComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_GridModifierComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
