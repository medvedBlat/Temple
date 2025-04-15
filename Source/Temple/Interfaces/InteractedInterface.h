// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractedInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractedInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * An interface for actors that need to perform logic after interacting with interactive actors 
 */
class TEMPLE_API IInteractedInterface
{
	GENERATED_BODY()

	
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
	void Interacted(AActor* InteractActor);
};
