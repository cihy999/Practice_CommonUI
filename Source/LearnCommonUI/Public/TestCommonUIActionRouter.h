// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Input/CommonUIActionRouterBase.h"
#include "TestCommonUIActionRouter.generated.h"

/**
 * 
 */
UCLASS()
class LEARNCOMMONUI_API UTestCommonUIActionRouter : public UCommonUIActionRouterBase
{
	GENERATED_BODY()
	
// Begin Base Override ================================================================
protected:
	virtual TSharedRef<FCommonAnalogCursor> MakeAnalogCursor() const override;
	virtual void PostAnalogCursorCreate() override;

// End Base Override ==================================================================
};
