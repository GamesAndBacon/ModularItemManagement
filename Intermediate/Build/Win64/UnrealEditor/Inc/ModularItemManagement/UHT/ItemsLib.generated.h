// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemsLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseItem;
class UBaseMutator;
class UObject;
struct FInstancedStruct;
struct FItemRecord;
#ifdef MODULARITEMMANAGEMENT_ItemsLib_generated_h
#error "ItemsLib.generated.h already included, missing '#pragma once' in ItemsLib.h"
#endif
#define MODULARITEMMANAGEMENT_ItemsLib_generated_h

#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemRecord_Statics; \
	MODULARITEMMANAGEMENT_API static class UScriptStruct* StaticStruct();


template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<struct FItemRecord>();

#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSaveMutator); \
	DECLARE_FUNCTION(execLoadItem); \
	DECLARE_FUNCTION(execSaveItem);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemsLib(); \
	friend struct Z_Construct_UClass_UItemsLib_Statics; \
public: \
	DECLARE_CLASS(UItemsLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UItemsLib)


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemsLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemsLib(UItemsLib&&); \
	UItemsLib(const UItemsLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemsLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemsLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemsLib) \
	NO_API virtual ~UItemsLib();


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_33_PROLOG
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_36_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UItemsLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemsLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
