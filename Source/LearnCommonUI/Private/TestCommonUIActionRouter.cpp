// Fill out your copyright notice in the Description page of Project Settings.

#include "TestCommonUIActionRouter.h"
#include "Input/CommonUIInputSettings.h"
#include "Input/CommonAnalogCursor.h"
#include "Framework/Application/SlateApplication.h"

void UTestCommonUIActionRouter::PostAnalogCursorCreate()
{
	RegisterAnalogCursorTick();

	// �Y�Ϥ���CommonGameViewportClient�A�]�n�ϥ�FCommonAnalogCursor
	int32 processorIndex = UCommonUIInputSettings::Get().GetAnalogCursorSettings().PreprocessorPriority;
	FSlateApplication::Get().RegisterInputPreProcessor(AnalogCursor, 2);
}
