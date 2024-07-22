// BaseItem.h

#pragma once

#include "CoreMinimal.h"
#include "ItemModule.h"
#include "Item.generated.h"

class UItemDefinition;

UCLASS(Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UItem : public UObject
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModuleChanged, UItemModule*, Module);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStackSizeChanged, int32, NewStackSize);  // New delegate for stack size changes
    
    UPROPERTY(SaveGame)
    TArray<FInstancedStruct> ModuleData;
    
    UPROPERTY(SaveGame)
    TArray<TSubclassOf<UItemModule>> ModuleClasses;
    
    UPROPERTY(BlueprintAssignable)
    FModuleChanged ModuleAdded;

    UPROPERTY(BlueprintAssignable)
    FModuleChanged ModuleRemoved;
    
    UItem(const FObjectInitializer& ObjectInitializer);

    virtual UWorld* GetWorld() const override;
    virtual void PostInitProperties() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void Initialize(UItemDefinition* ItemDefinition);
    
    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void AddModule(TSubclassOf<UItemModule> Module, FInstancedStruct outModuleData);
    
    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void RemoveModule(TSubclassOf<UItemModule> Module);
    
    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ModularItems")
    void BeginPlay();

    UFUNCTION()
    void OnItemSave();

    UFUNCTION()
    void OnItemLoad();

    virtual void Serialize(FArchive& Ar) override;
    
    UFUNCTION()
    UItemModule* GetModuleDefaultObject(TSubclassOf<UItemModule> Module);
        
    UFUNCTION(BlueprintCallable, Category = "ModularItems", meta = (DeterminesOutputType = " ModuleClass"))
    UItemModule* GetModule(TSubclassOf<UItemModule> ModuleClass, FInstancedStruct& outModuleData);
    
    UFUNCTION(BlueprintCallable, Category = "ModularItems", meta = (CustomStructureParam = "Value"))
    void SetModule(UItemModule* Module, const FInstancedStruct& InstanceStruct);
        
    UPROPERTY(saveGame)
    UItemDefinition* ItemData;

    UPROPERTY(BlueprintReadOnly, SaveGame, EditAnywhere)
    FGuid ItemID = FGuid::NewGuid();

    // New variable for owner
    UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere)
    AActor* Owner;
    
    // Inline getter for owner
    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    FORCEINLINE AActor* GetOwner() const { return Owner; }

    // Function to get the data asset
    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    UItemDefinition* GetItemDefinition() const;

};
