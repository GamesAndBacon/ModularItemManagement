// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEquipmentComponent;
#ifdef MODULARITEMMANAGEMENT_EquipmentInterface_generated_h
#error "EquipmentInterface.generated.h already included, missing '#pragma once' in EquipmentInterface.h"
#endif
#define MODULARITEMMANAGEMENT_EquipmentInterface_generated_h

#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_SPARSE_DATA
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_RPC_WRAPPERS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_EVENT_PARMS \
	struct EquipmentInterface_eventGetEquipment_Parms \
	{ \
		UEquipmentComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EquipmentInterface_eventGetEquipment_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_CALLBACK_WRAPPERS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentInterface(UEquipmentInterface&&); \
	NO_API UEquipmentInterface(const UEquipmentInterface&); \
public:


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipmentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEquipmentInterface(UEquipmentInterface&&); \
	NO_API UEquipmentInterface(const UEquipmentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipmentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentInterface)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquipmentInterface(); \
	friend struct Z_Construct_UClass_UEquipmentInterface_Statics; \
public: \
	DECLARE_CLASS(UEquipmentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UEquipmentInterface)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_GENERATED_UINTERFACE_BODY() \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_GENERATED_UINTERFACE_BODY() \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquipmentInterface() {} \
public: \
	typedef UEquipmentInterface UClassType; \
	typedef IEquipmentInterface ThisClass; \
	static UEquipmentComponent* Execute_GetEquipment(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IEquipmentInterface() {} \
public: \
	typedef UEquipmentInterface UClassType; \
	typedef IEquipmentInterface ThisClass; \
	static UEquipmentComponent* Execute_GetEquipment(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_12_PROLOG \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_EVENT_PARMS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_RPC_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UEquipmentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Interfaces_EquipmentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
