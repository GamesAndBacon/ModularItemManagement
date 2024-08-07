#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.h"
#include "ItemDefinition.h"
#include "GridManager.generated.h"

class UGridComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemAddedToGrid, UItem*, Item, FVector2D, Position);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGridInitialized);

UCLASS(Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API AGridManager : public AActor
{
    GENERATED_BODY()

public:
    AGridManager();
    
    FTimerHandle TimerHandle_GenerateCell;

    UFUNCTION(BlueprintCallable, Category = "Grid")
    void InitializeGrid();
    
    UFUNCTION(Category = "Grid")
    bool AddItemToGrid(UItem* Item, FVector2D Position);
    
    UFUNCTION(Category = "Grid")
    void RemoveItemFromGrid(FVector2D Position);
    
    UFUNCTION(BlueprintCallable, Category = "Grid")
    void ReplaceItemOnGrid(UItemDefinition* ItemDef, FVector2D position);
    
    UFUNCTION(BlueprintCallable, Category = "Grid")
    UItem* GetItemInCell(FVector2D Position);

    UFUNCTION(BlueprintCallable, Category = "Grid")
    TArray<FVector2D> GetAdjacentItems(FVector2D Position);

    UFUNCTION(BlueprintCallable, Category = "Grid")
    FVector2D GetCellFromWorldLocation(FVector WorldLocation);
    
    UFUNCTION(BlueprintCallable, Category = "Grid")
    FVector2D GetCellCenter(FVector2D position) const;

    UFUNCTION(BlueprintCallable, Category = "Grid")
    TMap<int32, UItem*> GetGrid() const;

    UFUNCTION(BlueprintNativeEvent, Category = "Grid")
    UItemDefinition* SelectItemDefinitionForNextCell(FVector2D position);
    virtual UItemDefinition* SelectItemDefinitionForNextCell_Implementation(FVector2D position);

    UPROPERTY(BlueprintAssignable, Category = "Grid")
    FOnItemAddedToGrid OnItemAddedToGridEvent;
    
    UPROPERTY(BlueprintAssignable, Category = "Grid")
    FOnItemAddedToGrid OnItemRemovedFromGridEvent;

    UPROPERTY(BlueprintAssignable, Category = "Grid")
    FOnGridInitialized OnGridInitializedEvent;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    UItemDefinition* DefaultCellDefinition;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellSize;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 Width;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    int32 Height;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid")
    float CellsPerSecond;
        
    UPROPERTY()
    TMap<int32, UItem*> Grid;
    
    UFUNCTION()
    int32 HashPosition(FVector2D Position) const;
    
protected:
    
    virtual void BeginPlay() override;
    virtual void PostInitProperties() override;
    
    UFUNCTION(BlueprintNativeEvent, Category = "Grid")
    void OnItemAddedToGrid(UItem* Item, FVector2D Position);
    virtual void OnItemAddedToGrid_Implementation(UItem* Item, FVector2D Position);
    

private:
     
    int32 CurrentX;
    int32 CurrentY;
    TSubclassOf<UItem> ItemClass;
    bool bIsGenerating;


    void GenerateNextCell();
    void CleanupGrid();
    void FinishInitialization();
    UItemModule* GetModuleDefaultObject(TSubclassOf<UItemModule> ModuleClass);
};
