// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERSNAKE_BodyActor_generated_h
#error "BodyActor.generated.h already included, missing '#pragma once' in BodyActor.h"
#endif
#define SUPERSNAKE_BodyActor_generated_h

#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_SPARSE_DATA
#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_RPC_WRAPPERS
#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABodyActor(); \
	friend struct Z_Construct_UClass_ABodyActor_Statics; \
public: \
	DECLARE_CLASS(ABodyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSnake"), NO_API) \
	DECLARE_SERIALIZER(ABodyActor) \
	virtual UObject* _getUObject() const override { return const_cast<ABodyActor*>(this); }


#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABodyActor(); \
	friend struct Z_Construct_UClass_ABodyActor_Statics; \
public: \
	DECLARE_CLASS(ABodyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSnake"), NO_API) \
	DECLARE_SERIALIZER(ABodyActor) \
	virtual UObject* _getUObject() const override { return const_cast<ABodyActor*>(this); }


#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABodyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABodyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABodyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABodyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABodyActor(ABodyActor&&); \
	NO_API ABodyActor(const ABodyActor&); \
public:


#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABodyActor(ABodyActor&&); \
	NO_API ABodyActor(const ABodyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABodyActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABodyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABodyActor)


#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_11_PROLOG
#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_RPC_WRAPPERS \
	FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_INCLASS \
	FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_BodyActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSNAKE_API UClass* StaticClass<class ABodyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperSnake_Source_SuperSnake_BodyActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
