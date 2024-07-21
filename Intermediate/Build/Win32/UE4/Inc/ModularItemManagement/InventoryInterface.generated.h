// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryComponent;
#ifdef MODULARITEMMANAGEMENT_InventoryInterface_generated_h
#error "InventoryInterface.generated.h already included, missing '#pragma once' in InventoryInterface.h"
#endif
#define MODULARITEMMANAGEMENT_InventoryInterface_generated_h

#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_SPARSE_DATA
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_RPC_WRAPPERS
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_EVENT_PARMS \
	struct InventoryInterface_eventGetInventory_Parms \
	{ \
		UInventoryComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		InventoryInterface_eventGetInventory_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_CALLBACK_WRAPPERS
#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryInterface(UInventoryInterface&&); \
	NO_API UInventoryInterface(const UInventoryInterface&); \
public:


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryInterface(UInventoryInterface&&); \
	NO_API UInventoryInterface(const UInventoryInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryInterface)


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryInterface(); \
	friend struct Z_Construct_UClass_UInventoryInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UInventoryInterface)


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_GENERATED_UINTERFACE_BODY() \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInventoryInterface() {} \
public: \
	typedef UInventoryInterface UClassType; \
	typedef IInventoryInterface ThisClass; \
	static UInventoryComponent* Execute_GetInventory(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IInventoryInterface() {} \
public: \
	typedef UInventoryInterface UClassType; \
	typedef IInventoryInterface ThisClass; \
	static UInventoryComponent* Execute_GetInventory(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_12_PROLOG \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_EVENT_PARMS


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_SPARSE_DATA \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_RPC_WRAPPERS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_SPARSE_DATA \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_CALLBACK_WRAPPERS \
	HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UInventoryInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
