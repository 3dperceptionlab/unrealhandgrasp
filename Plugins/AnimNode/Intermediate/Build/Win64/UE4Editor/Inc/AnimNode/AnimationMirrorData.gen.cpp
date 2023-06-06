// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode/Public/AnimationMirrorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationMirrorData() {}
// Cross Module References
	ANIMNODE_API UEnum* Z_Construct_UEnum_AnimNode_MirrorDir();
	UPackage* Z_Construct_UPackage__Script_AnimNode();
	ANIMNODE_API UClass* Z_Construct_UClass_UAnimationMirrorData_NoRegister();
	ANIMNODE_API UClass* Z_Construct_UClass_UAnimationMirrorData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* MirrorDir_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AnimNode_MirrorDir, Z_Construct_UPackage__Script_AnimNode(), TEXT("MirrorDir"));
		}
		return Singleton;
	}
	template<> ANIMNODE_API UEnum* StaticEnum<MirrorDir>()
	{
		return MirrorDir_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MirrorDir(MirrorDir_StaticEnum, TEXT("/Script/AnimNode"), TEXT("MirrorDir"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AnimNode_MirrorDir_Hash() { return 3710377936U; }
	UEnum* Z_Construct_UEnum_AnimNode_MirrorDir()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AnimNode();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MirrorDir"), 0, Get_Z_Construct_UEnum_AnimNode_MirrorDir_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MirrorDir::None", (int64)MirrorDir::None },
				{ "MirrorDir::X_Axis", (int64)MirrorDir::X_Axis },
				{ "MirrorDir::Y_Axis", (int64)MirrorDir::Y_Axis },
				{ "MirrorDir::Z_Axis", (int64)MirrorDir::Z_Axis },
				{ "MirrorDir::XY_Axis", (int64)MirrorDir::XY_Axis },
				{ "MirrorDir::YZ_Axis", (int64)MirrorDir::YZ_Axis },
				{ "MirrorDir::XZ_Axis", (int64)MirrorDir::XZ_Axis },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n*\n*/" },
				{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
				{ "None.Comment", "/**\n*\n*/" },
				{ "None.Name", "MirrorDir::None" },
				{ "X_Axis.Comment", "/**\n*\n*/" },
				{ "X_Axis.Name", "MirrorDir::X_Axis" },
				{ "XY_Axis.Comment", "/**\n*\n*/" },
				{ "XY_Axis.Name", "MirrorDir::XY_Axis" },
				{ "XZ_Axis.Comment", "/**\n*\n*/" },
				{ "XZ_Axis.Name", "MirrorDir::XZ_Axis" },
				{ "Y_Axis.Comment", "/**\n*\n*/" },
				{ "Y_Axis.Name", "MirrorDir::Y_Axis" },
				{ "YZ_Axis.Comment", "/**\n*\n*/" },
				{ "YZ_Axis.Name", "MirrorDir::YZ_Axis" },
				{ "Z_Axis.Comment", "/**\n*\n*/" },
				{ "Z_Axis.Name", "MirrorDir::Z_Axis" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AnimNode,
				nullptr,
				"MirrorDir",
				"MirrorDir",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UAnimationMirrorData::execGetBoneRightAxisDataStructure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<MirrorDir>*)Z_Param__Result=P_THIS->GetBoneRightAxisDataStructure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMirrorData::execGetBoneMirrorAxisDataStructure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<MirrorDir>*)Z_Param__Result=P_THIS->GetBoneMirrorAxisDataStructure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMirrorData::execGetBoneMirrorDataStructure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetBoneMirrorDataStructure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMirrorData::execGetMirrorMappedBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bone_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetMirrorMappedBone(Z_Param_bone_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMirrorData::execGetPelvisBoneName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetPelvisBoneName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMirrorData::execSetPelvisBoneName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bone_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPelvisBoneName(Z_Param_bone_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMirrorData::execSetMirrorMappedData)
	{
		P_GET_TARRAY(FName,Z_Param_pMirrorData);
		P_GET_TARRAY(MirrorDir,Z_Param_pMirrorAxisData);
		P_GET_TARRAY(MirrorDir,Z_Param_pRightAxisData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMirrorMappedData(Z_Param_pMirrorData,Z_Param_pMirrorAxisData,Z_Param_pRightAxisData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationMirrorData::execSetMirrorMappedBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_bone_name);
		P_GET_PROPERTY(FNameProperty,Z_Param_mirror_bone_name);
		P_GET_ENUM(MirrorDir,Z_Param_mirror_axis);
		P_GET_ENUM(MirrorDir,Z_Param_right_axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMirrorMappedBone(Z_Param_bone_name,Z_Param_mirror_bone_name,MirrorDir(Z_Param_mirror_axis),MirrorDir(Z_Param_right_axis));
		P_NATIVE_END;
	}
	void UAnimationMirrorData::StaticRegisterNativesUAnimationMirrorData()
	{
		UClass* Class = UAnimationMirrorData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBoneMirrorAxisDataStructure", &UAnimationMirrorData::execGetBoneMirrorAxisDataStructure },
			{ "GetBoneMirrorDataStructure", &UAnimationMirrorData::execGetBoneMirrorDataStructure },
			{ "GetBoneRightAxisDataStructure", &UAnimationMirrorData::execGetBoneRightAxisDataStructure },
			{ "GetMirrorMappedBone", &UAnimationMirrorData::execGetMirrorMappedBone },
			{ "GetPelvisBoneName", &UAnimationMirrorData::execGetPelvisBoneName },
			{ "SetMirrorMappedBone", &UAnimationMirrorData::execSetMirrorMappedBone },
			{ "SetMirrorMappedData", &UAnimationMirrorData::execSetMirrorMappedData },
			{ "SetPelvisBoneName", &UAnimationMirrorData::execSetPelvisBoneName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics
	{
		struct AnimationMirrorData_eventGetBoneMirrorAxisDataStructure_Parms
		{
			TArray<MirrorDir> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventGetBoneMirrorAxisDataStructure_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, nullptr, "GetBoneMirrorAxisDataStructure", nullptr, nullptr, sizeof(AnimationMirrorData_eventGetBoneMirrorAxisDataStructure_Parms), Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics
	{
		struct AnimationMirrorData_eventGetBoneMirrorDataStructure_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventGetBoneMirrorDataStructure_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, nullptr, "GetBoneMirrorDataStructure", nullptr, nullptr, sizeof(AnimationMirrorData_eventGetBoneMirrorDataStructure_Parms), Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics
	{
		struct AnimationMirrorData_eventGetBoneRightAxisDataStructure_Parms
		{
			TArray<MirrorDir> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventGetBoneRightAxisDataStructure_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, nullptr, "GetBoneRightAxisDataStructure", nullptr, nullptr, sizeof(AnimationMirrorData_eventGetBoneRightAxisDataStructure_Parms), Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics
	{
		struct AnimationMirrorData_eventGetMirrorMappedBone_Parms
		{
			FName bone_name;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone_name;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::NewProp_bone_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::NewProp_bone_name = { "bone_name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventGetMirrorMappedBone_Parms, bone_name), METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::NewProp_bone_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::NewProp_bone_name_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventGetMirrorMappedBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::NewProp_bone_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, nullptr, "GetMirrorMappedBone", nullptr, nullptr, sizeof(AnimationMirrorData_eventGetMirrorMappedBone_Parms), Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics
	{
		struct AnimationMirrorData_eventGetPelvisBoneName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventGetPelvisBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, nullptr, "GetPelvisBoneName", nullptr, nullptr, sizeof(AnimationMirrorData_eventGetPelvisBoneName_Parms), Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics
	{
		struct AnimationMirrorData_eventSetMirrorMappedBone_Parms
		{
			FName bone_name;
			FName mirror_bone_name;
			MirrorDir mirror_axis;
			MirrorDir right_axis;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mirror_bone_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_mirror_bone_name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mirror_axis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mirror_axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mirror_axis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_right_axis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_right_axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_right_axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_bone_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_bone_name = { "bone_name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedBone_Parms, bone_name), METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_bone_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_bone_name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_bone_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_bone_name = { "mirror_bone_name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedBone_Parms, mirror_bone_name), METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_bone_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_bone_name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_axis = { "mirror_axis", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedBone_Parms, mirror_axis), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_axis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_right_axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_right_axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_right_axis = { "right_axis", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedBone_Parms, right_axis), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_right_axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_right_axis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_bone_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_bone_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_axis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_mirror_axis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_right_axis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::NewProp_right_axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "Comment", "//Functions  \n" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, nullptr, "SetMirrorMappedBone", nullptr, nullptr, sizeof(AnimationMirrorData_eventSetMirrorMappedBone_Parms), Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics
	{
		struct AnimationMirrorData_eventSetMirrorMappedData_Parms
		{
			TArray<FName> pMirrorData;
			TArray<MirrorDir> pMirrorAxisData;
			TArray<MirrorDir> pRightAxisData;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_pMirrorData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pMirrorData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pMirrorAxisData_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pMirrorAxisData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pMirrorAxisData;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_pRightAxisData_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_pRightAxisData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pRightAxisData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorData_Inner = { "pMirrorData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorData = { "pMirrorData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedData_Parms, pMirrorData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorAxisData_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorAxisData_Inner = { "pMirrorAxisData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorAxisData = { "pMirrorAxisData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedData_Parms, pMirrorAxisData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pRightAxisData_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pRightAxisData_Inner = { "pRightAxisData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pRightAxisData = { "pRightAxisData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventSetMirrorMappedData_Parms, pRightAxisData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorAxisData_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorAxisData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pMirrorAxisData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pRightAxisData_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pRightAxisData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::NewProp_pRightAxisData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, nullptr, "SetMirrorMappedData", nullptr, nullptr, sizeof(AnimationMirrorData_eventSetMirrorMappedData_Parms), Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics
	{
		struct AnimationMirrorData_eventSetPelvisBoneName_Parms
		{
			FName bone_name;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::NewProp_bone_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::NewProp_bone_name = { "bone_name", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationMirrorData_eventSetPelvisBoneName_Parms, bone_name), METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::NewProp_bone_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::NewProp_bone_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::NewProp_bone_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationMirrorData, nullptr, "SetPelvisBoneName", nullptr, nullptr, sizeof(AnimationMirrorData_eventSetPelvisBoneName_Parms), Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationMirrorData_NoRegister()
	{
		return UAnimationMirrorData::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationMirrorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MirrorAxis_Rot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorAxis_Rot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MirrorAxis_Rot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RightAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RightAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PelvisMirrorAxis_Rot_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisMirrorAxis_Rot_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PelvisMirrorAxis_Rot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PelvisRightAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PelvisRightAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PelvisRightAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationMirrorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNode,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationMirrorData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorAxisDataStructure, "GetBoneMirrorAxisDataStructure" }, // 4007490095
		{ &Z_Construct_UFunction_UAnimationMirrorData_GetBoneMirrorDataStructure, "GetBoneMirrorDataStructure" }, // 769128258
		{ &Z_Construct_UFunction_UAnimationMirrorData_GetBoneRightAxisDataStructure, "GetBoneRightAxisDataStructure" }, // 156359683
		{ &Z_Construct_UFunction_UAnimationMirrorData_GetMirrorMappedBone, "GetMirrorMappedBone" }, // 2671289063
		{ &Z_Construct_UFunction_UAnimationMirrorData_GetPelvisBoneName, "GetPelvisBoneName" }, // 3878755957
		{ &Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedBone, "SetMirrorMappedBone" }, // 4194847524
		{ &Z_Construct_UFunction_UAnimationMirrorData_SetMirrorMappedData, "SetMirrorMappedData" }, // 1727260540
		{ &Z_Construct_UFunction_UAnimationMirrorData_SetPelvisBoneName, "SetPelvisBoneName" }, // 244864805
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationMirrorData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationMirrorData.h" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_MirrorAxis_Rot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_MirrorAxis_Rot_MetaData[] = {
		{ "Category", "Mirror Animation" },
		{ "Comment", "//Shows mirror axis. \n" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
		{ "ToolTip", "Shows mirror axis." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_MirrorAxis_Rot = { "MirrorAxis_Rot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationMirrorData, MirrorAxis_Rot), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_MirrorAxis_Rot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_MirrorAxis_Rot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_RightAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_RightAxis_MetaData[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_RightAxis = { "RightAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationMirrorData, RightAxis), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_RightAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_RightAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisMirrorAxis_Rot_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisMirrorAxis_Rot_MetaData[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisMirrorAxis_Rot = { "PelvisMirrorAxis_Rot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationMirrorData, PelvisMirrorAxis_Rot), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisMirrorAxis_Rot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisMirrorAxis_Rot_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisRightAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisRightAxis_MetaData[] = {
		{ "Category", "Mirror Animation" },
		{ "ModuleRelativePath", "Public/AnimationMirrorData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisRightAxis = { "PelvisRightAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationMirrorData, PelvisRightAxis), Z_Construct_UEnum_AnimNode_MirrorDir, METADATA_PARAMS(Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisRightAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisRightAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationMirrorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_MirrorAxis_Rot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_MirrorAxis_Rot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_RightAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_RightAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisMirrorAxis_Rot_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisMirrorAxis_Rot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisRightAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationMirrorData_Statics::NewProp_PelvisRightAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationMirrorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationMirrorData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationMirrorData_Statics::ClassParams = {
		&UAnimationMirrorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationMirrorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationMirrorData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationMirrorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationMirrorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationMirrorData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationMirrorData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationMirrorData, 1654883945);
	template<> ANIMNODE_API UClass* StaticClass<UAnimationMirrorData>()
	{
		return UAnimationMirrorData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationMirrorData(Z_Construct_UClass_UAnimationMirrorData, &UAnimationMirrorData::StaticClass, TEXT("/Script/AnimNode"), TEXT("UAnimationMirrorData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationMirrorData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
