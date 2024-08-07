// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemModuleSubSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef MODULARITEMMANAGEMENT_ItemModuleSubSystem_generated_h
#error "ItemModuleSubSystem.generated.h already included, missing '#pragma once' in ItemModuleSubSystem.h"
#endif
#define MODULARITEMMANAGEMENT_ItemModuleSubSystem_generated_h

#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInitializeAllItemModules);


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemModuleSubsystem(); \
	friend struct Z_Construct_UClass_UItemModuleSubsystem_Statics; \
public: \
	DECLARE_CLASS(UItemModuleSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UItemModuleSubsystem)


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemModuleSubsystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemModuleSubsystem(UItemModuleSubsystem&&); \
	UItemModuleSubsystem(const UItemModuleSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemModuleSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemModuleSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemModuleSubsystem) \
	NO_API virtual ~UItemModuleSubsystem();


#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_7_PROLOG
#define FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UItemModuleSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModuleSubSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
