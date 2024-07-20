// Fill out your copyright notice in the Description page of Project Settings.

#include "TestCommonUIActionRouter.h"
#include "Framework/Application/SlateApplication.h"
#include "TestAnalogCursor.h"

TSharedRef<FCommonAnalogCursor> UTestCommonUIActionRouter::MakeAnalogCursor() const
{
	return FCommonAnalogCursor::CreateAnalogCursor<FTestAnalogCursor>(*this);
}
