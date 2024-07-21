// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/InventoryInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventoryComponent;
#ifdef MODULARITEMMANAGEMENT_InventoryInterface_generated_h
#error "InventoryInterface.generated.h already included, missing '#pragma once' in InventoryInterface.h"
#endif
#define MODULARITEMMANAGEMENT_InventoryInterface_generated_h

#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryInterface(UInventoryInterface&&); \
	UInventoryInterface(const UInventoryInterface&); \
public: \
	NO_API virtual ~UInventoryInterface();


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInventoryInterface(); \
	friend struct Z_Construct_UClass_UInventoryInterface_Statics; \
public: \
	DECLARE_CLASS(UInventoryInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UInventoryInterface)


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IInventoryInterface() {} \
public: \
	typedef UInventoryInterface UClassType; \
	typedef IInventoryInterface ThisClass; \
	static UInventoryComponent* Execute_GetInventory(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_12_PROLOG
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UInventoryInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_InventoryInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
