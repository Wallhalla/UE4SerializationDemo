// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/GameInstance.h"
#include "DemoGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SERIALIZATIONDEMO_API UDemoGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = SaveLoad)
	static void SaveGame();

	UFUNCTION(BlueprintCallable, Category = SaveLoad)
	static void LoadGame();

	
};
