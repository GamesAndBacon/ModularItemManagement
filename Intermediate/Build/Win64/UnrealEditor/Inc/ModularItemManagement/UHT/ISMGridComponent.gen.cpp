// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularItemManagement/Public/Grid/ISMGridComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISMGridComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UGridComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UISMGridComponent();
MODULARITEMMANAGEMENT_API UClass* Z_Construct_UClass_UISMGridComponent_NoRegister();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FGridCellInstanceData();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FGridCellInstanceDataArray();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FInstanceMeshData();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FInstanceMeshDataArray();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FLocationRange();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FRotationRange();
MODULARITEMMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FScaleRange();
UPackage* Z_Construct_UPackage__Script_ModularItemManagement();
// End Cross Module References

// Begin ScriptStruct FGridCellInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridCellInstanceData;
class UScriptStruct* FGridCellInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridCellInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridCellInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridCellInstanceData, (UObject*)Z_Construct_UPackage__Script_ModularItemManagement(), TEXT("GridCellInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_GridCellInstanceData.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<FGridCellInstanceData>()
{
	return FGridCellInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridCellInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[] = {
		{ "Category", "GridCellInstanceData" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "GridCellInstanceData" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponent_MetaData[] = {
		{ "Category", "GridCellInstanceData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GUID_MetaData[] = {
		{ "Category", "GridCellInstanceData" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridCellInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCellInstanceData, InstanceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceIndex_MetaData), NewProp_InstanceIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCellInstanceData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewProp_ISMComponent = { "ISMComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCellInstanceData, ISMComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ISMComponent_MetaData), NewProp_ISMComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCellInstanceData, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GUID_MetaData), NewProp_GUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewProp_InstanceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewProp_ISMComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewProp_GUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	nullptr,
	&NewStructOps,
	"GridCellInstanceData",
	Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::PropPointers),
	sizeof(FGridCellInstanceData),
	alignof(FGridCellInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridCellInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_GridCellInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridCellInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridCellInstanceData.InnerSingleton;
}
// End ScriptStruct FGridCellInstanceData

// Begin ScriptStruct FGridCellInstanceDataArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridCellInstanceDataArray;
class UScriptStruct* FGridCellInstanceDataArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridCellInstanceDataArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridCellInstanceDataArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridCellInstanceDataArray, (UObject*)Z_Construct_UPackage__Script_ModularItemManagement(), TEXT("GridCellInstanceDataArray"));
	}
	return Z_Registration_Info_UScriptStruct_GridCellInstanceDataArray.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<FGridCellInstanceDataArray>()
{
	return FGridCellInstanceDataArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "GridCellInstanceDataArray" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridCellInstanceDataArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridCellInstanceData, METADATA_PARAMS(0, nullptr) }; // 2311255047
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridCellInstanceDataArray, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 2311255047
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	nullptr,
	&NewStructOps,
	"GridCellInstanceDataArray",
	Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::PropPointers),
	sizeof(FGridCellInstanceDataArray),
	alignof(FGridCellInstanceDataArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridCellInstanceDataArray()
{
	if (!Z_Registration_Info_UScriptStruct_GridCellInstanceDataArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridCellInstanceDataArray.InnerSingleton, Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridCellInstanceDataArray.InnerSingleton;
}
// End ScriptStruct FGridCellInstanceDataArray

// Begin ScriptStruct FLocationRange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocationRange;
class UScriptStruct* FLocationRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocationRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocationRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocationRange, (UObject*)Z_Construct_UPackage__Script_ModularItemManagement(), TEXT("LocationRange"));
	}
	return Z_Registration_Info_UScriptStruct_LocationRange.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<FLocationRange>()
{
	return FLocationRange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLocationRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XRange_MetaData[] = {
		{ "Category", "LocationRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YRange_MetaData[] = {
		{ "Category", "LocationRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZRange_MetaData[] = {
		{ "Category", "LocationRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_XRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocationRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationRange_Statics::NewProp_XRange = { "XRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationRange, XRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XRange_MetaData), NewProp_XRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationRange_Statics::NewProp_YRange = { "YRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationRange, YRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YRange_MetaData), NewProp_YRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationRange_Statics::NewProp_ZRange = { "ZRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLocationRange, ZRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZRange_MetaData), NewProp_ZRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocationRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationRange_Statics::NewProp_XRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationRange_Statics::NewProp_YRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationRange_Statics::NewProp_ZRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocationRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	nullptr,
	&NewStructOps,
	"LocationRange",
	Z_Construct_UScriptStruct_FLocationRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationRange_Statics::PropPointers),
	sizeof(FLocationRange),
	alignof(FLocationRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLocationRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLocationRange()
{
	if (!Z_Registration_Info_UScriptStruct_LocationRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocationRange.InnerSingleton, Z_Construct_UScriptStruct_FLocationRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LocationRange.InnerSingleton;
}
// End ScriptStruct FLocationRange

// Begin ScriptStruct FRotationRange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RotationRange;
class UScriptStruct* FRotationRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RotationRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RotationRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRotationRange, (UObject*)Z_Construct_UPackage__Script_ModularItemManagement(), TEXT("RotationRange"));
	}
	return Z_Registration_Info_UScriptStruct_RotationRange.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<FRotationRange>()
{
	return FRotationRange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRotationRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchRange_MetaData[] = {
		{ "Category", "RotationRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRange_MetaData[] = {
		{ "Category", "RotationRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollRange_MetaData[] = {
		{ "Category", "RotationRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PitchRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YawRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RollRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRotationRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRange_Statics::NewProp_PitchRange = { "PitchRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRange, PitchRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchRange_MetaData), NewProp_PitchRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRange_Statics::NewProp_YawRange = { "YawRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRange, YawRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRange_MetaData), NewProp_YawRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRotationRange_Statics::NewProp_RollRange = { "RollRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRotationRange, RollRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollRange_MetaData), NewProp_RollRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRotationRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRange_Statics::NewProp_PitchRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRange_Statics::NewProp_YawRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRotationRange_Statics::NewProp_RollRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRotationRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	nullptr,
	&NewStructOps,
	"RotationRange",
	Z_Construct_UScriptStruct_FRotationRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRange_Statics::PropPointers),
	sizeof(FRotationRange),
	alignof(FRotationRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRotationRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRotationRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRotationRange()
{
	if (!Z_Registration_Info_UScriptStruct_RotationRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RotationRange.InnerSingleton, Z_Construct_UScriptStruct_FRotationRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RotationRange.InnerSingleton;
}
// End ScriptStruct FRotationRange

// Begin ScriptStruct FScaleRange
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScaleRange;
class UScriptStruct* FScaleRange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScaleRange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScaleRange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScaleRange, (UObject*)Z_Construct_UPackage__Script_ModularItemManagement(), TEXT("ScaleRange"));
	}
	return Z_Registration_Info_UScriptStruct_ScaleRange.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<FScaleRange>()
{
	return FScaleRange::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScaleRange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XRange_MetaData[] = {
		{ "Category", "ScaleRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YRange_MetaData[] = {
		{ "Category", "ScaleRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZRange_MetaData[] = {
		{ "Category", "ScaleRange" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_XRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScaleRange>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScaleRange_Statics::NewProp_XRange = { "XRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScaleRange, XRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XRange_MetaData), NewProp_XRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScaleRange_Statics::NewProp_YRange = { "YRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScaleRange, YRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YRange_MetaData), NewProp_YRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScaleRange_Statics::NewProp_ZRange = { "ZRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScaleRange, ZRange), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZRange_MetaData), NewProp_ZRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScaleRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleRange_Statics::NewProp_XRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleRange_Statics::NewProp_YRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScaleRange_Statics::NewProp_ZRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScaleRange_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	nullptr,
	&NewStructOps,
	"ScaleRange",
	Z_Construct_UScriptStruct_FScaleRange_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleRange_Statics::PropPointers),
	sizeof(FScaleRange),
	alignof(FScaleRange),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScaleRange_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScaleRange_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScaleRange()
{
	if (!Z_Registration_Info_UScriptStruct_ScaleRange.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScaleRange.InnerSingleton, Z_Construct_UScriptStruct_FScaleRange_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScaleRange.InnerSingleton;
}
// End ScriptStruct FScaleRange

// Begin ScriptStruct FInstanceMeshData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstanceMeshData;
class UScriptStruct* FInstanceMeshData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceMeshData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstanceMeshData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstanceMeshData, (UObject*)Z_Construct_UPackage__Script_ModularItemManagement(), TEXT("InstanceMeshData"));
	}
	return Z_Registration_Info_UScriptStruct_InstanceMeshData.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<FInstanceMeshData>()
{
	return FInstanceMeshData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstanceMeshData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetTransform_MetaData[] = {
		{ "Category", "InstanceMeshData" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "InstanceMeshData" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationRange_MetaData[] = {
		{ "Category", "Location" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRange_MetaData[] = {
		{ "Category", "Rotation" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRange_MetaData[] = {
		{ "Category", "Scale" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstanceMeshData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_OffsetTransform = { "OffsetTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceMeshData, OffsetTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetTransform_MetaData), NewProp_OffsetTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceMeshData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_LocationRange = { "LocationRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceMeshData, LocationRange), Z_Construct_UScriptStruct_FLocationRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationRange_MetaData), NewProp_LocationRange_MetaData) }; // 2458587167
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_RotationRange = { "RotationRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceMeshData, RotationRange), Z_Construct_UScriptStruct_FRotationRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRange_MetaData), NewProp_RotationRange_MetaData) }; // 73723945
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_ScaleRange = { "ScaleRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceMeshData, ScaleRange), Z_Construct_UScriptStruct_FScaleRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRange_MetaData), NewProp_ScaleRange_MetaData) }; // 2785636123
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstanceMeshData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_OffsetTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_LocationRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_RotationRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewProp_ScaleRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceMeshData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstanceMeshData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	nullptr,
	&NewStructOps,
	"InstanceMeshData",
	Z_Construct_UScriptStruct_FInstanceMeshData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceMeshData_Statics::PropPointers),
	sizeof(FInstanceMeshData),
	alignof(FInstanceMeshData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceMeshData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstanceMeshData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstanceMeshData()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceMeshData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstanceMeshData.InnerSingleton, Z_Construct_UScriptStruct_FInstanceMeshData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstanceMeshData.InnerSingleton;
}
// End ScriptStruct FInstanceMeshData

// Begin ScriptStruct FInstanceMeshDataArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstanceMeshDataArray;
class UScriptStruct* FInstanceMeshDataArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceMeshDataArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstanceMeshDataArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstanceMeshDataArray, (UObject*)Z_Construct_UPackage__Script_ModularItemManagement(), TEXT("InstanceMeshDataArray"));
	}
	return Z_Registration_Info_UScriptStruct_InstanceMeshDataArray.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UScriptStruct* StaticStruct<FInstanceMeshDataArray>()
{
	return FInstanceMeshDataArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "InstanceMeshDataArray" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstanceMeshDataArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstanceMeshData, METADATA_PARAMS(0, nullptr) }; // 609950490
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInstanceMeshDataArray, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 609950490
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
	nullptr,
	&NewStructOps,
	"InstanceMeshDataArray",
	Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::PropPointers),
	sizeof(FInstanceMeshDataArray),
	alignof(FInstanceMeshDataArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInstanceMeshDataArray()
{
	if (!Z_Registration_Info_UScriptStruct_InstanceMeshDataArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstanceMeshDataArray.InnerSingleton, Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InstanceMeshDataArray.InnerSingleton;
}
// End ScriptStruct FInstanceMeshDataArray

// Begin Class UISMGridComponent Function AddInstances
struct Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics
{
	struct ISMGridComponent_eventAddInstances_Parms
	{
		TArray<FInstanceMeshData> InstanceDataArray;
		FVector2D Cell;
		float ZOffset;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDataArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceDataArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceDataArray;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_InstanceDataArray_Inner = { "InstanceDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInstanceMeshData, METADATA_PARAMS(0, nullptr) }; // 609950490
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_InstanceDataArray = { "InstanceDataArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISMGridComponent_eventAddInstances_Parms, InstanceDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceDataArray_MetaData), NewProp_InstanceDataArray_MetaData) }; // 609950490
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISMGridComponent_eventAddInstances_Parms, Cell), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISMGridComponent_eventAddInstances_Parms, ZOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISMGridComponent_eventAddInstances_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_InstanceDataArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_InstanceDataArray,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_Cell,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISMGridComponent, nullptr, "AddInstances", nullptr, nullptr, Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::ISMGridComponent_eventAddInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::ISMGridComponent_eventAddInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISMGridComponent_AddInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISMGridComponent_AddInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISMGridComponent::execAddInstances)
{
	P_GET_TARRAY_REF(FInstanceMeshData,Z_Param_Out_InstanceDataArray);
	P_GET_STRUCT(FVector2D,Z_Param_Cell);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ZOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->AddInstances(Z_Param_Out_InstanceDataArray,Z_Param_Cell,Z_Param_ZOffset);
	P_NATIVE_END;
}
// End Class UISMGridComponent Function AddInstances

// Begin Class UISMGridComponent Function RemoveAllInstances
struct Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics
{
	struct ISMGridComponent_eventRemoveAllInstances_Parms
	{
		FVector2D Cell;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cell;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::NewProp_Cell = { "Cell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISMGridComponent_eventRemoveAllInstances_Parms, Cell), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::NewProp_Cell,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISMGridComponent, nullptr, "RemoveAllInstances", nullptr, nullptr, Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::ISMGridComponent_eventRemoveAllInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::ISMGridComponent_eventRemoveAllInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISMGridComponent::execRemoveAllInstances)
{
	P_GET_STRUCT(FVector2D,Z_Param_Cell);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllInstances(Z_Param_Cell);
	P_NATIVE_END;
}
// End Class UISMGridComponent Function RemoveAllInstances

// Begin Class UISMGridComponent Function RemoveInstancesByGUID
struct Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics
{
	struct ISMGridComponent_eventRemoveInstancesByGUID_Parms
	{
		FGuid GUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::NewProp_GUID = { "GUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ISMGridComponent_eventRemoveInstancesByGUID_Parms, GUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::NewProp_GUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UISMGridComponent, nullptr, "RemoveInstancesByGUID", nullptr, nullptr, Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::ISMGridComponent_eventRemoveInstancesByGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::ISMGridComponent_eventRemoveInstancesByGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UISMGridComponent::execRemoveInstancesByGUID)
{
	P_GET_STRUCT(FGuid,Z_Param_GUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveInstancesByGUID(Z_Param_GUID);
	P_NATIVE_END;
}
// End Class UISMGridComponent Function RemoveInstancesByGUID

// Begin Class UISMGridComponent
void UISMGridComponent::StaticRegisterNativesUISMGridComponent()
{
	UClass* Class = UISMGridComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddInstances", &UISMGridComponent::execAddInstances },
		{ "RemoveAllInstances", &UISMGridComponent::execRemoveAllInstances },
		{ "RemoveInstancesByGUID", &UISMGridComponent::execRemoveInstancesByGUID },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISMGridComponent);
UClass* Z_Construct_UClass_UISMGridComponent_NoRegister()
{
	return UISMGridComponent::StaticClass();
}
struct Z_Construct_UClass_UISMGridComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Grid/ISMGridComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellInstanceMap_MetaData[] = {
		{ "Category", "Grid" },
		{ "ModuleRelativePath", "Public/Grid/ISMGridComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellInstanceMap_ValueProp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellInstanceMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CellInstanceMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UISMGridComponent_AddInstances, "AddInstances" }, // 569042204
		{ &Z_Construct_UFunction_UISMGridComponent_RemoveAllInstances, "RemoveAllInstances" }, // 1880529066
		{ &Z_Construct_UFunction_UISMGridComponent_RemoveInstancesByGUID, "RemoveInstancesByGUID" }, // 368292083
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UISMGridComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UISMGridComponent_Statics::NewProp_CellInstanceMap_ValueProp = { "CellInstanceMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FGridCellInstanceDataArray, METADATA_PARAMS(0, nullptr) }; // 637985037
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UISMGridComponent_Statics::NewProp_CellInstanceMap_Key_KeyProp = { "CellInstanceMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UISMGridComponent_Statics::NewProp_CellInstanceMap = { "CellInstanceMap", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UISMGridComponent, CellInstanceMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellInstanceMap_MetaData), NewProp_CellInstanceMap_MetaData) }; // 637985037
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UISMGridComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMGridComponent_Statics::NewProp_CellInstanceMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMGridComponent_Statics::NewProp_CellInstanceMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UISMGridComponent_Statics::NewProp_CellInstanceMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UISMGridComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UISMGridComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGridComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularItemManagement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UISMGridComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UISMGridComponent_Statics::ClassParams = {
	&UISMGridComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UISMGridComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UISMGridComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UISMGridComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UISMGridComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UISMGridComponent()
{
	if (!Z_Registration_Info_UClass_UISMGridComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISMGridComponent.OuterSingleton, Z_Construct_UClass_UISMGridComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UISMGridComponent.OuterSingleton;
}
template<> MODULARITEMMANAGEMENT_API UClass* StaticClass<UISMGridComponent>()
{
	return UISMGridComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UISMGridComponent);
UISMGridComponent::~UISMGridComponent() {}
// End Class UISMGridComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridCellInstanceData::StaticStruct, Z_Construct_UScriptStruct_FGridCellInstanceData_Statics::NewStructOps, TEXT("GridCellInstanceData"), &Z_Registration_Info_UScriptStruct_GridCellInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridCellInstanceData), 2311255047U) },
		{ FGridCellInstanceDataArray::StaticStruct, Z_Construct_UScriptStruct_FGridCellInstanceDataArray_Statics::NewStructOps, TEXT("GridCellInstanceDataArray"), &Z_Registration_Info_UScriptStruct_GridCellInstanceDataArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridCellInstanceDataArray), 637985037U) },
		{ FLocationRange::StaticStruct, Z_Construct_UScriptStruct_FLocationRange_Statics::NewStructOps, TEXT("LocationRange"), &Z_Registration_Info_UScriptStruct_LocationRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocationRange), 2458587167U) },
		{ FRotationRange::StaticStruct, Z_Construct_UScriptStruct_FRotationRange_Statics::NewStructOps, TEXT("RotationRange"), &Z_Registration_Info_UScriptStruct_RotationRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRotationRange), 73723945U) },
		{ FScaleRange::StaticStruct, Z_Construct_UScriptStruct_FScaleRange_Statics::NewStructOps, TEXT("ScaleRange"), &Z_Registration_Info_UScriptStruct_ScaleRange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScaleRange), 2785636123U) },
		{ FInstanceMeshData::StaticStruct, Z_Construct_UScriptStruct_FInstanceMeshData_Statics::NewStructOps, TEXT("InstanceMeshData"), &Z_Registration_Info_UScriptStruct_InstanceMeshData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstanceMeshData), 609950490U) },
		{ FInstanceMeshDataArray::StaticStruct, Z_Construct_UScriptStruct_FInstanceMeshDataArray_Statics::NewStructOps, TEXT("InstanceMeshDataArray"), &Z_Registration_Info_UScriptStruct_InstanceMeshDataArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstanceMeshDataArray), 2202695927U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UISMGridComponent, UISMGridComponent::StaticClass, TEXT("UISMGridComponent"), &Z_Registration_Info_UClass_UISMGridComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISMGridComponent), 2023560281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_3419109546(TEXT("/Script/ModularItemManagement"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_GridSystemTest_plugins_ModularItemManagement_Source_ModularItemManagement_Public_Grid_ISMGridComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
