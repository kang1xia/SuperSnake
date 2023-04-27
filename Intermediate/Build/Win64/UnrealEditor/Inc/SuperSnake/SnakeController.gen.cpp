// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSnake/SnakeController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeController() {}
// Cross Module References
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASnakeController_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASnakeController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_SuperSnake();
// End Cross Module References
	void ASnakeController::StaticRegisterNativesASnakeController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakeController);
	UClass* Z_Construct_UClass_ASnakeController_NoRegister()
	{
		return ASnakeController::StaticClass();
	}
	struct Z_Construct_UClass_ASnakeController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakeController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSnake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakeController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SnakeController.h" },
		{ "ModuleRelativePath", "SnakeController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakeController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakeController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakeController_Statics::ClassParams = {
		&ASnakeController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnakeController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakeController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakeController()
	{
		if (!Z_Registration_Info_UClass_ASnakeController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakeController.OuterSingleton, Z_Construct_UClass_ASnakeController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakeController.OuterSingleton;
	}
	template<> SUPERSNAKE_API UClass* StaticClass<ASnakeController>()
	{
		return ASnakeController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakeController);
	struct Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakeController, ASnakeController::StaticClass, TEXT("ASnakeController"), &Z_Registration_Info_UClass_ASnakeController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakeController), 2179137717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeController_h_23227608(TEXT("/Script/SuperSnake"),
		Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
