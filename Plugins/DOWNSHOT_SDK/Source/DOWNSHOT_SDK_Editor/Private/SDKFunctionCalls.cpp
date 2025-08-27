// Copyright 2024 CMVR Game Studios LLC. All rights reserved.


#include "SDKFunctionCalls.h"
#include "Misc/ConfigCacheIni.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/Paths.h"
#include "Misc/FeedbackContext.h"
#include "HAL/PlatformProcess.h"
#include "IAssetTools.h"
#include "FileHelpers.h"
#include "Editor.h"
#include "Misc/OutputDevice.h"
#include "Interfaces/IPluginManager.h"
#include "Serialization/JsonWriter.h"
#include "Runtime/AssetRegistry/Public/AssetRegistry/AssetRegistryModule.h"
#include "Serialization/JsonSerializer.h"

#define WIN32_LEAN_AND_MEAN
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include <shellapi.h>
#include "Windows/HideWindowsPlatformTypes.h"


void USDKFunctionCalls::ConfigureProjectSettings()
{
    FString ConfigFilePath = FPaths::Combine(FPaths::ProjectConfigDir(), TEXT("DefaultEngine.ini"));

    if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*ConfigFilePath))
    {
        GConfig->LoadFile(ConfigFilePath);

        // Hardware Targeting Settings
        GConfig->SetString(TEXT("/Script/HardwareTargeting.HardwareTargetingSettings"), TEXT("TargetedHardwareClass"), TEXT("Mobile"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/HardwareTargeting.HardwareTargetingSettings"), TEXT("AppliedTargetedHardwareClass"), TEXT("Mobile"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/HardwareTargeting.HardwareTargetingSettings"), TEXT("DefaultGraphicsPerformance"), TEXT("Scalable"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/HardwareTargeting.HardwareTargetingSettings"), TEXT("AppliedDefaultGraphicsPerformance"), TEXT("Scalable"), ConfigFilePath);

        // Fixes bug with skeltal mesh optimization
        GConfig->SetString(TEXT("/Script/Engine.SkeletalMeshComponent"), TEXT("VisibilityBasedAnimTickOption"), TEXT("OnlyTickPoseWhenRendered"), ConfigFilePath);

        // Renderer Settings
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.ShadingPath"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.SupportGPUScene"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.AntiAliasing"), TEXT("3"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.FloatPrecisionMode"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.AllowDitheredLODTransition"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.VirtualTextures"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DiscardUnusedQuality"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Shaders.CompressionFormat"), TEXT("2"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.AllowOcclusionQueries"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.MinScreenRadiusForLights"), TEXT("0.030000"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.MinScreenRadiusForDepthPrepass"), TEXT("0.030000"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.MinScreenRadiusForCSMDepth"), TEXT("0.010000"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.PrecomputedVisibilityWarning"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.TextureStreaming"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("Compat.UseDXT5NormalMaps"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.VirtualTextures"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.VT.EnableAutoImport"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.VirtualTexturedLightmaps"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.VT.AnisotropicFiltering"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("bEnableVirtualTextureOpacityMask"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.VT.TileSize"), TEXT("128"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.UseGPUSceneTexture"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.VT.TileBorderSize"), TEXT("4"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.vt.FeedbackFactor"), TEXT("16"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("WorkingColorSpaceChoice"), TEXT("sRGB"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("RedChromaticityCoordinate"), TEXT("(X=0.640000,Y=0.330000)"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("GreenChromaticityCoordinate"), TEXT("(X=0.300000,Y=0.600000)"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("BlueChromaticityCoordinate"), TEXT("(X=0.150000,Y=0.060000)"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("WhiteChromaticityCoordinate"), TEXT("(X=0.312700,Y=0.329000)"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.ClearCoatNormal"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DynamicGlobalIlluminationMethod"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.ReflectionMethod"), TEXT("2"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.ReflectionCaptureResolution"), TEXT("128"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.ReflectionEnvironmentLightmapMixBasedOnRoughness"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Lumen.HardwareRayTracing"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Lumen.HardwareRayTracing.LightingMode"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Lumen.TranslucencyReflections.FrontLayer.EnableForProject"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Lumen.TraceMeshSDFs"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Shadow.Virtual.Enable"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.RayTracing"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.RayTracing.Shadows"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.RayTracing.Skylight"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.RayTracing.UseTextureLod"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.PathTracing"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.GenerateMeshDistanceFields"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DistanceFields.DefaultVoxelDensity"), TEXT("0.200000"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Nanite.ProjectEnabled"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.AllowStaticLighting"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.NormalMapsForStaticLighting"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.ForwardShading"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.VertexFoggingForOpaque"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SeparateTranslucency"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.TranslucentSortPolicy"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("TranslucentSortAxis"), TEXT("(X=0.000000,Y=-1.000000,Z=0.000000)"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("vr.VRS.HMDFixedFoveationLevel"), TEXT("2"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("vr.VRS.HMDFixedFoveationDynamic"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.CustomDepth"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.CustomDepthTemporalAAJitter"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.PostProcessing.PropagateAlpha"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.Bloom"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.AmbientOcclusion"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.AmbientOcclusionStaticFraction"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.AutoExposure"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.AutoExposure.Method"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.AutoExposure.Bias"), TEXT("1.000000"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.MotionBlur"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.LensFlare"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.TemporalAA.Upsampling"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.AntiAliasingMethod"), TEXT("3"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.MSAACount"), TEXT("4"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultFeature.LightUnits"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DefaultBackBufferPixelFormat"), TEXT("4"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Shadow.UnbuiltPreviewInGame"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.StencilForLODDither"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.EarlyZPass"), TEXT("3"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.EarlyZPassOnlyMaterialMasking"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Shadow.CSMCaching"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.DBuffer"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.ClearSceneMethod"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.VelocityOutputPass"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Velocity.EnableVertexDeformation"), TEXT("2"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SelectiveBasePassOutputs"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("bDefaultParticleCutouts"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("fx.GPUSimulationTextureSizeX"), TEXT("1024"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("fx.GPUSimulationTextureSizeY"), TEXT("1024"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.AllowGlobalClipPlane"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.GBufferFormat"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.MorphTarget.Mode"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.GPUCrashDebugging"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("vr.InstancedStereo"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.MobileHDR"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("vr.MobileMultiView"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.UseHWsRGBEncoding"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("vr.RoundRobinOcclusion"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.MeshStreaming"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.HeterogeneousVolumes"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.WireframeCullThreshold"), TEXT("5.000000"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SupportStationarySkylight"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SupportLowQualityLightmaps"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SupportPointLightWholeSceneShadows"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SupportSkyAtmosphere"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SupportSkyAtmosphereAffectsHeightFog"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SupportCloudShadowOnForwardLitTranslucent"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Shadow.TranslucentPerObject.ProjectEnabled"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Water.SingleLayerWater.SupportCloudShadow"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Substrate"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Substrate.OpaqueMaterialRoughRefraction"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Substrate.Debug.AdvancedVisualizationShaders"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Material.RoughDiffuse"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Material.EnergyConservation"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.OIT.SortedPixels"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SkinCache.CompileShaders"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SkinCache.SkipCompilingGPUSkinVF"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SkinCache.DefaultBehavior"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SkinCache.SceneMemoryLimitInMB"), TEXT("128.000000"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.EnableStaticAndCSMShadowReceivers"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.EnableMovableLightCSMShaderCulling"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.Forward.EnableLocalLights"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.Forward.EnableClusteredReflections"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.EnableNoPrecomputedLightingCSMShader"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.AllowDistanceFieldShadows"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.AllowMovableDirectionalLights"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.EnableMovableSpotlightsShadow"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.GPUSkin.Support16BitBoneIndex"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.GPUSkin.Limit2BoneInfluences"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SupportDepthOnlyIndexBuffers"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.SupportReversedIndexBuffers"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.AmbientOcclusion"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.GPUSkin.UnlimitedBoneInfluences"), TEXT("False"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.GPUSkin.UnlimitedBoneInfluencesThreshold"), TEXT("8"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("DefaultBoneInfluenceLimit"), TEXT("(Default=0,PerPlatform=())"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("MaxSkinBones"), TEXT("(Default=65536,PerPlatform=(('Mobile', 256)))"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.PlanarReflectionMode"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("r.Mobile.SupportsGen4TAA"), TEXT("True"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("bStreamSkeletalMeshLODs"), TEXT("(Default=False,PerPlatform=())"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("bDiscardSkeletalMeshOptionalLODs"), TEXT("(Default=False,PerPlatform=())"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("VisualizeCalibrationColorMaterialPath"), TEXT("/Engine/EngineMaterials/PPM_DefaultCalibrationColor.PPM_DefaultCalibrationColor"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("VisualizeCalibrationCustomMaterialPath"), TEXT("None"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/Engine.RendererSettings"), TEXT("VisualizeCalibrationGrayscaleMaterialPath"), TEXT("/Engine/EngineMaterials/PPM_DefaultCalibrationGrayscale.PPM_DefaultCalibrationGrayscale"), ConfigFilePath);

        //Android Settings
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("StoreVersion"), TEXT("1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("StoreVersionOffsetArm64"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("StoreVersionOffsetX8664"), TEXT("0"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("VersionDisplayName"), TEXT("0.1"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MinSDKVersion"), TEXT("32"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("TargetSDKVersion"), TEXT("32"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("InstallLocation"), TEXT("InternalOnly"), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableLint"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bPackageDataInsideApk"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bCreateAllPlatformsInstall"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bDisableVerifyOBBOnStartUp"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bForceSmallOBBFiles"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bAllowLargeOBBFiles"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bAllowPatchOBBFile"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bAllowOverflowOBBFiles"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bUseExternalFilesDir"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bPublicLogFiles"), true, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("Orientation"), TEXT("Landscape"), ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MaxAspectRatio"), 2.1f, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bUseDisplayCutout"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bRestoreNotificationsOnReboot"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bFullScreen"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableNewKeyboard"), true, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("DepthBufferPreference"), TEXT("Default"), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bValidateTextureFormats"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bForceCompressNativeLibs"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableAdvancedBinaryCompression"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableBundle"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableUniversalAPK"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bBundleABISplit"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bBundleLanguageSplit"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bBundleDensitySplit"), true, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("ExtraApplicationSettings"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("ExtraActivitySettings"), TEXT(""), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bAndroidVoiceEnabled"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableMulticastSupport"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bRemoveOSIG"), false, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("KeyStore"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("KeyAlias"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("KeyStorePassword"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("KeyPassword"), TEXT(""), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bBuildForArm64"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bBuildForX8664"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bBuildForES31"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bSupportsVulkan"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bSupportsVulkanSM5"), false, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("DebugVulkanLayerDirectory"), TEXT("(Path=\"\")"), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bAndroidOpenGLSupportsBackbufferSampling"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bDetectVulkanByDefault"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bBuildWithHiddenSymbolVisibility"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bDisableStackProtector"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bDisableLibCppSharedDependencyValidation"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bSaveSymbols"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bStripShaderReflection"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableGooglePlaySupport"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bUseGetAccounts"), false, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("GamesAppID"), TEXT(""), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableSnapshots"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bSupportAdMob"), true, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AdMobAppID"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("TagForChildDirectedTreatment"), TEXT("TAG_FOR_CHILD_DIRECTED_TREATMENT_UNSPECIFIED"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("TagForUnderAgeOfConsent"), TEXT("TAG_FOR_UNDER_AGE_OF_CONSENT_UNSPECIFIED"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MaxAdContentRating"), TEXT("MAX_AD_CONTENT_RATING_G"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AdMobAdUnitID"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("GooglePlayLicenseKey"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("GCMClientSenderID"), TEXT(""), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bShowLaunchImage"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bAllowIMU"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bAllowControllers"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bBlockAndroidKeysOnControllers"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bControllersBlockDeviceFeedback"), false, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AndroidAudio"), TEXT("Default"), ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AudioSampleRate"), 44100, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AudioCallbackBufferFrameSize"), 1024, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AudioNumBuffersToEnqueue"), 4, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AudioMaxChannels"), 0, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AudioNumSourceWorkers"), 0, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("SpatializationPlugin"), TEXT("Built-in Spatialization"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("SourceDataOverridePlugin"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("ReverbPlugin"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("OcclusionPlugin"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("CompressionOverrides"), TEXT("(bOverrideCompressionTimes=False,DurationThreshold=5.000000,MaxNumRandomBranches=0,SoundCueQualityIndex=0)"), ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("CacheSizeKB"), 0, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MaxChunkSizeOverrideKB"), 0, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bResampleForDevice"), false, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("SoundCueCookQualityIndex"), -1, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MaxSampleRate"), 0.0f, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("HighSampleRate"), 0.0f, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MedSampleRate"), 0.0f, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("LowSampleRate"), 0.0f, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MinSampleRate"), 0.0f, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("CompressionQualityModifier"), 0.0f, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AutoStreamingThreshold"), 0.0f, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("AndroidGraphicsDebugger"), TEXT("None"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("MaliGraphicsDebuggerPath"), TEXT("(Path=\"\")"), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableMaliPerfCounters"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bMultiTargetFormat_ETC2"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bMultiTargetFormat_DXT"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bMultiTargetFormat_ASTC"), true, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("TextureFormatPriority_ETC2"), 0.2f, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("TextureFormatPriority_DXT"), 0.6f, ConfigFilePath);
        GConfig->SetFloat(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("TextureFormatPriority_ASTC"), 0.9f, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("SDKAPILevelOverride"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("NDKAPILevelOverride"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("BuildToolsOverride"), TEXT(""), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bStreamLandscapeMeshLODs"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/AndroidRuntimeSettings.AndroidRuntimeSettings"), TEXT("bEnableDomStorage"), false, ConfigFilePath);

        // Save the changes
        GConfig->Flush(false, ConfigFilePath);
    }

    ConfigFilePath = FPaths::Combine(FPaths::ProjectConfigDir(), TEXT("DefaultGame.ini"));

    if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*ConfigFilePath))
    {
        GConfig->LoadFile(ConfigFilePath);

        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("Build"), TEXT("IfProjectHasCode"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("BuildConfiguration"), TEXT("PPBC_Shipping"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("BuildTarget"), TEXT(""), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("FullRebuild"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("ForDistribution"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("IncludeDebugFiles"), false, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("BlueprintNativizationMethod"), TEXT("Disabled"), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bIncludeNativizedAssetsInProjectGeneration"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bExcludeMonolithicEngineHeadersInNativizedCode"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("UsePakFile"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bUseIoStore"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bUseZenStore"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bMakeBinaryConfig"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bGenerateChunks"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bGenerateNoChunks"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bChunkHardReferencesOnly"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bForceOneChunkPerFile"), false, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("MaxChunkSize"), 0, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bBuildHttpChunkInstallData"), false, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("HttpChunkInstallDataDirectory"), TEXT("(Path="")"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("WriteBackMetadataToAssetRegistry"), TEXT("Disabled"), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bCompressed"), true, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageCompressionFormat"), TEXT("Oodle"), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bForceUseProjectCompressionFormatIgnoreHardwareOverride"), false, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageAdditionalCompressionOptions"), TEXT(""), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageCompressionMethod"), TEXT("Kraken"), ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageCompressionLevel_DebugDevelopment"), 4, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageCompressionLevel_TestShipping"), 5, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageCompressionLevel_Distribution"), 7, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageCompressionMinBytesSaved"), 1024, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageCompressionMinPercentSaved"), 5, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bPackageCompressionEnableDDC"), false, ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("PackageCompressionMinSizeToConsiderDDC"), 0, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("HttpChunkInstallDataVersion"), TEXT(""), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("IncludePrerequisites"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("IncludeAppLocalPrerequisites"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bShareMaterialShaderCode"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bDeterministicShaderCodeOrder"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bSharedMaterialNativeLibraries"), true, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("ApplocalPrerequisitesDirectory"), TEXT("(Path="")"), ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("IncludeCrashReporter"), false, ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("InternationalizationPreset"), TEXT("English"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("-CulturesToStage"), TEXT("en"), ConfigFilePath);
        GConfig->SetString(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("+CulturesToStage"), TEXT("en"), ConfigFilePath);
        GConfig->SetInt(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("LocalizationTargetCatchAllChunkId"), 0, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bCookAll"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bCookMapsOnly"), false, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bSkipEditorContent"), true, ConfigFilePath);
        GConfig->SetBool(TEXT("/Script/UnrealEd.ProjectPackagingSettings"), TEXT("bSkipMovies"), false, ConfigFilePath);

        FString Section = TEXT("/Script/UnrealEd.CookerSettings");
        FString Key = TEXT("+DirectoriesToNeverCook");
        FString Value = TEXT("(Path=\"/DOWNSHOT_SDK\")");
        GConfig->SetString(*Section, *Key, *Value, ConfigFilePath);

        GConfig->Flush(false, ConfigFilePath);

    }

    DisableLiveCoding();

    FString UProjectFilePath = FPaths::ConvertRelativePathToFull(FPaths::GetProjectFilePath());
    TArray<FString> PluginsToDisable = { "OpenXR", "XRBase", "OpenXREyeTracker", "OpenXRHandTracking", "SteamVR", "OculusPlatform", "OculusXR"};

    DisablePluginsInUProject(UProjectFilePath, PluginsToDisable);
}

void USDKFunctionCalls::CreateModFolder(const FString& Name)
{

    FString ContentDir = FPaths::ProjectContentDir();


    FString NewFolderPath = FPaths::Combine(ContentDir, Name);


    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*NewFolderPath))
    {
        PlatformFile.CreateDirectory(*NewFolderPath);
    }


    NewFolderPath = FPaths::Combine(ContentDir, Name, TEXT("Maps"));

    if (!PlatformFile.DirectoryExists(*NewFolderPath))
    {
        PlatformFile.CreateDirectory(*NewFolderPath);
    }


    NewFolderPath = FPaths::Combine(ContentDir, Name, TEXT("Spawnables"));

    if (!PlatformFile.DirectoryExists(*NewFolderPath))
    {
        PlatformFile.CreateDirectory(*NewFolderPath);
    }
}

bool USDKFunctionCalls::WriteConfigValue(const FString& Value, const FString& Key)
{

    FString ConfigFilePath = FPaths::Combine(FPaths::ProjectConfigDir(), TEXT("DefaultEngine.ini"));


    if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*ConfigFilePath))
    {
        GConfig->LoadFile(ConfigFilePath);

        GConfig->SetString(TEXT("/Script/DOWNSHOT_SDK.Settings"), *Key, *Value, ConfigFilePath);

        GConfig->Flush(false, ConfigFilePath);

        return true;
    }
    else
    {
        return false;
    }

}

bool USDKFunctionCalls::IsConfiguredCorrectly()
{
    FString ConfigFilePath = FPaths::Combine(FPaths::ProjectConfigDir(), TEXT("DefaultEngine.ini"));
    FString Section = "/Script/DOWNSHOT_SDK.Settings";
    FString RetrievedValue;
    GConfig->GetString(*Section, TEXT("ModName"), RetrievedValue, ConfigFilePath);

    if (RetrievedValue.IsEmpty())
    {
        return false;
    }
    FString ContentDir = FPaths::ProjectContentDir();

    FString NewFolderPath = FPaths::Combine(ContentDir, RetrievedValue);

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*NewFolderPath))
    {
        return false;
    }

    NewFolderPath = FPaths::Combine(NewFolderPath, TEXT("Maps"));

    if (!PlatformFile.DirectoryExists(*NewFolderPath))
    {
        return false;
    }

    return true;
}

FString USDKFunctionCalls::ReadConfigValue(const FString& Key)
{
    FString ConfigFilePath = FPaths::Combine(FPaths::ProjectConfigDir(), TEXT("DefaultEngine.ini"));
    FString Section = "/Script/DOWNSHOT_SDK.Settings";
    FString RetrievedValue;
    GConfig->GetString(*Section, *Key, RetrievedValue, ConfigFilePath);

    if (!RetrievedValue.IsEmpty())
    {
        return RetrievedValue;
    }
    else
    {
        return "Error";
    }

}

FString USDKFunctionCalls::GetModArchiveFolder()
{
    FString ModBuildFolder = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectIntermediateDir(), TEXT("CompiledMods")));

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*ModBuildFolder))
    {
        PlatformFile.CreateDirectory(*ModBuildFolder);
    }
    return ModBuildFolder;
}

FString USDKFunctionCalls::GetModPakFolder()
{
    FString ModBuildFolder = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectIntermediateDir(), TEXT("IntermediateMods/PakAssets")));

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*ModBuildFolder))
    {
        PlatformFile.CreateDirectory(*ModBuildFolder);
    }
    return ModBuildFolder;
}

FString USDKFunctionCalls::GetModIntermidateFolder()
{
    FString ModBuildFolder = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectIntermediateDir(), TEXT("IntermediateMods")));

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    if (!PlatformFile.DirectoryExists(*ModBuildFolder))
    {
        PlatformFile.CreateDirectory(*ModBuildFolder);
    }
    return ModBuildFolder;
}

void USDKFunctionCalls::DeleteFolderIfExists(const FString& FolderPath)
{
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    // Check if the directory exists
    if (PlatformFile.DirectoryExists(*FolderPath))
    {
        // Attempt to delete the directory
        if (PlatformFile.DeleteDirectoryRecursively(*FolderPath))
        {
            UE_LOG(LogTemp, Log, TEXT("Successfully deleted folder: %s"), *FolderPath);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to delete folder: %s"), *FolderPath);
        }
    }
}

void USDKFunctionCalls::PackageAllAssets(const FString& ModName, int Platform)
{
    CookInProgress = false;
    FString PlatformFolder;
    FString PlatformFlavor;
    if (Platform == 1)
    {
        PlatformFolder = "Android";
    }
    else
    {
        PlatformFolder = "Windows";
    }
    if (Platform == 1)
    {
        PlatformFlavor = "Android_ASTC";
    }
    else
    {
        PlatformFlavor = "Windows";
    }
    FString UnrealPakPath = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::EngineDir(), TEXT("Binaries/Win64/UnrealPak.exe")));
    FString ProjectName = FApp::GetProjectName();
    FString ProjectFilePath = FPaths::ConvertRelativePathToFull(FPaths::GetProjectFilePath());
    FString CookedDir = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Cooked"), PlatformFlavor, ProjectName, TEXT("Content"), ModName));
    FString PakOutputDir = FPaths::ConvertRelativePathToFull(FPaths::Combine(GetModPakFolder(), PlatformFolder, ModName));
    FString PakFileName = FPaths::Combine(PakOutputDir, ModName + TEXT(".pak"));
    FString ResponseFileName = FPaths::Combine(GetModIntermidateFolder(), TEXT("ResponseFile.txt"));
    FString PakCommandsFileName = FPaths::Combine(GetModIntermidateFolder(), TEXT("PakCommands.txt"));

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (!PlatformFile.DirectoryExists(*PakOutputDir))
    {
        PlatformFile.CreateDirectory(*PakOutputDir);
    }
    else
    {
        DeleteFolderIfExists(*PakOutputDir);
    }


    FString MountPoint = TEXT("../../../") + ProjectName + TEXT("/Content/") + ModName + TEXT("/");
    TArray<FString> FilesToPack;
    PlatformFile.FindFilesRecursively(FilesToPack, *CookedDir, NULL);
    FString NumAssetsInCookedDir = FString::FromInt(FilesToPack.Num());

    if (NumAssetsInCookedDir.Equals("0"))
    {
        UFunction* Function = this->FindFunction(FName("Error"));

        if (Function)
        {
            struct FFunctionParams{ int32 ErrorCode;};

            FFunctionParams Params;
            Params.ErrorCode = 101; 

            this->ProcessEvent(Function, &Params);
        }

        return;
    }

    UE_LOG(LogTemp, Log, TEXT("Using cooked assets in folder: %s"), *CookedDir);
    UE_LOG(LogTemp, Log, TEXT("Assets found: %s"), *NumAssetsInCookedDir);
    
    
    FStringBuilderBase ResponseFileContent;
    for (const FString& FilePath : FilesToPack)
    {
        FString RelativePath = FilePath;
        FPaths::MakePathRelativeTo(RelativePath, *CookedDir);
        ResponseFileContent.Appendf(TEXT("\"%s\" \"%s\" -compress\n"), *FilePath, *(TEXT("../../../") + ProjectName + TEXT("/Content/") + RelativePath));
    }

    FFileHelper::SaveStringToFile(ResponseFileContent.ToString(), *ResponseFileName);

    FString PakCommands = FString::Printf(TEXT("\"%s\" -create=\"%s\""), *PakFileName, *ResponseFileName);
    FFileHelper::SaveStringToFile(*PakCommands, *PakCommandsFileName);

    //FString CommandLine = FString::Printf(TEXT("\"%s\" -Create=\"%s\" -compress -compressionformat=oodle"), *PakFileName, *ResponseFileName);
    FString CommandLine = FString::Printf(TEXT("\"%s\" -compress -compressionformat=oodle -compresslevel=5 -compressmethod=Kraken  -platform=\"%s\" -CreateMultiple=\"%s\""), *ProjectFilePath, *PlatformFolder, *PakCommandsFileName);


    void* ReadPipe = nullptr;
    void* WritePipe = nullptr;
    FPlatformProcess::CreatePipe(ReadPipe, WritePipe);

    UE_LOG(LogTemp, Log, TEXT("Executing command: %s %s"), *UnrealPakPath, *CommandLine);

    TSharedPtr<FProcHandle> ProcHandle = MakeShareable(new FProcHandle(FPlatformProcess::CreateProc(
        *UnrealPakPath,
        *CommandLine,
        true,
        true,
        true,
        nullptr,
        0,
        nullptr,
        WritePipe,
        ReadPipe
    )));

    if (ProcHandle->IsValid())
    {
        auto ReadPipeCopy = ReadPipe;
        auto WritePipeCopy = WritePipe;

        AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [ProcHandle, ReadPipeCopy, WritePipeCopy, ModName, PlatformFolder, this]()
            {
                while (FPlatformProcess::IsProcRunning(*ProcHandle))
                {
                    FPlatformProcess::Sleep(1.0f);
                }
                FPlatformProcess::CloseProc(*ProcHandle);
                FPlatformProcess::ClosePipe(ReadPipeCopy, WritePipeCopy);
                TArray<FString> Tags = { };
                FinishCompile(ModName, PlatformFolder, Tags);
            });
    }
}

void USDKFunctionCalls::CompileMod(const FString& Name, int platform)
{
    if(!FEditorFileUtils::SaveDirtyPackages(true, true, true, false, false, false))
    {
        CompileInProgress = false;
        CookInProgress = false;
        return;
    }


    LastOutput = "";
    CompileInProgress = true;
    CookInProgress = true;
    FString BianaryPath = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::EngineDir(), TEXT("Binaries"), TEXT("Win64"), TEXT("UnrealEditor-Cmd.exe")));
    FString ProjectPath = FPaths::ConvertRelativePathToFull(FPaths::GetProjectFilePath());


    FString PlatformName;
    if (platform == 0)
    {
        PlatformName = "Windows";
    }
    else if (platform == 1)
    {
        PlatformName = "Android_ASTC";
    }
    else
    {
        PlatformName = "Windows";
    }
    
    FString ZipFile = FPaths::ConvertRelativePathToFull(FPaths::Combine(GetModArchiveFolder(), platform == 0 ? "Windows" : "Android", Name) + ".zip");
    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
    if (PlatformFile.FileExists(*ZipFile))
    {
        PlatformFile.DeleteFile(*ZipFile);
    }

    
    
    FString CommandLineArgs = FString::Printf(TEXT("\"%s\" -run=Cook -TargetPlatform=\"%s\" -skipeditorcontent -force -unattended"),
        *ProjectPath, *PlatformName);
    // maybe add -unversioned


    UE_LOG(LogTemp, Log, TEXT("Executing command: %s %s"), *BianaryPath, *CommandLineArgs);

    void* ReadPipe = nullptr;
    void* WritePipe = nullptr;
    FPlatformProcess::CreatePipe(ReadPipe, WritePipe);


    TSharedPtr<FProcHandle> ProcHandle = MakeShareable(new FProcHandle(FPlatformProcess::CreateProc(
        *BianaryPath,
        *CommandLineArgs,
        false,   
        true,  
        true,  
        nullptr,
        0,      
        nullptr,
        WritePipe,
        ReadPipe
    )));

    if (ProcHandle->IsValid())
    {
        auto ReadPipeCopy = ReadPipe;
        auto WritePipeCopy = WritePipe;

        AsyncTask(ENamedThreads::AnyBackgroundThreadNormalTask, [ProcHandle, ReadPipeCopy, WritePipeCopy, Name, platform, this]()
        {
                while (FPlatformProcess::IsProcRunning(*ProcHandle))
                {
                    FString NewOutput = FPlatformProcess::ReadPipe(ReadPipeCopy);
                    if (!NewOutput.IsEmpty() && NewOutput.Contains(" Packages Remain "))
                    {
                        LastOutput = *NewOutput;
                    }
                    FPlatformProcess::Sleep(0.1f);
                }
                FPlatformProcess::CloseProc(*ProcHandle);
                FPlatformProcess::ClosePipe(ReadPipeCopy, WritePipeCopy);
                PackageAllAssets(Name,platform);
        });
    }
}

void USDKFunctionCalls::CopyTemplateMap(const FString& ModName)
{
    FString ProjectDir = FPaths::ProjectDir();
    FString SourceFilePath = FPaths::Combine(ProjectDir, TEXT("Plugins/DOWNSHOT_SDK/Content/Template/BasicMap.umap"));

    FString DestinationDir = FPaths::ProjectContentDir();
    FString DestinationFilePath = FPaths::Combine(DestinationDir, ModName, TEXT("Maps/Template_PleaseRename.umap"));

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    PlatformFile.CreateDirectoryTree(*FPaths::GetPath(DestinationFilePath));

    if (PlatformFile.CopyFile(*DestinationFilePath, *SourceFilePath))
    {
        UE_LOG(LogTemp, Log, TEXT("Map file copied successfully from %s to %s"), *SourceFilePath, *DestinationFilePath);

        FPaths::MakePathRelativeTo(DestinationDir, *FPaths::ProjectContentDir());
        FString PackagePath = FPaths::Combine(TEXT("/Game/"), ModName, TEXT("Maps/Template_PleaseRename.umap"));

        UPackage* Package = LoadPackage(nullptr, *DestinationFilePath, LOAD_None);
        if (Package)
        {
            Package->SetPackageFlags(PKG_NewlyCreated);
            Package->FullyLoad();

            FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
            AssetRegistryModule.AssetCreated(Package);

            Package->MarkPackageDirty();
            if (UPackage::SavePackage(Package, nullptr, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *DestinationFilePath, GError, nullptr, false, true, SAVE_NoError))
            {
                UE_LOG(LogTemp, Log, TEXT("Package saved successfully at %s"), *DestinationFilePath);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to save the package at %s"), *DestinationFilePath);
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to copy map file from %s to %s"), *SourceFilePath, *DestinationFilePath);
    }
}

void USDKFunctionCalls::CopyBlankMap(const FString& ModName)
{
    FString ProjectDir = FPaths::ProjectDir();
    FString SourceFilePath = FPaths::Combine(ProjectDir, TEXT("Plugins/DOWNSHOT_SDK/Content/Template/EmptyMap.umap"));

    FString DestinationDir = FPaths::ProjectContentDir();
    FString DestinationFilePath = FPaths::Combine(DestinationDir, ModName, TEXT("Maps/Blank_PleaseRename.umap"));

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

    PlatformFile.CreateDirectoryTree(*FPaths::GetPath(DestinationFilePath));

    if (PlatformFile.CopyFile(*DestinationFilePath, *SourceFilePath))
    {
        UE_LOG(LogTemp, Log, TEXT("Map file copied successfully from %s to %s"), *SourceFilePath, *DestinationFilePath);

        FPaths::MakePathRelativeTo(DestinationDir, *FPaths::ProjectContentDir());
        FString PackagePath = FPaths::Combine(TEXT("/Game/"), ModName, TEXT("Maps/Blank_PleaseRename.umap"));

        UPackage* Package = LoadPackage(nullptr, *DestinationFilePath, LOAD_None);
        if (Package)
        {
            Package->SetPackageFlags(PKG_NewlyCreated);
            Package->FullyLoad();

            FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
            AssetRegistryModule.AssetCreated(Package);

            Package->MarkPackageDirty();
            if (UPackage::SavePackage(Package, nullptr, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, *DestinationFilePath, GError, nullptr, false, true, SAVE_NoError))
            {
                UE_LOG(LogTemp, Log, TEXT("Package saved successfully at %s"), *DestinationFilePath);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to save the package at %s"), *DestinationFilePath);
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to copy map file from %s to %s"), *SourceFilePath, *DestinationFilePath);
    }
}

void USDKFunctionCalls::RestartEditor()
{
    FUnrealEdMisc::Get().RestartEditor(false);
}

void USDKFunctionCalls::DisableLiveCoding()
{
    FString ConfigFilePath = FPaths::EngineConfigDir() / TEXT("BaseEditorPerProjectUserSettings.ini");

    if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*ConfigFilePath))
    {
        GConfig->LoadFile(ConfigFilePath);

        FString SectionName = TEXT("/Script/LiveCoding.LiveCodingSettings");
        FString KeyName = TEXT("bEnabled");
        FString NewValue = TEXT("False");

        GConfig->SetString(*SectionName, *KeyName, *NewValue, ConfigFilePath);

        GConfig->Flush(false, ConfigFilePath);
    }

    ConfigFilePath = FPaths::ProjectSavedDir() / TEXT("BaseEditorPerProjectUserSettings.ini");

    if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*ConfigFilePath))
    {
        GConfig->LoadFile(ConfigFilePath);

        FString SectionName = TEXT("/Script/LiveCoding.LiveCodingSettings");
        FString KeyName = TEXT("bEnabled");
        FString NewValue = TEXT("False");

        GConfig->SetString(*SectionName, *KeyName, *NewValue, ConfigFilePath);

        GConfig->Flush(false, ConfigFilePath);
    }

    FString SavedDir = FPaths::ProjectSavedDir();
    ConfigFilePath = SavedDir / TEXT("Config/WindowsEditor/EditorPerProjectUserSettings.ini");

    if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*ConfigFilePath))
    {
        GConfig->LoadFile(ConfigFilePath);

        FString SectionName = TEXT("/Script/LiveCoding.LiveCodingSettings");
        FString KeyName = TEXT("bEnabled");
        FString NewValue = TEXT("False");

        GConfig->SetString(*SectionName, *KeyName, *NewValue, ConfigFilePath);

        GConfig->Flush(false, ConfigFilePath);
    }
}


void USDKFunctionCalls::OpenFileExplorer()
{
    FString DirectoryToOpen = GetModArchiveFolder();
    FPlatformProcess::ExploreFolder(*DirectoryToOpen);
}

FString USDKFunctionCalls::GetSDKVersion()
{
    FString PluginName = TEXT("DOWNSHOT_SDK");
    TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(PluginName);

    if (Plugin.IsValid())
    {
        FPluginDescriptor PluginDescriptor = Plugin->GetDescriptor();
        FString PluginVersion = PluginDescriptor.VersionName;
        return PluginVersion;
    }
    return "Error";
}

bool USDKFunctionCalls::InstallToPC(const FString& ModName)
{
   // FString DestinationDir = FPaths::Combine(FPlatformProcess::UserDir(), TEXT("AppData/Local/DownshotVR/Saved/Mods/Local"), ModName);
    FString UserProfileDir = FPlatformMisc::GetEnvironmentVariable(TEXT("USERPROFILE"));

    FString DestinationDir = FPaths::Combine(UserProfileDir, TEXT("AppData/Local/DownshotVR/Saved/Mods/Local"), ModName);

    FString DestinationPakPath = FPaths::Combine(DestinationDir, TEXT("Metadata.json"));

    FString DestinationMetadataPath = FPaths::Combine(DestinationDir, ModName + TEXT(".pak"));


    if (FPaths::DirectoryExists(DestinationDir))
    {
        DeleteFolderIfExists(DestinationDir);
        IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
        PlatformFile.CreateDirectoryTree(*DestinationDir);
    }
    else
    {
        IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
        PlatformFile.CreateDirectoryTree(*DestinationDir);
    }

    FString PakOutputDir = FPaths::ConvertRelativePathToFull(FPaths::Combine(GetModPakFolder(), "Windows", ModName));
    FString PakFileName = FPaths::Combine(PakOutputDir, ModName + TEXT(".pak"));
    FString MetadateFileName = FPaths::Combine(PakOutputDir, TEXT("Metadata.json"));

    if (!FPaths::FileExists(PakFileName))
    {
        return false;
    }

    if (FPlatformFileManager::Get().GetPlatformFile().CopyFile(*DestinationPakPath, *PakFileName))
    {
        FPlatformFileManager::Get().GetPlatformFile().CopyFile(*DestinationMetadataPath, *MetadateFileName);
        return true;
    }
    return false;
}

bool USDKFunctionCalls::InstallToStandaloneHMD(const FString& ModName, const FString& abdpath)
{
    FString AdbPath = abdpath;

    FString PakOutputDir = FPaths::ConvertRelativePathToFull(FPaths::Combine(GetModPakFolder(), "Android", ModName));
    FString SourceFilePath = FPaths::Combine(PakOutputDir, ModName + TEXT(".pak"));
    FString MetadateFileName = FPaths::Combine(PakOutputDir, TEXT("Metadata.json"));

    FString DestinationDir = TEXT("/sdcard/Android/obb/com.CMVR.DownshotVR/");

    FString DestinationPakPath = FPaths::Combine(DestinationDir, ModName + TEXT(".pak"));

    FString DestinationMetadataPath = FPaths::Combine(DestinationDir, TEXT("Metadata.json"));

    if (!FPaths::FileExists(SourceFilePath))
    {
        UE_LOG(LogTemp, Log, TEXT("Invalid Path: %s"), *SourceFilePath);
        return false;
    }


    FString CommandLine;
    FString OutStr;
    FString ErrStr;
    int32 ReturnCode;


    CommandLine = FString::Printf(TEXT("shell mkdir -p \"%s\""), *DestinationDir);

    UE_LOG(LogTemp, Log, TEXT("Executing command: %s %s"), *AdbPath, *CommandLine);

    FPlatformProcess::ExecProcess(*AdbPath, *CommandLine, &ReturnCode, &OutStr, &ErrStr);


    CommandLine = FString::Printf(TEXT("push \"%s\" \"%s\""), *SourceFilePath, *DestinationPakPath);

    UE_LOG(LogTemp, Log, TEXT("Executing command: %s %s"), *AdbPath, *CommandLine);

    FPlatformProcess::ExecProcess(*AdbPath, *CommandLine, &ReturnCode, &OutStr, &ErrStr);

    if (ReturnCode == 0)
    {
        UE_LOG(LogTemp, Log, TEXT("File successfully copied to Meta Quest device: %s"), *DestinationPakPath);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to copy file to Meta Quest device. Error: %s"), *ErrStr);
        return false;
    }

    CommandLine = FString::Printf(TEXT("push \"%s\" \"%s\""), *MetadateFileName, *DestinationMetadataPath);

    UE_LOG(LogTemp, Log, TEXT("Executing command: %s %s"), *AdbPath, *CommandLine);

    FPlatformProcess::ExecProcess(*AdbPath, *CommandLine, &ReturnCode, &OutStr, &ErrStr);

    if (ReturnCode == 0)
    {
        UE_LOG(LogTemp, Log, TEXT("File successfully copied to Meta Quest device: %s"), *DestinationMetadataPath);
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to copy file to Meta Quest device. Error: %s"), *ErrStr);
    }
    return false;
}



void USDKFunctionCalls::CreateJsonFile(const FString& FilePath, const FString& Platform, const FString& Mount, const TArray<FString>& Tags)
{
    TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);

    JsonObject->SetStringField(TEXT("Mount"), Mount);
    JsonObject->SetStringField(TEXT("Platform"), Platform);

    TArray<TSharedPtr<FJsonValue>> JsonTags;
    for (const FString& Tag : Tags)
    {
        JsonTags.Add(MakeShareable(new FJsonValueString(Tag)));
    }
    JsonObject->SetArrayField(TEXT("Tags"), JsonTags);

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    if (FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer))
    {
        if (FFileHelper::SaveStringToFile(OutputString, *FilePath))
        {
            UE_LOG(LogTemp, Log, TEXT("Successfully saved JSON to file: %s"), *FilePath);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Failed to save JSON to file: %s"), *FilePath);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to serialize JSON object"));
    }
}

void USDKFunctionCalls::FinishCompile(const FString& ModName, const FString& Platform, const TArray<FString>& Tags)
{
    FString FilePath = FPaths::Combine(GetModPakFolder(), Platform, ModName, TEXT("Metadata.json"));
    FString Mount = FApp::GetProjectName();

    CreateJsonFile(*FilePath, *Platform, *Mount, Tags);

    FString SourceFolder = FPaths::ConvertRelativePathToFull(FPaths::Combine(GetModPakFolder(), Platform));
    FString DestinationFolder = FPaths::ConvertRelativePathToFull(FPaths::Combine(GetModArchiveFolder(), Platform));
    FString DestinationZip = FPaths::ConvertRelativePathToFull(FPaths::Combine(GetModArchiveFolder(), Platform, ModName) + ".zip");

    IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();


    if (!PlatformFile.DirectoryExists(*DestinationFolder))
    {
        PlatformFile.CreateDirectory(*DestinationFolder);
    }

    ZipFolder(SourceFolder, DestinationZip);
    CompileInProgress = false;
}

void USDKFunctionCalls::ZipFolder(const FString& FolderPath, const FString& OutputZipFile)
{
    FString FullCommand = FString::Printf(
        TEXT("/c powershell -command \"Compress-Archive -Path '%s\\*' -DestinationPath '%s' -CompressionLevel Optimal\""),
        *FolderPath, *OutputZipFile
    );

    UE_LOG(LogTemp, Log, TEXT("Running Command: %s"), *FullCommand);

    TCHAR CommandTCHAR[4096]; 
    wcscpy_s(CommandTCHAR, UE_ARRAY_COUNT(CommandTCHAR), *FullCommand);

    HINSTANCE Result = ShellExecute(nullptr, TEXT("open"), TEXT("cmd.exe"), CommandTCHAR, nullptr, SW_HIDE);

    if ((uintptr_t)Result <= 32) 
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to compress folder: %s"), *FolderPath);
    }
    else
    {
        UE_LOG(LogTemp, Log, TEXT("Folder successfully compressed to: %s"), *OutputZipFile);
    }
}

void USDKFunctionCalls::DisablePluginsInUProject(const FString& UProjectFilePath, const TArray<FString>& PluginsToDisable)
{
    FString FileContent;
    if (FFileHelper::LoadFileToString(FileContent, *UProjectFilePath))
    {
        TSharedPtr<FJsonObject> JsonObject;
        TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(FileContent);

        if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
        {
            TArray<TSharedPtr<FJsonValue>> PluginsArray = JsonObject->GetArrayField("Plugins");

            for (TSharedPtr<FJsonValue>& PluginValue : PluginsArray)
            {
                TSharedPtr<FJsonObject> PluginObject = PluginValue->AsObject();
                FString PluginName = PluginObject->GetStringField("Name");

                if (PluginsToDisable.Contains(PluginName))
                {
                    PluginObject->SetBoolField("Enabled", false);
                }
            }

            FString ModifiedFileContent;
            TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&ModifiedFileContent);
            FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);

            FFileHelper::SaveStringToFile(ModifiedFileContent, *UProjectFilePath);
        }
    }


}

