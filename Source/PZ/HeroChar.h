#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HeroChar.generated.h"

UCLASS()
class PZ_API AHeroChar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AHeroChar();

	UPROPERTY(BlueprintReadWrite)
	int32 Health;

	UPROPERTY(BlueprintReadWrite)
	int32 HealthUp;

	UPROPERTY(BlueprintReadWrite)
	int32 Stamina;
	
	FTimerHandle HealthRecoveryHandle;

	UPROPERTY(BlueprintReadWrite)
	float RecoveryHealthDuration;

	void RecoveryHeath();

	FTimerHandle DamageHandle;
	
	UPROPERTY(BlueprintReadWrite)
	float DamageRate;

	UFUNCTION(BlueprintCallable)
	void GetDamage();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
