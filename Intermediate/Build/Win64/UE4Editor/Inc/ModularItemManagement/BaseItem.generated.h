// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemModule;
class UBaseItem;
class UEquipmentComponent;
class AActor;
#ifdef MODULARITEMMANAGEMENT_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define MODULARITEMMANAGEMENT_BaseItem_generated_h

#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_19_DELEGATE \
struct BaseItem_eventModuleChanged_Parms \
{ \
	UItemModule* slot; \
}; \
static inline void FModuleChanged_DelegateWrapper(const FMulticastScriptDelegate& ModuleChanged, UItemModule* slot) \
{ \
	BaseItem_eventModuleChanged_Parms Parms; \
	Parms.slot=slot; \
	ModuleChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_SPARSE_DATA
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_RPC_WRAPPERS \
	virtual void BeginPlay_Implementation(); \
	virtual UBaseItem* DoEquipBP_Implementation(UEquipmentComponent* ec); \
	virtual UBaseItem* DoUnEquipBP_Implementation(UEquipmentComponent* ec); \
	virtual void OnUnequip_Implementation(AActor* owner); \
	virtual void OnEquip_Implementation(AActor* owner); \
	virtual void DoUse_Implementation(AActor* owner); \
 \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execDoEquipBP); \
	DECLARE_FUNCTION(execDoUnEquipBP); \
	DECLARE_FUNCTION(execRemoveModule); \
	DECLARE_FUNCTION(execAddModule); \
	DECLARE_FUNCTION(execOnUnequip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execDoUse);


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginPlay_Implementation(); \
	virtual UBaseItem* DoEquipBP_Implementation(UEquipmentComponent* ec); \
	virtual UBaseItem* DoUnEquipBP_Implementation(UEquipmentComponent* ec); \
	virtual void OnUnequip_Implementation(AActor* owner); \
	virtual void OnEquip_Implementation(AActor* owner); \
	virtual void DoUse_Implementation(AActor* owner); \
 \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execDoEquipBP); \
	DECLARE_FUNCTION(execDoUnEquipBP); \
	DECLARE_FUNCTION(execRemoveModule); \
	DECLARE_FUNCTION(execAddModule); \
	DECLARE_FUNCTION(execOnUnequip); \
	DECLARE_FUNCTION(execOnEquip); \
	DECLARE_FUNCTION(execDoUse);


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_EVENT_PARMS \
	struct BaseItem_eventDoEquipBP_Parms \
	{ \
		UEquipmentComponent* ec; \
		UBaseItem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseItem_eventDoEquipBP_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct BaseItem_eventDoUnEquipBP_Parms \
	{ \
		UEquipmentComponent* ec; \
		UBaseItem* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		BaseItem_eventDoUnEquipBP_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct BaseItem_eventDoUse_Parms \
	{ \
		AActor* owner; \
	}; \
	struct BaseItem_eventOnEquip_Parms \
	{ \
		AActor* owner; \
	}; \
	struct BaseItem_eventOnUnequip_Parms \
	{ \
		AActor* owner; \
	};


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_CALLBACK_WRAPPERS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseItem(); \
	friend struct Z_Construct_UClass_UBaseItem_Statics; \
public: \
	DECLARE_CLASS(UBaseItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UBaseItem)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBaseItem(); \
	friend struct Z_Construct_UClass_UBaseItem_Statics; \
public: \
	DECLARE_CLASS(UBaseItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UBaseItem)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseItem(UBaseItem&&); \
	NO_API UBaseItem(const UBaseItem&); \
public:


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseItem(UBaseItem&&); \
	NO_API UBaseItem(const UBaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseItem)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_PRIVATE_PROPERTY_OFFSET
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_13_PROLOG \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_EVENT_PARMS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_RPC_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_INCLASS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_INCLASS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UBaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
