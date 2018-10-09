// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Engine/Canvas.h"
#include "Engine/Public/CanvasItem.h"
#include "FPSHUD.generated.h"


/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	//texture to draw in center of screen
	UPROPERTY(EditDefaultsOnly)
		UTexture2D* CrosshairTexture;

public:
	//Draw call for HUD
	virtual void DrawHUD() override;
	
};
