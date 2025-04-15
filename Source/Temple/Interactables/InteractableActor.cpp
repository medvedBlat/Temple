
#include "../Interactables/InteractableActor.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
AInteractableActor::AInteractableActor()
{
	PrimaryActorTick.bCanEverTick = false;
	// Creating and setup a MeshComponent
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	// Set the default values
	InteractableName = TEXT("Interactable Object");
	InteractableDescription = TEXT("An interactive object in the scene.");
}

void AInteractableActor::Interact_Implementation(AActor* InteractActor)
{
	UE_LOG(LogTemp, Log, TEXT("%s was interacted with by %s"), *InteractableName, *InteractActor->GetName());
}

	// Called when the game starts or when spawned
void AInteractableActor::BeginPlay()
{
	Super::BeginPlay();
}


