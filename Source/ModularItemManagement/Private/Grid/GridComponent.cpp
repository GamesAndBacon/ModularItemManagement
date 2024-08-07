// Fill out your copyright notice in the Description page of Project Settings.


#include "Grid/GridComponent.h"


// Sets default values for this component's properties
UGridComponent::UGridComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGridComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UGridComponent::PostInitProperties()
{
	Super::PostInitProperties();
	
	if (GetOwner())
	{
		OwningGrid = Cast<AGridManager>(GetOwner());
	}
}


// Called every frame
void UGridComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

