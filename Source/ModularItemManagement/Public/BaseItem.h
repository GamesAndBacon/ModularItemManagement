// BaseItem.h

#pragma once

#include "CoreMinimal.h"
#include "BaseMutator.h"
#include "ItemsLib.h"
#include "ItemDataAsset.h"
#include "BaseItem.generated.h"

UCLASS(Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UBaseItem : public UObject
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMutatorChanged, UBaseMutator*, Mutator);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStackSizeChanged, int32, NewStackSize);  // New delegate for stack size changes
    
    
    UPROPERTY(BlueprintReadOnly)
    TMap<TSubclassOf<UBaseMutator>, FInstancedStruct> Mutators;
    
    UPROPERTY(BlueprintAssignable)
    FMutatorChanged MutatorAdded;

    UPROPERTY(BlueprintAssignable)
    FMutatorChanged MutatorRemoved;

    UBaseItem(const FObjectInitializer& ObjectInitializer);

    virtual UWorld* GetWorld() const override;
    virtual void PostInitProperties() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void InitItem();

    UFUNCTION(BlueprintImplementableEvent)
    void OnLoadMutator(UBaseMutator* Owner);

    UFUNCTION(BlueprintImplementableEvent)
    void OnSaveMutator(UBaseMutator* Owner);

    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void AddMutator(TSubclassOf<UBaseMutator> Mutator, FInstancedStruct MutatatorData);
    
    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void RemoveMutator(TSubclassOf<UBaseMutator> Mutator);
    

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
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Meta = (ExposeOnSpawn=true))
    UItemDataAsset* ItemData;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGuid Guid = FGuid::NewGuid();
   
    UPROPERTY(Replicated, SaveGame)
    TArray<FItemRecord> SavedMutators;
    

};
