// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemModule.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItem;
#ifdef MODULARITEMMANAGEMENT_ItemModule_generated_h
#error "ItemModule.generated.h already included, missing '#pragma once' in ItemModule.h"
#endif
#define MODULARITEMMANAGEMENT_ItemModule_generated_h

#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_11_DELEGATE \
MODULARITEMMANAGEMENT_API void FOnAddedToItem_DelegateWrapper(const FMulticastScriptDelegate& OnAddedToItem, UItem* Item);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_12_DELEGATE \
MODULARITEMMANAGEMENT_API void FOnRemovedFromItem_DelegateWrapper(const FMulticastScriptDelegate& OnRemovedFromItem, UItem* Item);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_13_DELEGATE \
MODULARITEMMANAGEMENT_API void FOnModuleUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnModuleUpdated, UItem* Item);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnModuleUpdated_Implementation(UItem* Item) const; \
	virtual void OnRemovedFromItem_Implementation(UItem* Item) const; \
	virtual void OnAddedToItem_Implementation(UItem* Item) const; \
	DECLARE_FUNCTION(execOnModuleUpdated); \
	DECLARE_FUNCTION(execOnRemovedFromItem); \
	DECLARE_FUNCTION(execOnAddedToItem);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemModule(); \
	friend struct Z_Construct_UClass_UItemModule_Statics; \
public: \
	DECLARE_CLASS(UItemModule, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UItemModule)


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemModule(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemModule(UItemModule&&); \
	UItemModule(const UItemModule&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemModule); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemModule); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemModule) \
	NO_API virtual ~UItemModule();


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_18_PROLOG
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UItemModule>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_ItemModule_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
