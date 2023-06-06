// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNode/Public/AnimNode_Mirror.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Mirror() {}
// Cross Module References
	ANIMNODE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror();
	UPackage* Z_Construct_UPackage__Script_AnimNode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ANIMNODE_API UScriptStruct* Z_Construct_UScriptStruct_FBonesTransfroms();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_Mirror>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_Mirror cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_Mirror::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMNODE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Mirror, Z_Construct_UPackage__Script_AnimNode(), TEXT("AnimNode_Mirror"), sizeof(FAnimNode_Mirror), Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash());
	}
	return Singleton;
}
template<> ANIMNODE_API UScriptStruct* StaticStruct<FAnimNode_Mirror>()
{
	return FAnimNode_Mirror::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_Mirror(FAnimNode_Mirror::StaticStruct, TEXT("/Script/AnimNode"), TEXT("AnimNode_Mirror"), false, nullptr, nullptr);
static struct FScriptStruct_AnimNode_StaticRegisterNativesFAnimNode_Mirror
{
	FScriptStruct_AnimNode_StaticRegisterNativesFAnimNode_Mirror()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_Mirror>(FName(TEXT("AnimNode_Mirror")));
	}
} ScriptStruct_AnimNode_StaticRegisterNativesFAnimNode_Mirror;
	struct Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SetOfBonesToModify_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetOfBonesToModify_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SetOfBonesToModify;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesTransfroms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesTransfroms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScaleSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Mirror>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_SetOfBonesToModify_Inner = { "SetOfBonesToModify", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_SetOfBonesToModify_MetaData[] = {
		{ "Comment", "/** Array of bones we will modify**/" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Array of bones we will modify*" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_SetOfBonesToModify = { "SetOfBonesToModify", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, SetOfBonesToModify), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_SetOfBonesToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_SetOfBonesToModify_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BonesTransfroms_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** New translation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New translation of bone to apply." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BonesTransfroms = { "BonesTransfroms", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, BonesTransfroms), Z_Construct_UScriptStruct_FBonesTransfroms, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BonesTransfroms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BonesTransfroms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, TranslationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, RotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleMode_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleMode = { "ScaleMode", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, ScaleMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationSpace_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Reference frame to apply Translation in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Reference frame to apply Translation in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationSpace = { "TranslationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, TranslationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Reference frame to apply Rotation in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Reference frame to apply Rotation in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, RotationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleSpace_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Reference frame to apply Scale in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Reference frame to apply Scale in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleSpace = { "ScaleSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_Mirror, ScaleSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_SetOfBonesToModify_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_SetOfBonesToModify,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_BonesTransfroms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_TranslationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_RotationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::NewProp_ScaleSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNode,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_Mirror",
		sizeof(FAnimNode_Mirror),
		alignof(FAnimNode_Mirror),
		Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Mirror()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimNode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_Mirror"), sizeof(FAnimNode_Mirror), Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_Mirror_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_Mirror_Hash() { return 1057197220U; }
class UScriptStruct* FBonesTransfroms::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMNODE_API uint32 Get_Z_Construct_UScriptStruct_FBonesTransfroms_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBonesTransfroms, Z_Construct_UPackage__Script_AnimNode(), TEXT("BonesTransfroms"), sizeof(FBonesTransfroms), Get_Z_Construct_UScriptStruct_FBonesTransfroms_Hash());
	}
	return Singleton;
}
template<> ANIMNODE_API UScriptStruct* StaticStruct<FBonesTransfroms>()
{
	return FBonesTransfroms::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBonesTransfroms(FBonesTransfroms::StaticStruct, TEXT("/Script/AnimNode"), TEXT("BonesTransfroms"), false, nullptr, nullptr);
static struct FScriptStruct_AnimNode_StaticRegisterNativesFBonesTransfroms
{
	FScriptStruct_AnimNode_StaticRegisterNativesFBonesTransfroms()
	{
		UScriptStruct::DeferCppStructOps<FBonesTransfroms>(FName(TEXT("BonesTransfroms")));
	}
} ScriptStruct_AnimNode_StaticRegisterNativesFBonesTransfroms;
	struct Z_Construct_UScriptStruct_FBonesTransfroms_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Map_IdxTransform_ValueProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Map_IdxTransform_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Map_IdxTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Map_IdxTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBonesTransfroms_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBonesTransfroms>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform_ValueProp = { "Map_IdxTransform", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform_Key_KeyProp = { "Map_IdxTransform_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform_MetaData[] = {
		{ "Category", "BonesTransfroms" },
		{ "Comment", "// Array of names\n" },
		{ "ModuleRelativePath", "Public/AnimNode_Mirror.h" },
		{ "ToolTip", "Array of names" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform = { "Map_IdxTransform", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBonesTransfroms, Map_IdxTransform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBonesTransfroms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBonesTransfroms_Statics::NewProp_Map_IdxTransform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBonesTransfroms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNode,
		nullptr,
		&NewStructOps,
		"BonesTransfroms",
		sizeof(FBonesTransfroms),
		alignof(FBonesTransfroms),
		Z_Construct_UScriptStruct_FBonesTransfroms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBonesTransfroms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBonesTransfroms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBonesTransfroms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBonesTransfroms()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBonesTransfroms_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimNode();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BonesTransfroms"), sizeof(FBonesTransfroms), Get_Z_Construct_UScriptStruct_FBonesTransfroms_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBonesTransfroms_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBonesTransfroms_Hash() { return 4017723299U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
