// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseItem;
#ifdef MODULARITEMMANAGEMENT_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define MODULARITEMMANAGEMENT_InventoryComponent_generated_h

#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_24_DELEGATE \
static inline void FInventoryDirty_DelegateWrapper(const FMulticastScriptDelegate& InventoryDirty) \
{ \
	InventoryDirty.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_23_DELEGATE \
struct InventoryComponent_eventInventoryChanged_Parms \
{ \
	UBaseItem* newitem; \
}; \
static inline void FInventoryChanged_DelegateWrapper(const FMulticastScriptDelegate& InventoryChanged, UBaseItem* newitem) \
{ \
	InventoryComponent_eventInventoryChanged_Parms Parms; \
	Parms.newitem=newitem; \
	InventoryChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_SPARSE_DATA
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDoUnEquip); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDoUnEquip); \
	DECLARE_FUNCTION(execEquipItem); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem);


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_10_PROLOG
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_SPARSE_DATA \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_RPC_WRAPPERS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_INCLASS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_SPARSE_DATA \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
