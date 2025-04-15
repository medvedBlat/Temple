
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};
	// Interface for interactions with actors.
class TEMPLE_API IInteractInterface
{
	GENERATED_BODY()
	// A function that all interactive actors must implement. For interact press "E".
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interaction")
    void Interact(AActor* InteractActor);
};
