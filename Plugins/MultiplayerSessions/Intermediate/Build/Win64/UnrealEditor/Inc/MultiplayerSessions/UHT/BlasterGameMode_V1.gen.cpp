// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSessions/Public/BlasterGameMode_V1.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlasterGameMode_V1() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_ABlasterGameMode_V1();
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_ABlasterGameMode_V1_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiplayerSessions();
// End Cross Module References

// Begin Class ABlasterGameMode_V1
void ABlasterGameMode_V1::StaticRegisterNativesABlasterGameMode_V1()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlasterGameMode_V1);
UClass* Z_Construct_UClass_ABlasterGameMode_V1_NoRegister()
{
	return ABlasterGameMode_V1::StaticClass();
}
struct Z_Construct_UClass_ABlasterGameMode_V1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BlasterGameMode_V1.h" },
		{ "ModuleRelativePath", "Public/BlasterGameMode_V1.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlasterGameMode_V1>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABlasterGameMode_V1_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_V1_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlasterGameMode_V1_Statics::ClassParams = {
	&ABlasterGameMode_V1::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlasterGameMode_V1_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlasterGameMode_V1_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlasterGameMode_V1()
{
	if (!Z_Registration_Info_UClass_ABlasterGameMode_V1.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlasterGameMode_V1.OuterSingleton, Z_Construct_UClass_ABlasterGameMode_V1_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlasterGameMode_V1.OuterSingleton;
}
template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<ABlasterGameMode_V1>()
{
	return ABlasterGameMode_V1::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlasterGameMode_V1);
ABlasterGameMode_V1::~ABlasterGameMode_V1() {}
// End Class ABlasterGameMode_V1

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_BlasterGameMode_V1_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlasterGameMode_V1, ABlasterGameMode_V1::StaticClass, TEXT("ABlasterGameMode_V1"), &Z_Registration_Info_UClass_ABlasterGameMode_V1, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlasterGameMode_V1), 3894549450U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_BlasterGameMode_V1_h_3738409595(TEXT("/Script/MultiplayerSessions"),
	Z_CompiledInDeferFile_FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_BlasterGameMode_V1_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_BlasterGameMode_V1_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
