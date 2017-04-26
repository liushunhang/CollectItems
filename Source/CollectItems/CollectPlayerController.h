// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "CollectPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class COLLECTITEMS_API ACollectPlayerController : public APlayerController
{
	GENERATED_BODY()
private:
	//��UI���в���������
	class UCollectiblesUI* CollectiblesWidget;
	
protected:
	//C++ui���� ��ͼ
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UCollectiblesUI> CollectiblesWidgetBP;
public:
	//������ҽ�ɫʱ��ִ��
	virtual void Possess(APawn *InPawn) override;
	//֪ͨUI�������Item
	void UpdateCollectItems(FText ItemName);
	
};
