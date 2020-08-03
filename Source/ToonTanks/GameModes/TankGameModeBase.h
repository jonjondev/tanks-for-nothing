// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameModeBase.generated.h"


class AActor;
class APawnTurret;
class APawnTank;

UCLASS()
class TOONTANKS_API ATankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

    void ActorDied(AActor* DeadActor);

protected:

    virtual void BeginPlay() override;

    UFUNCTION(BlueprintImplementableEvent)
    void GameStart();

    UFUNCTION(BlueprintImplementableEvent)
    void GameOver(bool PlayerWon);

private:

    APawnTank* PlayerTank;

    int32 TargetTurrets = 0;

    void HandleGameStart();

    void HandleGameOver(bool PlayerWon);

};