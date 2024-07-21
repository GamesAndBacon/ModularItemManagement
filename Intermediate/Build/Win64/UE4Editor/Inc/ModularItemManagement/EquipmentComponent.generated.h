// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseItem;
#ifdef MODULARITEMMANAGEMENT_EquipmentComponent_generated_h
#error "EquipmentComponent.generated.h already included, missing '#pragma once' in EquipmentComponent.h"
#endif
#define MODULARITEMMANAGEMENT_EquipmentComponent_generated_h

#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_21_DELEGATE \
struct EquipmentComponent_eventEquipmentChanged_Parms \
{ \
	FName slot; \
	UBaseItem* neweq; \
}; \
static inline void FEquipmentChanged_DelegateWrapper(const FMulticastScriptDelegate& EquipmentChanged, FName slot, UBaseItem* neweq) \
{ \
	EquipmentComponent_eventEquipmentChanged_Parms Parms; \
	Parms.slot=slot; \
	Parms.neweq=neweq; \
	EquipmentChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_SPARSE_DATA
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEquippedItem); \
	DECLARE_FUNCTION(execGetEquippedItem);


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEquippedItem); \
	DECLARE_FUNCTION(execGetEquippedItem);


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipmentComponent(); \
	friend struct Z_Construct_UClass_UEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentComponent)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUEquipmentComponent(); \
	friend struct Z_Construct_UClass_UEquipmentComponent_Statics; \
public: \
	DECLARE_CLASS(UEquipmentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentComponent)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentComponent(UEquipmentComponent&&); \
	NO_API UEquipmentComponent(const UEquipmentComponent&); \
public:


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentComponent(UEquipmentComponent&&); \
	NO_API UEquipmentComponent(const UEquipmentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentComponent)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EquippedItems() { return STRUCT_OFFSET(UEquipmentComponent, EquippedItems); }


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_11_PROLOG
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_RPC_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_INCLASS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_INCLASS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UEquipmentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_EquipmentComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
