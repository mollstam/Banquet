
#include "Banquet.h"
#include "BanquetCharacter.h"
#include "Components/InputComponent.h"

void ABanquetCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Character_MoveUp", this, &ABanquetCharacter::MoveUp);
	PlayerInputComponent->BindAxis("Character_MoveRight", this, &ABanquetCharacter::MoveRight);
}

void ABanquetCharacter::MoveUp(float Val)
{
	static FVector MoveUpDir(0, 1, 0);
	AddMovementInput(MoveUpDir, Val);
}

void ABanquetCharacter::MoveRight(float Val)
{
	static FVector MoveRightDir(1, 0, 0);
	AddMovementInput(MoveRightDir, Val);
}
