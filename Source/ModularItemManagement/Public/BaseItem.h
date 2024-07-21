// BaseItem.h

#pragma once

#include "CoreMinimal.h"
#include "BaseMutator.h"
#include "ItemsLib.h"
#include "EquipmentComponent.h"
#include "InventoryComponent.h"
#include "ItemDataAsset.h"
#include "BaseItem.generated.h"

UCLASS(Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UBaseItem : public UObject
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMutatorChanged, UBaseMutator*, Mutator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStackSizeChanged, int32, NewStackSize);  // New delegate for stack size changes

    UPROPERTY(BlueprintAssignable)
    FMutatorChanged MutatorAdded;

    UPROPERTY(BlueprintAssignable)
    FMutatorChanged MutatorRemoved;

    UPROPERTY(BlueprintAssignable)
    FStackSizeChanged OnStackSizeChanged;  // Property to bind the stack size change event

    UBaseItem(const FObjectInitializer& ObjectInitializer);

    virtual UWorld* GetWorld() const override;
    virtual void PostInitProperties() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void InitItem();

    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void DoUse(AActor* Owner);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ModularItems")
    void OnEquip(AActor* Owner);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ModularItems")
    void OnUnequip(AActor* Owner);

    UFUNCTION(BlueprintImplementableEvent)
    void OnLoadMutator(UBaseMutator* Owner);

    UFUNCTION(BlueprintImplementableEvent)
    void OnSaveMutator(UBaseMutator* Owner);

    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void AddMutator(TSubclassOf<UBaseMutator> Mutator, FInstancedStruct MutatatorData);
    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void RemoveMutator(TSubclassOf<UBaseMutator> Mutator);

    UFUNCTION(BlueprintNativeEvent)
    UBaseItem* DoUnEquipBP(UEquipmentComponent* EC);

    UFUNCTION(BlueprintNativeEvent)
    UBaseItem* DoEquipBP(UEquipmentComponent* EC);

    UFUNCTION(BlueprintNativeEvent)
    void DoUseBP();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ModularItems")
    void BeginPlay();

    UFUNCTION()
    void OnItemSave();

    UFUNCTION()
    void OnItemLoad();
    
    UFUNCTION()
    UBaseMutator* GetMutatorDefaultObject(TSubclassOf<UBaseMutator> Mutator);
    
    UFUNCTION()
    void SaveMutators();

    // UFUNCTION()
    // void LoadMutators();

    void DoEquip(UEquipmentComponent* EC);
    void DoUnEquip(UInventoryComponent* Inv);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* UseActor;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Meta = (ExposeOnSpawn=true))
    UItemDataAsset* ItemData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid Guid = FGuid::NewGuid();
   
    UPROPERTY(Replicated, SaveGame)
    TArray<FItemRecord> SavedMutators;

    // properties and methods for stacking
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stacking")
    int32 StackSize;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stacking", meta = (ExposeOnSpawn = "true"))
    int32 MaxStackSize;

    UFUNCTION(BlueprintCallable, Category = "Stacking")
    bool IsStackable() const;

    UFUNCTION(BlueprintCallable, Category = "Stacking")
    int32 AddToStack(int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Stacking")
    int32 RemoveFromStack(int32 Amount);
    
    UPROPERTY(BlueprintReadOnly)
    TMap<TSubclassOf<UBaseMutator>, FInstancedStruct> Mutators;

private:
  
    void TriggerStackSizeChanged();  // Method to trigger the event
};
