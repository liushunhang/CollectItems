// Fill out your copyright notice in the Description page of Project Settings.

#include "CollectItems.h"
#include "CollectiblesUI.h"
#include "CollectItemsCharacter.h"
#include "CollectPlayerController.h"

void ACollectPlayerController::Possess(APawn * InPawn)
{
	Super::Possess(InPawn);
	//蓝图UI子类是否已经指定,创建蓝图，添加到视口
	if (CollectiblesWidgetBP)
	{
		CollectiblesWidget = CreateWidget<UCollectiblesUI>(this, CollectiblesWidgetBP);
		CollectiblesWidget->AddToViewport();
	}
}
void ACollectPlayerController::UpdateCollectItems(FText ItemName)
{
	ACollectItemsCharacter* Char = Cast<ACollectItemsCharacter>(GetPawn());
	//是否成功转换
	if (Char)
	{
		//通知UI更新Item列表
		CollectiblesWidget->AddItemToUI(ItemName);
	}
}