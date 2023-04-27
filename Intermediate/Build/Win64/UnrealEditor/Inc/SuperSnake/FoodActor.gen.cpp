// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSnake/FoodActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodActor() {}
// Cross Module References
	SUPERSNAKE_API UClass* Z_Construct_UClass_AFoodActor_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_AFoodActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SuperSnake();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASnakePawn_NoRegister();
// End Cross Module References
	void AFoodActor::StaticRegisterNativesAFoodActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFoodActor);
	UClass* Z_Construct_UClass_AFoodActor_NoRegister()
	{
		return AFoodActor::StaticClass();
	}
	struct Z_Construct_UClass_AFoodActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoodComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoodComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Head_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Head;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSnake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FoodActor.h" },
		{ "ModuleRelativePath", "FoodActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodActor_Statics::NewProp_FoodComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FoodActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFoodActor_Statics::NewProp_FoodComp = { "FoodComp", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodActor, FoodComp), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFoodActor_Statics::NewProp_FoodComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodActor_Statics::NewProp_FoodComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodActor_Statics::NewProp_Head_MetaData[] = {
		{ "ModuleRelativePath", "FoodActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFoodActor_Statics::NewProp_Head = { "Head", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodActor, Head), Z_Construct_UClass_ASnakePawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFoodActor_Statics::NewProp_Head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodActor_Statics::NewProp_Head_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFoodActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodActor_Statics::NewProp_FoodComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodActor_Statics::NewProp_Head,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFoodActor_Statics::ClassParams = {
		&AFoodActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFoodActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFoodActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFoodActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoodActor()
	{
		if (!Z_Registration_Info_UClass_AFoodActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFoodActor.OuterSingleton, Z_Construct_UClass_AFoodActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFoodActor.OuterSingleton;
	}
	template<> SUPERSNAKE_API UClass* StaticClass<AFoodActor>()
	{
		return AFoodActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoodActor);
	struct Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_FoodActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_FoodActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFoodActor, AFoodActor::StaticClass, TEXT("AFoodActor"), &Z_Registration_Info_UClass_AFoodActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFoodActor), 2010837395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_FoodActor_h_1859918927(TEXT("/Script/SuperSnake"),
		Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_FoodActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_FoodActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
