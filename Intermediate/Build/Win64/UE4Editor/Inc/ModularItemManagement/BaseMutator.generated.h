// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseItem;
class AActor;
#ifdef MODULARITEMMANAGEMENT_BaseMutator_generated_h
#error "BaseMutator.generated.h already included, missing '#pragma once' in BaseMutator.h"
#endif
#define MODULARITEMMANAGEMENT_BaseMutator_generated_h

#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_SPARSE_DATA
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_RPC_WRAPPERS \
	virtual void OnUnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnRemovedFromItem_Implementation(UBaseItem* Item); \
	virtual void OnAddedToItem_Implementation(UBaseItem* Item); \
 \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnRemovedFromItem); \
	DECLARE_FUNCTION(execOnAddedToItem);


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnUnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnRemovedFromItem_Implementation(UBaseItem* Item); \
	virtual void OnAddedToItem_Implementation(UBaseItem* Item); \
 \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnRemovedFromItem); \
	DECLARE_FUNCTION(execOnAddedToItem);


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_EVENT_PARMS \
	struct BaseMutator_eventOnAddedToItem_Parms \
	{ \
		UBaseItem* Item; \
	}; \
	struct BaseMutator_eventOnEquip_Parms \
	{ \
		UBaseItem* Item; \
		AActor* owner; \
	}; \
	struct BaseMutator_eventOnRemovedFromItem_Parms \
	{ \
		UBaseItem* Item; \
	}; \
	struct BaseMutator_eventOnUnEquip_Parms \
	{ \
		UBaseItem* Item; \
		AActor* owner; \
	};


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_CALLBACK_WRAPPERS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseMutator(); \
	friend struct Z_Construct_UClass_UBaseMutator_Statics; \
public: \
	DECLARE_CLASS(UBaseMutator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UBaseMutator)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBaseMutator(); \
	friend struct Z_Construct_UClass_UBaseMutator_Statics; \
public: \
	DECLARE_CLASS(UBaseMutator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UBaseMutator)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMutator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMutator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMutator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMutator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseMutator(UBaseMutator&&); \
	NO_API UBaseMutator(const UBaseMutator&); \
public:


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseMutator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseMutator(UBaseMutator&&); \
	NO_API UBaseMutator(const UBaseMutator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseMutator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseMutator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseMutator)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_PRIVATE_PROPERTY_OFFSET
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_13_PROLOG \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_EVENT_PARMS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_RPC_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_INCLASS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_INCLASS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UBaseMutator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseMutator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
