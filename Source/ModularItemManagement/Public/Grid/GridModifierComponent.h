#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GridManager.h"
#include "GridModifierComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGridModifierEvent, const TSet<FVector2D>&, Cells);

UCLASS(Blueprintable, BlueprintType, meta = (BlueprintSpawnableComponent), ClassGroup = "Grid")
class MODULARITEMMANAGEMENT_API UGridModifierComponent : public USceneComponent
{
    GENERATED_BODY()

public:
    UGridModifierComponent();

protected:
    virtual void BeginPlay() override;
    virtual void OnComponentCreated() override;
    

    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

public:
    UFUNCTION(BlueprintCallable, Category = "Grid Modifier")
    void UpdateModifier();

    UFUNCTION(BlueprintCallable, Category = "Grid Modifier")
    TSet<FVector2D> GetCells();

    UFUNCTION(BlueprintCallable, Category = "Grid Modifier")
    TSet<FVector2D> GetValidCells() const;

    UFUNCTION(BlueprintCallable, Category = "Grid Modifier")
    TSet<FVector2D> GetInvalidCells() const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Grid Modifier|Owning Grid")
    AGridManager* GetOwningGrid();

    UFUNCTION(BlueprintCallable, Category = "Grid Modifier")
    void SetOverrideGrid(AGridManager* NewOverrideGrid);

    UPROPERTY(BlueprintAssignable, Category = "Grid Modifier|Events")
    FGridModifierEvent OnCellsUpdated;

    UPROPERTY(BlueprintAssignable, Category = "Grid Modifier|Events")
    FGridModifierEvent OnCellsRemoved;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grid Modifier|Owning Grid")
    AGridManager* OverrideGrid;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Grid Modifier|Owning Grid")
    AGridManager* OwningGrid;

    UFUNCTION(BlueprintNativeEvent, Category = "Grid Modifier|Affected Cells")
    void CalculateAffectedCells(TSet<FVector2D>& OutCells);
    virtual void CalculateAffectedCells_Implementation(TSet<FVector2D>& OutCells);
    
    UFUNCTION(BlueprintNativeEvent, Category = "Grid Modifier|Cell Validity")
    bool IsCellValid(const FVector2D& Cell) const;
    virtual bool IsCellValid_Implementation(const FVector2D& Cell) const;

private:
    void UpdateAffectedCells();
    TSet<FVector2D> AffectedCells;
    TSet<FVector2D> ValidCells;
    TSet<FVector2D> InvalidCells;
};
