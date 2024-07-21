// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomizerComponent.h"
#include "Engine/Engine.h"

void UCustomizerComponent::UpdateCustomization(FName type, UObject* payload)
{
	UCustomizer** customp = Customizers.Find(type);
	if (customp == 0)
	{
		FString ErrorMsg = "CustomizerComponent on " + GetOuter()->GetClass()->GetName() + " couldn't find an Customizer for " + type.ToString() + ". Fix your Customizer map to resolve this issue.";
		GEngine->AddOnScreenDebugMessage(-1, 300.f, FColor::Red, ErrorMsg);
		return;
	}
	UCustomizer* custom = *customp;
	if (custom == 0)
	{
		FString ErrorMsg = "CustomizerComponent on " + GetOuter()->GetClass()->GetName() + " found an entry for " + type.ToString() + " No Customizer event foundH";
		GEngine->AddOnScreenDebugMessage(-1, 300.f, FColor::Red, ErrorMsg);
		return;
	}
	custom->Customize(GetOwner(),type, payload);
}

