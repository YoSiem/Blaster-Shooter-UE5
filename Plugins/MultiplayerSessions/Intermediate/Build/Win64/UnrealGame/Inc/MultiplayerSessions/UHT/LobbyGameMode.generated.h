// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LobbyGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERSESSIONS_LobbyGameMode_generated_h
#error "LobbyGameMode.generated.h already included, missing '#pragma once' in LobbyGameMode.h"
#endif
#define MULTIPLAYERSESSIONS_LobbyGameMode_generated_h

#define FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALobbyGameMode(); \
	friend struct Z_Construct_UClass_ALobbyGameMode_Statics; \
public: \
	DECLARE_CLASS(ALobbyGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerSessions"), NO_API) \
	DECLARE_SERIALIZER(ALobbyGameMode)


#define FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALobbyGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALobbyGameMode(ALobbyGameMode&&); \
	ALobbyGameMode(const ALobbyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALobbyGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALobbyGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALobbyGameMode) \
	NO_API virtual ~ALobbyGameMode();


#define FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_LobbyGameMode_h_12_PROLOG
#define FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_LobbyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_LobbyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_LobbyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERSESSIONS_API UClass* StaticClass<class ALobbyGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Caipi_User_Documents_Unreal_Projects_Blaster_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_LobbyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
