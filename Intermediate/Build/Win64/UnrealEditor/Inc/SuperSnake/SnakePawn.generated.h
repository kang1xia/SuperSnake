// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SUPERSNAKE_SnakePawn_generated_h
#error "SnakePawn.generated.h already included, missing '#pragma once' in SnakePawn.h"
#endif
#define SUPERSNAKE_SnakePawn_generated_h

#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_SPARSE_DATA
#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentBeginOverlap);


#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakePawn(); \
	friend struct Z_Construct_UClass_ASnakePawn_Statics; \
public: \
	DECLARE_CLASS(ASnakePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSnake"), NO_API) \
	DECLARE_SERIALIZER(ASnakePawn) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakePawn*>(this); }


#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASnakePawn(); \
	friend struct Z_Construct_UClass_ASnakePawn_Statics; \
public: \
	DECLARE_CLASS(ASnakePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSnake"), NO_API) \
	DECLARE_SERIALIZER(ASnakePawn) \
	virtual UObject* _getUObject() const override { return const_cast<ASnakePawn*>(this); }


#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakePawn(ASnakePawn&&); \
	NO_API ASnakePawn(const ASnakePawn&); \
public:


#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakePawn(ASnakePawn&&); \
	NO_API ASnakePawn(const ASnakePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakePawn)


#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_11_PROLOG
#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_RPC_WRAPPERS \
	FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_INCLASS \
	FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_INCLASS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_SnakePawn_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSNAKE_API UClass* StaticClass<class ASnakePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperSnake_Source_SuperSnake_SnakePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
