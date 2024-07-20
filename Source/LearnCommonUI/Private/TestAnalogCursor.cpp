// Fill out your copyright notice in the Description page of Project Settings.

#include "TestAnalogCursor.h"
#include "Input/CommonUIActionRouterBase.h"
#include "CommonInputTypeEnum.h"

FTestAnalogCursor::FTestAnalogCursor(const UCommonUIActionRouterBase& InActionRouter)
	: FCommonAnalogCursor(InActionRouter)
{
	
}

void FTestAnalogCursor::RefreshCursorVisibility()
{
	// 測試
	const bool bShowCursor = bIsAnalogMovementEnabled || ActionRouter.ShouldAlwaysShowCursor() || ActiveInputMethod == ECommonInputType::MouseAndKeyboard;
	FSlateApplication& SlateApp = FSlateApplication::Get();
	TSharedPtr<FSlateUser> SlateUser = SlateApp.GetUser(GetOwnerUserIndex());

	if (SlateUser.IsValid())
	{
		if (SlateUser == SlateApp.GetCursorUser() && !bShowCursor)
		{
			SlateApp.SetPlatformCursorVisibility(false);
		}

		SlateUser->SetCursorVisibility(bShowCursor);
	}
}
