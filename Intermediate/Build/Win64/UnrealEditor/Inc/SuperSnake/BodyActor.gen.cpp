// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSnake/BodyActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBodyActor() {}
// Cross Module References
	SUPERSNAKE_API UClass* Z_Construct_UClass_ABodyActor_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_ABodyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SuperSnake();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASnakePawn_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_USnakeInfoInterface_NoRegister();
// End Cross Module References
	void ABodyActor::StaticRegisterNativesABodyActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABodyActor);
	UClass* Z_Construct_UClass_ABodyActor_NoRegister()
	{
		return ABodyActor::StaticClass();
	}
	struct Z_Construct_UClass_ABodyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnakePawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SnakePawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABodyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSnake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BodyActor.h" },
		{ "ModuleRelativePath", "BodyActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodyActor_Statics::NewProp_BodyComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABodyActor_Statics::NewProp_BodyComp = { "BodyComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABodyActor, BodyComp), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABodyActor_Statics::NewProp_BodyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABodyActor_Statics::NewProp_BodyComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodyActor_Statics::NewProp_NextNode_MetaData[] = {
		{ "ModuleRelativePath", "BodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABodyActor_Statics::NewProp_NextNode = { "NextNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABodyActor, NextNode), Z_Construct_UClass_ABodyActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABodyActor_Statics::NewProp_NextNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABodyActor_Statics::NewProp_NextNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABodyActor_Statics::NewProp_SnakePawn_MetaData[] = {
		{ "ModuleRelativePath", "BodyActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABodyActor_Statics::NewProp_SnakePawn = { "SnakePawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABodyActor, SnakePawn), Z_Construct_UClass_ASnakePawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABodyActor_Statics::NewProp_SnakePawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABodyActor_Statics::NewProp_SnakePawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABodyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABodyActor_Statics::NewProp_BodyComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABodyActor_Statics::NewProp_NextNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABodyActor_Statics::NewProp_SnakePawn,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABodyActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USnakeInfoInterface_NoRegister, (int32)VTABLE_OFFSET(ABodyActor, ISnakeInfoInterface), false },  // 359695268
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABodyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABodyActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABodyActor_Statics::ClassParams = {
		&ABodyActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABodyActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABodyActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABodyActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABodyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABodyActor()
	{
		if (!Z_Registration_Info_UClass_ABodyActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABodyActor.OuterSingleton, Z_Construct_UClass_ABodyActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABodyActor.OuterSingleton;
	}
	template<> SUPERSNAKE_API UClass* StaticClass<ABodyActor>()
	{
		return ABodyActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABodyActor);
	struct Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_BodyActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_BodyActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABodyActor, ABodyActor::StaticClass, TEXT("ABodyActor"), &Z_Registration_Info_UClass_ABodyActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABodyActor), 2689647413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_BodyActor_h_1836147243(TEXT("/Script/SuperSnake"),
		Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_BodyActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_BodyActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
