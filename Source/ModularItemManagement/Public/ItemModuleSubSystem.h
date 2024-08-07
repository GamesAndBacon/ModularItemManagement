#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ItemModuleSubsystem.generated.h"

UCLASS()
class MODULARITEMMANAGEMENT_API UItemModuleSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;

	// Function to initialize all item modules
	UFUNCTION(BlueprintCallable, Category = "ItemModule")
	void InitializeAllItemModules(UWorld* World);

private:
	void OnWorldBeginPlay(UWorld* World, const UWorld::InitializationValues IVS);
};
