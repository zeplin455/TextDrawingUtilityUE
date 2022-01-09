// Copyright (c) 2021 Zeplin455.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/TextureRenderTarget2D.h"
#include "XRThreadUtils.h"
#include "TextDrawingUtilityBPLibrary.generated.h"

UCLASS()
class UTextDrawingUtilityBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Process")
	static void CopyRenderTarget(UTextureRenderTarget2D* Source, UTextureRenderTarget2D* Dest);
};
