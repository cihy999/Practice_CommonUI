// Fill out your copyright notice in the Description page of Project Settings.

#include "TestAnalogCursor.h"
// 
#include "Input/CommonUIActionRouterBase.h"

FTestAnalogCursor::FTestAnalogCursor(const UCommonUIActionRouterBase& InActionRouter)
	: FCommonAnalogCursor(InActionRouter)
{
	UE_LOG(LogTemp, Log, TEXT("Create FTestAnalogCursor."));
}

void FTestAnalogCursor::Initialize()
{
	FCommonAnalogCursor::Initialize();

	UE_LOG(LogTemp, Log, TEXT("Initialize FTestAnalogCursor."));
}

void FTestAnalogCursor::RefreshCursorVisibility()
{
	// 永遠顯示滑鼠
	// FIXME: PlayerController也都設Show，有時還是會閃來閃去...可能不只有這邊要改
	//FSlateApplication& SlateApp = FSlateApplication::Get();
	//if (TSharedPtr<FSlateUser> SlateUser = SlateApp.GetUser(GetOwnerUserIndex()))
	//{
	//	SlateApp.SetPlatformCursorVisibility(true);
	//	SlateUser->SetCursorVisibility(true);

	//	UE_LOG(LogTemp, Log, TEXT("SetCursorVisibility(true)"));
	//}
	FCommonAnalogCursor::RefreshCursorVisibility();
}
