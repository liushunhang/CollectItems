// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Blueprint/UserWidget.h"
#include "CollectiblesUI.generated.h"

/**
 * 
 */
UCLASS()
class COLLECTITEMS_API UCollectiblesUI : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintImplementableEvent)
		void AddItemToUI();

	UPROPERTY(BlueprintReadOnly)
		FText ItemtoAdd;
	
public:
	void AddItemToUI(FText ItemName);
};
