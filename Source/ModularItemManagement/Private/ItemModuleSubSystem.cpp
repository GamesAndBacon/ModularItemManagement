#include "ItemModuleSubsystem.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "ItemModule.h"
#include "UObject/UObjectIterator.h"
#include "UObject/Class.h"

void UItemModuleSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	// Bind to the world begin play event
	FWorldDelegates::OnPostWorldInitialization.AddUObject(this, &UItemModuleSubsystem::OnWorldBeginPlay);
}

void UItemModuleSubsystem::OnWorldBeginPlay(UWorld* World, const UWorld::InitializationValues IVS)
{
	if (World && World->IsGameWorld())
	{
		InitializeAllItemModules(World);
	}
}

void UItemModuleSubsystem::InitializeAllItemModules(UWorld* World)
{
	for (TObjectIterator<UClass> It; It; ++It)
	{
		UClass* Class = *It;
		if (Class->IsChildOf(UItemModule::StaticClass()) && !Class->HasAnyClassFlags(CLASS_Abstract))
		{
			if (UItemModule* Module = Cast<UItemModule>(Class->GetDefaultObject()))
			{
				Module->BeginPlay(World);
			}
		}
	}
}
