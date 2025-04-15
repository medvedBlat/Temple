// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Temple/Interfaces/InteractedInterface.h"
#include "InteractedActor.generated.h"

UCLASS()
class TEMPLE_API AInteractedActor : public AActor, public IInteractedInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractedActor();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* MeshComponent;

	virtual void Interacted_Implementation(AActor* InteractedActor) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
