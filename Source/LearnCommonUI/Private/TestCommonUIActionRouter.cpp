// Fill out your copyright notice in the Description page of Project Settings.

#include "TestCommonUIActionRouter.h"
#include "Input/CommonUIInputSettings.h"
#include "Input/CommonAnalogCursor.h"
#include "Framework/Application/SlateApplication.h"
// 
#include "TestAnalogCursor.h"

TSharedRef<FCommonAnalogCursor> UTestCommonUIActionRouter::MakeAnalogCursor() const
{
	return FCommonAnalogCursor::CreateAnalogCursor<FTestAnalogCursor>(*this);
}

void UTestCommonUIActionRouter::PostAnalogCursorCreate()
{
	RegisterAnalogCursorTick();

	// 即使不用CommonGameViewportClient，也要使用FCommonAnalogCursor
	int32 processorIndex = UCommonUIInputSettings::Get().GetAnalogCursorSettings().PreprocessorPriority;
	FSlateApplication::Get().RegisterInputPreProcessor(AnalogCursor, 2);
}
