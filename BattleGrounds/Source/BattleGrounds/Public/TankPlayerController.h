// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEGROUNDS_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()


	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;
};
