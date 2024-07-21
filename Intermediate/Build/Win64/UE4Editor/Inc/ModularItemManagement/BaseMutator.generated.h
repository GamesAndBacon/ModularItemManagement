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
#ifdef MODULARITEMMANAGEMENT_BaseModule_generated_h
#error "BaseModule.generated.h already included, missing '#pragma once' in BaseModule.h"
#endif
#define MODULARITEMMANAGEMENT_BaseModule_generated_h

#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_SPARSE_DATA
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_RPC_WRAPPERS \
	virtual void OnUnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnRemovedFromItem_Implementation(UBaseItem* Item); \
	virtual void OnAddedToItem_Implementation(UBaseItem* Item); \
 \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnRemovedFromItem); \
	DECLARE_FUNCTION(execOnAddedToItem);


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnUnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnEquip_Implementation(UBaseItem* Item, AActor* owner); \
	virtual void OnRemovedFromItem_Implementation(UBaseItem* Item); \
	virtual void OnAddedToItem_Implementation(UBaseItem* Item); \
 \
	DECLARE_FUNCTION(execOnUnEquip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execOnRemovedFromItem); \
	DECLARE_FUNCTION(execOnAddedToItem);


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_EVENT_PARMS \
	struct BaseModule_eventOnAddedToItem_Parms \
	{ \
		UBaseItem* Item; \
	}; \
	struct BaseModule_eventOnEquip_Parms \
	{ \
		UBaseItem* Item; \
		AActor* owner; \
	}; \
	struct BaseModule_eventOnRemovedFromItem_Parms \
	{ \
		UBaseItem* Item; \
	}; \
	struct BaseModule_eventOnUnEquip_Parms \
	{ \
		UBaseItem* Item; \
		AActor* owner; \
	};


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_CALLBACK_WRAPPERS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemModule(); \
	friend struct Z_Construct_UClass_UItemModule_Statics; \
public: \
	DECLARE_CLASS(UItemModule, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UItemModule)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUItemModule(); \
	friend struct Z_Construct_UClass_UItemModule_Statics; \
public: \
	DECLARE_CLASS(UItemModule, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UItemModule)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemModule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemModule) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemModule); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemModule(UItemModule&&); \
	NO_API UItemModule(const UItemModule&); \
public:


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemModule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItemModule(UItemModule&&); \
	NO_API UItemModule(const UItemModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemModule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemModule)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_PRIVATE_PROPERTY_OFFSET
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_13_PROLOG \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_EVENT_PARMS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_RPC_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_INCLASS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_INCLASS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UItemModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseModule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
