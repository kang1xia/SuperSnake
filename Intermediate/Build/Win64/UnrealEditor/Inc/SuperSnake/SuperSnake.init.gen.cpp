// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperSnake_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SuperSnake;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SuperSnake()
	{
		if (!Z_Registration_Info_UPackage__Script_SuperSnake.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SuperSnake",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE6E1B10E,
				0x77BDE4AA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SuperSnake.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SuperSnake.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SuperSnake(Z_Construct_UPackage__Script_SuperSnake, TEXT("/Script/SuperSnake"), Z_Registration_Info_UPackage__Script_SuperSnake, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE6E1B10E, 0x77BDE4AA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
