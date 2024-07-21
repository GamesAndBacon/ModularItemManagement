// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEquipmentComponent;
class UBaseItem;
class AActor;
#ifdef MODULARITEMMANAGEMENT_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define MODULARITEMMANAGEMENT_BaseItem_generated_h

#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_SPARSE_DATA
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_RPC_WRAPPERS
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_EVENT_PARMS \
	struct BaseItem_eventDoEquipBP_Parms \
	{ \
		UEquipmentComponent* eq; \
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
		UEquipmentComponent* eq; \
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


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseItem(); \
	friend struct Z_Construct_UClass_UBaseItem_Statics; \
public: \
	DECLARE_CLASS(UBaseItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UBaseItem)


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBaseItem(); \
	friend struct Z_Construct_UClass_UBaseItem_Statics; \
public: \
	DECLARE_CLASS(UBaseItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UBaseItem)


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_STANDARD_CONSTRUCTORS \
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


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseItem(UBaseItem&&); \
	NO_API UBaseItem(const UBaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseItem)


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_13_PROLOG \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_EVENT_PARMS


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_SPARSE_DATA \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_RPC_WRAPPERS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_INCLASS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_SPARSE_DATA \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UBaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
