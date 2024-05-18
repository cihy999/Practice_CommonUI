// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Input/CommonAnalogCursor.h"

/**
 * 
 */
class LEARNCOMMONUI_API FTestAnalogCursor : public FCommonAnalogCursor
{
// Begin Base Override ================================================================
public:
	FTestAnalogCursor(const UCommonUIActionRouterBase& InActionRouter);
	virtual void Initialize() override;

protected:
	virtual void RefreshCursorVisibility() override;

// End Base Override ==================================================================
};
