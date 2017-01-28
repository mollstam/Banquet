
#pragma once

#include "BanquetPlayerController.generated.h"

UCLASS(BlueprintType)
class ABanquetPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, Category = "Test")
	FString SomeFunctionWithOutput(int32 IntIn);

	UFUNCTION(BlueprintNativeEvent, Category = "Test")
	void SomeFunctionVoid(int32 IntIn);

};