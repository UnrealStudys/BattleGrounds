// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleGrounds.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("%s tank is being controlled"), *ControlledTank->GetName());
	}
	UE_LOG(LogTemp, Warning, TEXT("Player controller begin play"));
}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}
