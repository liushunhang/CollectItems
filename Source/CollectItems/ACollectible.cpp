// Fill out your copyright notice in the Description page of Project Settings.

#include "CollectItems.h"
#include "CollectItemsCharacter.h"
#include "ACollectible.h"


// Sets default values
AACollectible::AACollectible()
{
	SM = CreateDefaultSubobject<UStaticMeshComponent>(FName("SM"));
	RotatingComp = CreateDefaultSubobject<URotatingMovementComponent>(FName("RotaingComp"));

}

void AACollectible::Overlap(AActor* Actor, AActor* Other)
{
	
	ACollectItemsCharacter* Char = Cast<ACollectItemsCharacter>(Other);
	if (Char)
	{
		//Get the name of our item
		FText Text = FText::FromString(GetName());
		//Add the item to our UI
		Char->AddItemToUI(Text);
		Destroy();
	}
}

// Called when the game starts or when spawned
void AACollectible::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AACollectible::Overlap);
}

