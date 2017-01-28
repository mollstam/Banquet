
#include "Banquet.h"
#include "BanquetPlayerController.h"

FString ABanquetPlayerController::SomeFunctionWithOutput_Implementation(int32 IntIn)
{
	UE_LOG(LogTemp, Log, TEXT("SomeFunctionWithOutput(%d)"), IntIn);
	return TEXT("Hello World");
}

void ABanquetPlayerController::SomeFunctionVoid_Implementation(int32 IntIn)
{
	UE_LOG(LogTemp, Log, TEXT("SomeFunctionVoid(%d)"), IntIn);
}
