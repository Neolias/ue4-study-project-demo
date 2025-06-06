// Copyright 2025 https://github.com/Neolias/ue4-study-project-demo/blob/main/LICENSE

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GA_CharacterDrawNextItem.generated.h"

UCLASS()
class XYZHOMEWORK_API UGA_CharacterDrawNextItem : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UGA_CharacterDrawNextItem();
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};
