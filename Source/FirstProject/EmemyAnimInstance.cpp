// Fill out your copyright notice in the Description page of Project Settings.


#include "EmemyAnimInstance.h"
#include "Enemy.h"

void UEmemyAnimInstance::NativeInitializeAnimation()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		
		if (Pawn)
		{
			Enemy = Cast<AEnemy>(Pawn);

		}
	}

}

void UEmemyAnimInstance::UpdateAnimationProperties()
{
	if (Pawn == nullptr)
	{
		Pawn = TryGetPawnOwner();
		if (Pawn)
		{
			Enemy = Cast<AEnemy>(Pawn);
		}
	}
	if (Pawn)
	{
		FVector Speed = Pawn->GetVelocity();
		FVector LateralSpeed = FVector(Speed.X, Speed.Y, 0.f);
		MovementSpeed = LateralSpeed.Size();
	}
}
