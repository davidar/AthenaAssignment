// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UtilityFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ATHENAASSIGNMENT_API UUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static void MakeRandomLocationDirection(const FVector& BoundLower, const FVector& BoundUpper, FVector& Location, FRotator& Direction);
};
