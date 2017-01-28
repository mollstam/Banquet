
#pragma once

#include "BanquetCharacter.generated.h"

UCLASS(BlueprintType)
class ABanquetCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	// Begin ACharacter interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End ACharacter interface

protected:

	void MoveUp(float Val);
	void MoveRight(float Val);

};