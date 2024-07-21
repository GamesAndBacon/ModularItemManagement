// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseMutator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBaseItem;
#ifdef MODULARITEMMANAGEMENT_BaseMutator_generated_h
#error "BaseMutator.generated.h already included, missing '#pragma once' in BaseMutator.h"
#endif
#define MODULARITEMMANAGEMENT_BaseMutator_generated_h

#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnUnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnRemovedFromItem_Implementation(UBaseItem* Item); \
	virtual void OnAddedToItem_Implementation(UBaseItem* Item); \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnRemovedFromItem); \
	DECLARE_FUNCTION(execOnAddedToItem);


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMutator(); \
	friend struct Z_Construct_UClass_UBaseMutator_Statics; \
public: \
	DECLARE_CLASS(UBaseMutator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UBaseMutator)


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMutator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseMutator(UBaseMutator&&); \
	UBaseMutator(const UBaseMutator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMutator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMutator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMutator) \
	NO_API virtual ~UBaseMutator();


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_14_PROLOG
#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UBaseMutator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
