
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temple/Interfaces/InteractInterface.h"
#include "InteractableActor.generated.h"

UCLASS()
class TEMPLE_API AInteractableActor : public AActor, public IInteractInterface
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AInteractableActor();
	virtual void Interact_Implementation(AActor* InteractActor) override;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* MeshComponent;

	// Name of object for UI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	FString InteractableName;

	// Object description for UI
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	FString InteractableDescription;

};
