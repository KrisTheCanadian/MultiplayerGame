// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYERGAME_MultiplayerGameCharacter_generated_h
#error "MultiplayerGameCharacter.generated.h already included, missing '#pragma once' in MultiplayerGameCharacter.h"
#endif
#define MULTIPLAYERGAME_MultiplayerGameCharacter_generated_h

#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_SPARSE_DATA
#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_RPC_WRAPPERS
#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerGameCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerGame"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameCharacter)


#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerGameCharacter(); \
	friend struct Z_Construct_UClass_AMultiplayerGameCharacter_Statics; \
public: \
	DECLARE_CLASS(AMultiplayerGameCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiplayerGame"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerGameCharacter)


#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGameCharacter(AMultiplayerGameCharacter&&); \
	NO_API AMultiplayerGameCharacter(const AMultiplayerGameCharacter&); \
public:


#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerGameCharacter(AMultiplayerGameCharacter&&); \
	NO_API AMultiplayerGameCharacter(const AMultiplayerGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerGameCharacter)


#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMultiplayerGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMultiplayerGameCharacter, FollowCamera); }


#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_9_PROLOG
#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_SPARSE_DATA \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_RPC_WRAPPERS \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_INCLASS \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_SPARSE_DATA \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIPLAYERGAME_API UClass* StaticClass<class AMultiplayerGameCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MultiplayerGame_Source_MultiplayerGame_MultiplayerGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
