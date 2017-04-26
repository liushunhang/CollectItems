// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ACollectible.generated.h"

UCLASS()
class COLLECTITEMS_API AACollectible : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AACollectible();

	//ItemµÄÅö×²¼ì²â
	UFUNCTION()
	void Overlap(AActor* Actor,AActor* Other);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
#pragma region ItemÊôÐÔ
	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* SM;
	UPROPERTY(VisibleAnywhere)
		URotatingMovementComponent* RotatingComp;
#pragma endregion



	
	
};
