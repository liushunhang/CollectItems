// Fill out your copyright notice in the Description page of Project Settings.

#include "CollectItems.h"
#include "CollectiblesUI.h"
#include "CollectItemsCharacter.h"
#include "CollectPlayerController.h"

void ACollectPlayerController::Possess(APawn * InPawn)
{
	Super::Possess(InPawn);
	//��ͼUI�����Ƿ��Ѿ�ָ��,������ͼ����ӵ��ӿ�
	if (CollectiblesWidgetBP)
	{
		CollectiblesWidget = CreateWidget<UCollectiblesUI>(this, CollectiblesWidgetBP);
		CollectiblesWidget->AddToViewport();
	}
}
void ACollectPlayerController::UpdateCollectItems(FText ItemName)
{
	ACollectItemsCharacter* Char = Cast<ACollectItemsCharacter>(GetPawn());
	//�Ƿ�ɹ�ת��
	if (Char)
	{
		//֪ͨUI����Item�б�
		CollectiblesWidget->AddItemToUI(ItemName);
	}
}