// Copyright LaoYan

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/Character.h"
#include "CC_BaseCharacter.generated.h"

UCLASS(Abstract)
class GASPRACTICEPROJECT_API ACC_BaseCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACC_BaseCharacter();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
};
