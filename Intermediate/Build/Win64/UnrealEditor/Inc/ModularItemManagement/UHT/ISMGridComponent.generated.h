// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Grid/ISMGridComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FInstanceMeshData;
#ifdef MODULARITEMMANAGEMENT_ISMGridComponent_generated_h
#error "ISMGridComponent.generated.h already included, missing '#pragma once' in ISMGridComponent.h"
#endif
#define MODULARITEMMANAGEMENT_ISMGridComponent_generated_h

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridCellInstanceData_Statics; \
	MODULARITEMMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<struct FGridCellInstanceData>();

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_33_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics; \
	MODULARITEMMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<struct FGridCellInstanceDataArray>();

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLocationRange_Statics; \
	MODULARITEMMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<struct FLocationRange>();

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRotationRange_Statics; \
	MODULARITEMMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<struct FRotationRange>();

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScaleRange_Statics; \
	MODULARITEMMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<struct FScaleRange>();

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstanceMeshData_Statics; \
	MODULARITEMMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<struct FInstanceMeshData>();

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics; \
	MODULARITEMMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<struct FInstanceMeshDataArray>();

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAllInstances); \
	DECLARE_FUNCTION(execRemoveInstancesByGUID); \
	DECLARE_FUNCTION(execAddInstances);


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_138_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISMGridComponent(); \
	friend struct Z_Construct_UClass_UISMGridComponent_Statics; \
public: \
	DECLARE_CLASS(UISMGridComponent, UGridComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UISMGridComponent)


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_138_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UISMGridComponent(UISMGridComponent&&); \
	UISMGridComponent(const UISMGridComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISMGridComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISMGridComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UISMGridComponent) \
	NO_API virtual ~UISMGridComponent();


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_135_PROLOG
#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_138_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_138_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_138_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_138_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UISMGridComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
