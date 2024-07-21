// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef MODULARITEMMANAGEMENT_Customizer_generated_h
#error "Customizer.generated.h already included, missing '#pragma once' in Customizer.h"
#endif
#define MODULARITEMMANAGEMENT_Customizer_generated_h

#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_SPARSE_DATA
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_RPC_WRAPPERS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_EVENT_PARMS \
	struct Customizer_eventCustomize_Parms \
	{ \
		AActor* owner; \
		FName Event; \
		UObject* payload; \
	};


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_CALLBACK_WRAPPERS
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizer(); \
	friend struct Z_Construct_UClass_UCustomizer_Statics; \
public: \
	DECLARE_CLASS(UCustomizer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UCustomizer)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCustomizer(); \
	friend struct Z_Construct_UClass_UCustomizer_Statics; \
public: \
	DECLARE_CLASS(UCustomizer, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UCustomizer)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizer(UCustomizer&&); \
	NO_API UCustomizer(const UCustomizer&); \
public:


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomizer(UCustomizer&&); \
	NO_API UCustomizer(const UCustomizer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizer)


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_12_PROLOG \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_EVENT_PARMS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_RPC_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_INCLASS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_SPARSE_DATA \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_CALLBACK_WRAPPERS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_INCLASS_NO_PURE_DECLS \
	ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UCustomizer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectLost_Plugins_ModularItemManagement_Source_ModularItemManagement_Public_Customizer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
