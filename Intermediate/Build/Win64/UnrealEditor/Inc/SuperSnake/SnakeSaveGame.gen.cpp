// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSnake/SnakeSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeSaveGame() {}
// Cross Module References
	SUPERSNAKE_API UClass* Z_Construct_UClass_USnakeSaveGame_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_USnakeSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_SuperSnake();
// End Cross Module References
	void USnakeSaveGame::StaticRegisterNativesUSnakeSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnakeSaveGame);
	UClass* Z_Construct_UClass_USnakeSaveGame_NoRegister()
	{
		return USnakeSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_USnakeSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnakeSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSnake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnakeSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SnakeSaveGame.h" },
		{ "ModuleRelativePath", "SnakeSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Num_MetaData[] = {
		{ "ModuleRelativePath", "SnakeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnakeSaveGame, Num), METADATA_PARAMS(Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Num_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "SnakeSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USnakeSaveGame, Name), METADATA_PARAMS(Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnakeSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Num,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnakeSaveGame_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnakeSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnakeSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnakeSaveGame_Statics::ClassParams = {
		&USnakeSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USnakeSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USnakeSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USnakeSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnakeSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnakeSaveGame()
	{
		if (!Z_Registration_Info_UClass_USnakeSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnakeSaveGame.OuterSingleton, Z_Construct_UClass_USnakeSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnakeSaveGame.OuterSingleton;
	}
	template<> SUPERSNAKE_API UClass* StaticClass<USnakeSaveGame>()
	{
		return USnakeSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnakeSaveGame);
	struct Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnakeSaveGame, USnakeSaveGame::StaticClass, TEXT("USnakeSaveGame"), &Z_Registration_Info_UClass_USnakeSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnakeSaveGame), 2736711105U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeSaveGame_h_321309668(TEXT("/Script/SuperSnake"),
		Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
