
#pragma once

#include "GameFramework/GameModeBase.h"
#include "BanquetGameModeBase.generated.h"

UCLASS()
class BANQUET_API ABanquetGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	// Begin AGameModeBase interface
	virtual void PostLogin(APlayerController* NewPlayer) override;
	// End AGameModeBase interface

};
