// Vince Petrelli All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/WarriorHeroGameplayAbility.h"
#include "HeroGameplayAbility_PickUpStones.generated.h"

/**
 * 
 */
UCLASS()
class WARRIOR_API UHeroGameplayAbility_PickUpStones : public UWarriorHeroGameplayAbility
{
	GENERATED_BODY()
	
protected:
	//~ Begin UGameplayAbility Interface
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	//~ End UGameplayAbility Interface


};