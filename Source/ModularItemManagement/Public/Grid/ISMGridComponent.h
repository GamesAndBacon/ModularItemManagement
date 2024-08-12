#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "GridComponent.h"
#include "GridManager.h"
#include "ItemDefinition.h"
#include "ISMGridComponent.generated.h"



USTRUCT(BlueprintType)
struct FGridCellInstanceData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	int32 InstanceIndex;

	UPROPERTY(BlueprintReadOnly)
	UStaticMesh* Mesh;

	UPROPERTY(BlueprintReadOnly)
	UInstancedStaticMeshComponent* ISMComponent;
	
	UPROPERTY(BlueprintReadOnly)
	FGuid GUID;
};

USTRUCT(BlueprintType)
struct FGridCellInstanceDataArray
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	TArray<FGridCellInstanceData> Data;
};

USTRUCT(BlueprintType)
struct FLocationRange
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval XRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval YRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval ZRange;
	
	FLocationRange()
		: XRange(FFloatInterval(0.0f, 0.0f))
		, YRange(FFloatInterval(0.0f, 0.0f))
		, ZRange(FFloatInterval(0.0f, 0.0f))
	{}
};

USTRUCT(BlueprintType)
struct FRotationRange
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval PitchRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval YawRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval RollRange;
	
	FRotationRange()
		: PitchRange(FFloatInterval(0.0f, 0.0f))
		, YawRange(FFloatInterval(0.0f, 0.0f))
		, RollRange(FFloatInterval(0.0f, 0.0f))
	{}
};

USTRUCT(BlueprintType)
struct FScaleRange
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval XRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval YRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FFloatInterval ZRange;

	FScaleRange()
		: XRange(FFloatInterval(1.0f, 1.0f))
		, YRange(FFloatInterval(1.0f, 1.0f))
		, ZRange(FFloatInterval(1.0f, 1.0f))
	{}
};

USTRUCT(BlueprintType)
struct FInstanceMeshData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FTransform OffsetTransform;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UStaticMesh* Mesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Location")
	FLocationRange LocationRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Rotation")
	FRotationRange RotationRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Scale")
	FScaleRange ScaleRange;
};

	
	

USTRUCT(BlueprintType)
struct FInstanceMeshDataArray
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FInstanceMeshData> Data;
};

UCLASS(Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UISMGridComponent : public UGridComponent
{
	GENERATED_BODY()

public:
	UISMGridComponent();
	
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintReadOnly, Category = "Grid")
	TMap<int32,FGridCellInstanceDataArray> CellInstanceMap;

	UFUNCTION(BlueprintCallable, Category = "Grid")
	FGuid AddInstances(const TArray<FInstanceMeshData>& InstanceDataArray, FVector2D Cell, float ZOffset);
	
	UFUNCTION(BlueprintCallable, Category = "Grid")
	void RemoveInstancesByGUID(FGuid GUID);
	
	UFUNCTION(BlueprintCallable, Category = "Grid")
	void RemoveAllInstances(FVector2D Cell);

private:
	UInstancedStaticMeshComponent* GetOrCreateISMComponent(UStaticMesh* Mesh);	
	TMap<UStaticMesh*, UInstancedStaticMeshComponent*> ISMComponentMap;
};
