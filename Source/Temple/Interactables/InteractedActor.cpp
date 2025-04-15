// Fill out your copyright notice in the Description page of Project Settings.


#include "../Interactables/InteractedActor.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
AInteractedActor::AInteractedActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static mesh"));
}

void AInteractedActor::Interacted_Implementation(AActor* InteractedActor)
{
}

// Called when the game starts or when spawned
void AInteractedActor::BeginPlay()
{
	Super::BeginPlay();
	
}


