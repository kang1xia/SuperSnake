// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSnake/SuperSnakeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperSnakeGameModeBase() {}
// Cross Module References
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASuperSnakeGameModeBase_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASuperSnakeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_SuperSnake();
	SUPERSNAKE_API UClass* Z_Construct_UClass_AFoodActor_NoRegister();
// End Cross Module References
	void ASuperSnakeGameModeBase::StaticRegisterNativesASuperSnakeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASuperSnakeGameModeBase);
	UClass* Z_Construct_UClass_ASuperSnakeGameModeBase_NoRegister()
	{
		return ASuperSnakeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASuperSnakeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoodArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoodArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoodArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSnake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SuperSnakeGameModeBase.h" },
		{ "ModuleRelativePath", "SuperSnakeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::NewProp_FoodArray_Inner = { "FoodArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFoodActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::NewProp_FoodArray_MetaData[] = {
		{ "ModuleRelativePath", "SuperSnakeGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::NewProp_FoodArray = { "FoodArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperSnakeGameModeBase, FoodArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::NewProp_FoodArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::NewProp_FoodArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::NewProp_FoodArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::NewProp_FoodArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperSnakeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::ClassParams = {
		&ASuperSnakeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperSnakeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASuperSnakeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASuperSnakeGameModeBase.OuterSingleton, Z_Construct_UClass_ASuperSnakeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASuperSnakeGameModeBase.OuterSingleton;
	}
	template<> SUPERSNAKE_API UClass* StaticClass<ASuperSnakeGameModeBase>()
	{
		return ASuperSnakeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperSnakeGameModeBase);
	struct Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SuperSnakeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SuperSnakeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASuperSnakeGameModeBase, ASuperSnakeGameModeBase::StaticClass, TEXT("ASuperSnakeGameModeBase"), &Z_Registration_Info_UClass_ASuperSnakeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASuperSnakeGameModeBase), 2630551837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SuperSnakeGameModeBase_h_195185889(TEXT("/Script/SuperSnake"),
		Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SuperSnakeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SuperSnakeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
