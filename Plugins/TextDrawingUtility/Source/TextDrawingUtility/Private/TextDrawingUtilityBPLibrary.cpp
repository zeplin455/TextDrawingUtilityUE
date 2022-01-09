// Copyright (c) 2021 Zeplin455.

#include "TextDrawingUtilityBPLibrary.h"
#include "TextDrawingUtility.h"


void UTextDrawingUtilityBPLibrary::CopyRenderTarget(UTextureRenderTarget2D* Source, UTextureRenderTarget2D* Dest)
{
    ExecuteOnRenderThread([Source, Dest] {
        check(IsInRenderingThread());
        // Get global RHI command list 
        FRHICommandListImmediate& RHICmdList = GRHICommandList.GetImmediateCommandList();
        if (Source && Dest)
        {
            FTexture2DRHIRef destTexture = Dest->GetRenderTargetResource()->GetRenderTargetTexture();
            FTexture2DRHIRef sourceTexture = Source->GetRenderTargetResource()->GetRenderTargetTexture();

            FResolveParams param;
            RHICmdList.CopyToResolveTarget(sourceTexture, destTexture, param);
        }
        });
}

