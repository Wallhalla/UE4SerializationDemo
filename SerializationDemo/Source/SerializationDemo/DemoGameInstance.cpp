// Fill out your copyright notice in the Description page of Project Settings.

#include "SerializationDemo.h"
#include "DemoGameInstance.h"




void UDemoGameInstance::SaveGame()
{
	GEngine->AddOnScreenDebugMessage(1, 3, FColor::Red, "Saving game...");
}


void UDemoGameInstance::LoadGame()
{
	GEngine->AddOnScreenDebugMessage(1, 3, FColor::Red, "Loading game...");
}