// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CustomizerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MODULARITEMMANAGEMENT_CustomizerComponent_generated_h
#error "CustomizerComponent.generated.h already included, missing '#pragma once' in CustomizerComponent.h"
#endif
#define MODULARITEMMANAGEMENT_CustomizerComponent_generated_h

#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateCustomization);


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomizerComponent(); \
	friend struct Z_Construct_UClass_UCustomizerComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomizerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UCustomizerComponent)


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomizerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCustomizerComponent(UCustomizerComponent&&); \
	UCustomizerComponent(const UCustomizerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomizerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomizerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomizerComponent) \
	NO_API virtual ~UCustomizerComponent();


#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_11_PROLOG
#define FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UCustomizerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_DungeonSurvivors_plugins_ModularItemManagement_Source_ModularItemManagement_Public_CustomizerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
