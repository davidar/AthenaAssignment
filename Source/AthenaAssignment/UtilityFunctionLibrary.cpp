// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilityFunctionLibrary.h"

void UUtilityFunctionLibrary::MakeRandomLocationDirection(const FVector& BoundLower, const FVector& BoundUpper, FVector& Location, FRotator& Direction) {
	Location = FVector(FMath::RandRange(BoundLower.X, BoundUpper.X), FMath::RandRange(BoundLower.Y, BoundUpper.Y), FMath::RandRange(BoundLower.Z, BoundUpper.Z));
	Direction = FRotator(FMath::RandRange(-60, -30), FMath::RandRange(0, 360), 0);
}

