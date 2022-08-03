// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Collider.generated.h"

UCLASS()
class FIRSTPROJECT_API ACollider : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACollider();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class UStaticMeshComponent* MeshComponent;
	
	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class USphereComponent* SphereComponent;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnywhere, Category = "Mesh")
	class USpringArmComponent* SpringArm;

	FORCEINLINE UStaticMeshComponent* GetMeshComponent() { return MeshComponent; } // getter for MeshComponent
	FORCEINLINE void SetMeshComponent(UStaticMeshComponent* Mesh) { MeshComponent = Mesh; } // setter MeshComponent
	
	FORCEINLINE USphereComponent* GetSphereComponent() { return SphereComponent; } // getter for Collision SphereComponent
	FORCEINLINE void SetSphereComponent(USphereComponent* Sphere) { SphereComponent = Sphere; } // setter for Collision SphereComponent

	FORCEINLINE UCameraComponent* GetCameraComponent() { return Camera; } // getter for Camera
	FORCEINLINE void SetCameraComponent(UCameraComponent* InCamera) { Camera = InCamera; } // setter for Camera
	
	FORCEINLINE USpringArmComponent* GetSpringArmComponent() { return SpringArm; } // getter for SpingArm
	FORCEINLINE void SetSpringArmComponent(USpringArmComponent* InSpringArm) { SpringArm = InSpringArm; } // setter for SpringArm
	
private:
	
	void MoveForward(float input);
	void MoveRight(float input);

};
