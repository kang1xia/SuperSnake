// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperSnake/SnakePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnakePawn() {}
// Cross Module References
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASnakePawn_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_ASnakePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SuperSnake();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_ABodyActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_USnakeAiComponent_NoRegister();
	SUPERSNAKE_API UClass* Z_Construct_UClass_USnakeInfoInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASnakePawn::execOnComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ASnakePawn::StaticRegisterNativesASnakePawn()
	{
		UClass* Class = ASnakePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnComponentBeginOverlap", &ASnakePawn::execOnComponentBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics
	{
		struct SnakePawn_eventOnComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakePawn_eventOnComponentBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakePawn_eventOnComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakePawn_eventOnComponentBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakePawn_eventOnComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SnakePawn_eventOnComponentBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SnakePawn_eventOnComponentBeginOverlap_Parms), &Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SnakePawn_eventOnComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ??\xca\xbc?\xd8\xb5??\xc2\xbc?\n" },
		{ "ModuleRelativePath", "SnakePawn.h" },
		{ "ToolTip", "??\xca\xbc?\xd8\xb5??\xc2\xbc?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASnakePawn, nullptr, "OnComponentBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::SnakePawn_eventOnComponentBeginOverlap_Parms), Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnakePawn);
	UClass* Z_Construct_UClass_ASnakePawn_NoRegister()
	{
		return ASnakePawn::StaticClass();
	}
	struct Z_Construct_UClass_ASnakePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HeadComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AiComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AiComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASnakePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperSnake,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASnakePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASnakePawn_OnComponentBeginOverlap, "OnComponentBeginOverlap" }, // 4143084707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SnakePawn.h" },
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakePawn_Statics::NewProp_HeadComp_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_HeadComp = { "HeadComp", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakePawn, HeadComp), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakePawn_Statics::NewProp_HeadComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::NewProp_HeadComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakePawn_Statics::NewProp_NextNode_MetaData[] = {
		{ "Comment", "// \xcd\xb7????\n" },
		{ "ModuleRelativePath", "SnakePawn.h" },
		{ "ToolTip", "\xcd\xb7????" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_NextNode = { "NextNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakePawn, NextNode), Z_Construct_UClass_ABodyActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakePawn_Statics::NewProp_NextNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::NewProp_NextNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakePawn_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "Comment", "// ??\xd2\xbb??????\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakePawn.h" },
		{ "ToolTip", "??\xd2\xbb??????" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakePawn, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakePawn_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::NewProp_SphereCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASnakePawn_Statics::NewProp_AiComponent_MetaData[] = {
		{ "Category", "SnakePawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SnakePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnakePawn_Statics::NewProp_AiComponent = { "AiComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASnakePawn, AiComponent), Z_Construct_UClass_USnakeAiComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASnakePawn_Statics::NewProp_AiComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::NewProp_AiComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnakePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_HeadComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_NextNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_SphereCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnakePawn_Statics::NewProp_AiComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASnakePawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USnakeInfoInterface_NoRegister, (int32)VTABLE_OFFSET(ASnakePawn, ISnakeInfoInterface), false },  // 359695268
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASnakePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnakePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnakePawn_Statics::ClassParams = {
		&ASnakePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASnakePawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASnakePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASnakePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASnakePawn()
	{
		if (!Z_Registration_Info_UClass_ASnakePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnakePawn.OuterSingleton, Z_Construct_UClass_ASnakePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASnakePawn.OuterSingleton;
	}
	template<> SUPERSNAKE_API UClass* StaticClass<ASnakePawn>()
	{
		return ASnakePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASnakePawn);
	struct Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASnakePawn, ASnakePawn::StaticClass, TEXT("ASnakePawn"), &Z_Registration_Info_UClass_ASnakePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnakePawn), 735580451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakePawn_h_2833357530(TEXT("/Script/SuperSnake"),
		Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SuperSnake_Source_SuperSnake_SnakePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
