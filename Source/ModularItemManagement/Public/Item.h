// BaseItem.h

#pragma once

#include "CoreMinimal.h"
#include "ItemModule.h"
#include "ItemsLib.h"
#include "ItemDataAsset.h"
#include "Item.generated.h"

UCLASS(Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UItem : public UObject
{
    GENERATED_BODY()

public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FModuleChanged, UItemModule*, Module);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStackSizeChanged, int32, NewStackSize);  // New delegate for stack size changes
    
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
    TArray<FInstancedStruct> ModuleData;
    
    UPROPERTY(BlueprintReadOnly, SaveGame)
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
    void InitItem();
    
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
    UItemModule* GetModuleData(TSubclassOf<UItemModule> ModuleClass, FInstancedStruct& outModuleData);
    
    UFUNCTION(BlueprintCallable, Category = "ModularItems")
    void SetModuleData(UItemModule* Module, const FInstancedStruct& InstanceStruct);
        
    UPROPERTY(BlueprintReadOnly, SaveGame, EditAnywhere, Meta = (ExposeOnSpawn=true))
    UItemDataAsset* ItemData;

    UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere)
    FGuid Guid = FGuid::NewGuid();
      

};
