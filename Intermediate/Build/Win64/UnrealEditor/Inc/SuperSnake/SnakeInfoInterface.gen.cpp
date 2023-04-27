// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSnake/SnakeInfoInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakeInfoInterface() {}
// Cross Module References
	SUPERSNAKE_API UClass* Z_Construct_UClass_USnakeInfoInterface_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_USnakeInfoInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SuperSnake();
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASnakePawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ISnakeInfoInterface::execGetSnakePawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASnakePawn**)Z_Param__Result=P_THIS->GetSnakePawn_Implementation();
		P_NATIVE_END;
	}
	ASnakePawn* ISnakeInfoInterface::GetSnakePawn()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSnakePawn instead.");
		SnakeInfoInterface_eventGetSnakePawn_Parms Parms;
		return Parms.ReturnValue;
	}
	void USnakeInfoInterface::StaticRegisterNativesUSnakeInfoInterface()
	{
		UClass* Class = USnakeInfoInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSnakePawn", &ISnakeInfoInterface::execGetSnakePawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakeInfoInterface_eventGetSnakePawn_Parms, ReturnValue), Z_Construct_UClass_ASnakePawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeInfoInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnakeInfoInterface, nullptr, "GetSnakePawn", nullptr, nullptr, sizeof(SnakeInfoInterface_eventGetSnakePawn_Parms), Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnakeInfoInterface);
	UClass* Z_Construct_UClass_USnakeInfoInterface_NoRegister()
	{
		return USnakeInfoInterface::StaticClass();
	}
	struct Z_Construct_UClass_USnakeInfoInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USnakeInfoInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSnake,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USnakeInfoInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USnakeInfoInterface_GetSnakePawn, "GetSnakePawn" }, // 2912311068
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USnakeInfoInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "SnakeInfoInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USnakeInfoInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISnakeInfoInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USnakeInfoInterface_Statics::ClassParams = {
		&USnakeInfoInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USnakeInfoInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USnakeInfoInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USnakeInfoInterface()
	{
		if (!Z_Registration_Info_UClass_USnakeInfoInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnakeInfoInterface.OuterSingleton, Z_Construct_UClass_USnakeInfoInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USnakeInfoInterface.OuterSingleton;
	}
	template<> SUPERSNAKE_API UClass* StaticClass<USnakeInfoInterface>()
	{
		return USnakeInfoInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USnakeInfoInterface);
	static FName NAME_USnakeInfoInterface_GetSnakePawn = FName(TEXT("GetSnakePawn"));
	ASnakePawn* ISnakeInfoInterface::Execute_GetSnakePawn(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USnakeInfoInterface::StaticClass()));
		SnakeInfoInterface_eventGetSnakePawn_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USnakeInfoInterface_GetSnakePawn);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ISnakeInfoInterface*)(O->GetNativeInterfaceAddress(USnakeInfoInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetSnakePawn_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USnakeInfoInterface, USnakeInfoInterface::StaticClass, TEXT("USnakeInfoInterface"), &Z_Registration_Info_UClass_USnakeInfoInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnakeInfoInterface), 359695268U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_2840652497(TEXT("/Script/SuperSnake"),
		Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakeInfoInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
