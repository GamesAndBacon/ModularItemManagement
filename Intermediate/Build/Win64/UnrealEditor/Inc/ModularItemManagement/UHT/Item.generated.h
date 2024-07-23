// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UItemDefinition;
class UItemModule;
enum class EStructResult : uint8;
struct FInstancedStruct;
#ifdef MODULARITEMMANAGEMENT_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define MODULARITEMMANAGEMENT_Item_generated_h

#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_32_DELEGATE \
static void FModuleChanged_DelegateWrapper(const FMulticastScriptDelegate& ModuleChanged, UItemModule* Module);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_33_DELEGATE \
static void FStackSizeChanged_DelegateWrapper(const FMulticastScriptDelegate& StackSizeChanged, int32 NewStackSize);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginPlay_Implementation(); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetItemDefinition); \
	DECLARE_FUNCTION(execSetModule); \
	DECLARE_FUNCTION(execGetModule); \
	DECLARE_FUNCTION(execGetModuleDefaultObject); \
	DECLARE_FUNCTION(execOnItemLoad); \
	DECLARE_FUNCTION(execOnItemSave); \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execRemoveModule); \
	DECLARE_FUNCTION(execAddModule); \
	DECLARE_FUNCTION(execInitialize);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UItem, NO_API)


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UItem) \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_ARCHIVESERIALIZER


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItem(UItem&&); \
	UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItem) \
	NO_API virtual ~UItem();


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_25_PROLOG
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Item_h


#define FOREACH_ENUM_ESTRUCTRESULT(op) \
	op(EStructResult::Data) \
	op(EStructResult::NoData) 

enum class EStructResult : uint8;
template<> struct TIsUEnumClass<EStructResult> { enum { Value = true }; };
template<> MODULARITEMMANAGEMENT_API UEnum* StaticEnum<EStructResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
