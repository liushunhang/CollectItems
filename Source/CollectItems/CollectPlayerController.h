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
	//对UI进行操作的引用
	class UCollectiblesUI* CollectiblesWidget;
	
protected:
	//C++ui子类 蓝图
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<UCollectiblesUI> CollectiblesWidgetBP;
public:
	//当绑定玩家角色时候执行
	virtual void Possess(APawn *InPawn) override;
	//通知UI更新这个Item
	void UpdateCollectItems(FText ItemName);
	
};
