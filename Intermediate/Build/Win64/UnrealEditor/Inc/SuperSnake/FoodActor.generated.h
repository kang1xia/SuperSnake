// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUPERSNAKE_FoodActor_generated_h
#error "FoodActor.generated.h already included, missing '#pragma once' in FoodActor.h"
#endif
#define SUPERSNAKE_FoodActor_generated_h

#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_SPARSE_DATA
#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_RPC_WRAPPERS
#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFoodActor(); \
	friend struct Z_Construct_UClass_AFoodActor_Statics; \
public: \
	DECLARE_CLASS(AFoodActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSnake"), NO_API) \
	DECLARE_SERIALIZER(AFoodActor)


#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFoodActor(); \
	friend struct Z_Construct_UClass_AFoodActor_Statics; \
public: \
	DECLARE_CLASS(AFoodActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SuperSnake"), NO_API) \
	DECLARE_SERIALIZER(AFoodActor)


#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFoodActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFoodActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFoodActor(AFoodActor&&); \
	NO_API AFoodActor(const AFoodActor&); \
public:


#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFoodActor(AFoodActor&&); \
	NO_API AFoodActor(const AFoodActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFoodActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFoodActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFoodActor)


#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_9_PROLOG
#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_RPC_WRAPPERS \
	FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_INCLASS \
	FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_FoodActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSNAKE_API UClass* StaticClass<class AFoodActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperSnake_Source_SuperSnake_FoodActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
