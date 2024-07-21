// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseMutator;
struct FInstancedStruct;
#ifdef MODULARITEMMANAGEMENT_BaseItem_generated_h
#error "BaseItem.generated.h already included, missing '#pragma once' in BaseItem.h"
#endif
#define MODULARITEMMANAGEMENT_BaseItem_generated_h

#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_17_DELEGATE \
static void FMutatorChanged_DelegateWrapper(const FMulticastScriptDelegate& MutatorChanged, UBaseMutator* Mutator);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_18_DELEGATE \
static void FStackSizeChanged_DelegateWrapper(const FMulticastScriptDelegate& StackSizeChanged, int32 NewStackSize);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void BeginPlay_Implementation(); \
	DECLARE_FUNCTION(execSaveMutators); \
	DECLARE_FUNCTION(execGetMutatorDefaultObject); \
	DECLARE_FUNCTION(execOnItemLoad); \
	DECLARE_FUNCTION(execOnItemSave); \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execRemoveMutator); \
	DECLARE_FUNCTION(execAddMutator); \
	DECLARE_FUNCTION(execInitItem);


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_CALLBACK_WRAPPERS
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseItem(); \
	friend struct Z_Construct_UClass_UBaseItem_Statics; \
public: \
	DECLARE_CLASS(UBaseItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularItemManagement"), NO_API) \
	DECLARE_SERIALIZER(UBaseItem) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SavedMutators=NETFIELD_REP_START, \
		NETFIELD_REP_END=SavedMutators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UBaseItem) \
public:


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseItem(UBaseItem&&); \
	UBaseItem(const UBaseItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseItem) \
	NO_API virtual ~UBaseItem();


#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_11_PROLOG
#define FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<class UBaseItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_ItemPlugin_plugins_ModularItemManagement_Source_ModularItemManagement_Public_BaseItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
