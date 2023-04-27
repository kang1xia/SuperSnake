// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASnakePawn;
#ifdef SUPERSNAKE_SnakeInfoInterface_generated_h
#error "SnakeInfoInterface.generated.h already included, missing '#pragma once' in SnakeInfoInterface.h"
#endif
#define SUPERSNAKE_SnakeInfoInterface_generated_h

#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_SPARSE_DATA
#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_RPC_WRAPPERS \
	virtual ASnakePawn* GetSnakePawn_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetSnakePawn);


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual ASnakePawn* GetSnakePawn_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execGetSnakePawn);


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_EVENT_PARMS \
	struct SnakeInfoInterface_eventGetSnakePawn_Parms \
	{ \
		ASnakePawn* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		SnakeInfoInterface_eventGetSnakePawn_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_CALLBACK_WRAPPERS
#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUPERSNAKE_API USnakeInfoInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnakeInfoInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUPERSNAKE_API, USnakeInfoInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnakeInfoInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUPERSNAKE_API USnakeInfoInterface(USnakeInfoInterface&&); \
	SUPERSNAKE_API USnakeInfoInterface(const USnakeInfoInterface&); \
public:


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SUPERSNAKE_API USnakeInfoInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SUPERSNAKE_API USnakeInfoInterface(USnakeInfoInterface&&); \
	SUPERSNAKE_API USnakeInfoInterface(const USnakeInfoInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SUPERSNAKE_API, USnakeInfoInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnakeInfoInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnakeInfoInterface)


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSnakeInfoInterface(); \
	friend struct Z_Construct_UClass_USnakeInfoInterface_Statics; \
public: \
	DECLARE_CLASS(USnakeInfoInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SuperSnake"), SUPERSNAKE_API) \
	DECLARE_SERIALIZER(USnakeInfoInterface)


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISnakeInfoInterface() {} \
public: \
	typedef USnakeInfoInterface UClassType; \
	typedef ISnakeInfoInterface ThisClass; \
	static ASnakePawn* Execute_GetSnakePawn(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISnakeInfoInterface() {} \
public: \
	typedef USnakeInfoInterface UClassType; \
	typedef ISnakeInfoInterface ThisClass; \
	static ASnakePawn* Execute_GetSnakePawn(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_10_PROLOG \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_EVENT_PARMS


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_RPC_WRAPPERS \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_CALLBACK_WRAPPERS \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_SPARSE_DATA \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_CALLBACK_WRAPPERS \
	FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUPERSNAKE_API UClass* StaticClass<class USnakeInfoInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
