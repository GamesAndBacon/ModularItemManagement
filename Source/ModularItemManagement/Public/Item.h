// Created by Shain Furby

#pragma once

#include "CoreMinimal.h"
#include "ItemModule.h"
#include "Item.generated.h"

class UItemDefinition;

/**
 * UItem class
 * Represents an item that can contain multiple modules.
 */
UCLASS(Blueprintable, BlueprintType)
class MODULARITEMMANAGEMENT_API UItem : public UObject
{
    GENERATED_BODY()

public:
    // Delegates for module changes
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FModuleChanged, UItemModule*, Module, FInstancedStruct, ModuleData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStackSizeChanged, int32, NewStackSize); // Delegate for stack size changes
    
    // Constructor
    UItem(const FObjectInitializer& ObjectInitializer);

    // Properties
    UPROPERTY(SaveGame)
    TArray<FInstancedStruct> ModuleData;
    
    UPROPERTY(SaveGame)
    TArray<TSubclassOf<UItemModule>> ModuleClasses;
    
    UPROPERTY(BlueprintAssignable, Category = "Item|Events")
    FModuleChanged ModuleAdded;

    UPROPERTY(BlueprintAssignable, Category = "Item|Events")
    FModuleChanged ModuleRemoved;

	UPROPERTY(BlueprintAssignable, Category = "Item|Events")
	FModuleChanged ModuleUpdated;
	

    UPROPERTY(SaveGame)
    UItemDefinition* ItemData;

    UPROPERTY(BlueprintReadOnly, SaveGame, EditAnywhere, Category = "Item|Properties")
    FGuid ItemID = FGuid::NewGuid();

    UPROPERTY(BlueprintReadWrite, SaveGame, EditAnywhere, Category = "Item|Properties")
    AActor* Owner;

    // Functions
    virtual UWorld* GetWorld() const override;
    virtual void PostInitProperties() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Category = "Item|Initialization")
    void Initialize(UItemDefinition* ItemDefinition);

    UFUNCTION(BlueprintCallable, Category = "Item|Modules")
    void AddModule(TSubclassOf<UItemModule> Module, FInstancedStruct OutModuleData);
    
    UFUNCTION(BlueprintCallable, Category = "Item|Modules")
    void RemoveModule(TSubclassOf<UItemModule> Module);

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Item|Lifecycle")
    void BeginPlay();

    UFUNCTION()
    void OnItemSave();

    UFUNCTION()
    void OnItemLoad();

    virtual void Serialize(FArchive& Ar) override;

    UFUNCTION()
    UItemModule* GetModuleDefaultObject(TSubclassOf<UItemModule> Module);

    UFUNCTION(BlueprintCallable, Category = "Item|Modules", meta = (DeterminesOutputType = "ModuleClass"))
    UItemModule* GetModule(TSubclassOf<UItemModule> ModuleClass, FInstancedStruct& OutModuleData);
    
    UFUNCTION(BlueprintCallable, Category = "Item|Modules", meta = (CustomStructureParam = "Value"))
    void SetModule(UItemModule* Module, const FInstancedStruct& InstanceStruct);

    UFUNCTION(BlueprintCallable, Category = "Item|Properties")
    UItemDefinition* GetItemDefinition() const;

    // Inline getter for owner
    UFUNCTION(BlueprintCallable, Category = "Item|Properties")
    FORCEINLINE AActor* GetOwner() const { return Owner; }
};
