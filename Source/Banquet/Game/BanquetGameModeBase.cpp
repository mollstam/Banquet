
#include "Banquet.h"
#include "BanquetGameModeBase.h"
#include "Controller/BanquetPlayerController.h"
#include "BanquetWorldSettings.h"

void ABanquetGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	ABanquetWorldSettings* WorldSettings = CastChecked<ABanquetWorldSettings>(GetWorldSettings());
	ABanquetPlayerController* BPC = CastChecked<ABanquetPlayerController>(NewPlayer);
	check(WorldSettings->DefaultCameraActor);
	BPC->SetViewTarget(WorldSettings->DefaultCameraActor);
}
