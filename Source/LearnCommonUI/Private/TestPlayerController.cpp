// Fill out your copyright notice in the Description page of Project Settings.

#include "TestPlayerController.h"

void ATestPlayerController::BeginPlay()
{
	Super::BeginPlay();

	SetShowMouseCursor(true);
	if (GetLocalPlayer())
	{
		UGameViewportClient* viewport = GetLocalPlayer()->ViewportClient;
		if (viewport)
		{
			viewport->SetHideCursorDuringCapture(false);
		}
	}
}
