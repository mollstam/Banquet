
#pragma once

#include "BanquetWorldSettings.generated.h"

UCLASS()
class ABanquetWorldSettings : public AWorldSettings
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Camera")
	class ACameraActor* DefaultCameraActor;

};
