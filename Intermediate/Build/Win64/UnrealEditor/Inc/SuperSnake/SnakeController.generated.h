// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERSNAKE_SnakeController_generated_h
#error "SnakeController.generated.h already included, missing '#pragma once' in SnakeController.h"
#endif
#define SUPERSNAKE_SnakeController_generated_h

#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_SPARSE_DATA
#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_RPC_WRAPPERS
#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeController(); \
	friend struct Z_Construct_UClass_ASnakeController_Statics; \
public: \
	DECLARE_CLASS(ASnakeController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSnake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeController)


#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASnakeController(); \
	friend struct Z_Construct_UClass_ASnakeController_Statics; \
public: \
	DECLARE_CLASS(ASnakeController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSnake"), NO_API) \
	DECLARE_SERIALIZER(ASnakeController)


#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeController(ASnakeController&&); \
	NO_API ASnakeController(const ASnakeController&); \
public:


#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeController(ASnakeController&&); \
	NO_API ASnakeController(const ASnakeController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeController)


#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_12_PROLOG
#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_RPC_WRAPPERS \
	FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_INCLASS \
	FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_INCLASS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_SnakeController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSNAKE_API UClass* StaticClass<class ASnakeController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperSnake_Source_SuperSnake_SnakeController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
