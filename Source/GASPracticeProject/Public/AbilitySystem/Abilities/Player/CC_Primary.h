// Copyright LaoYan

#pragma once

#include "CoreMinimal.h"
#include "CC_GameplayAbility.h"
#include "CC_Primary.generated.h"

/**
 * 
 */
UCLASS()
class GASPRACTICEPROJECT_API UCC_Primary : public UCC_GameplayAbility
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "Crash|Abilities")
	void HitBoxOverlapTest();

private:

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxRadius = 100.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxForwardOffset = 200.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Crash|Abilities")
	float HitBoxElevationOffset = 20.0f;
};
