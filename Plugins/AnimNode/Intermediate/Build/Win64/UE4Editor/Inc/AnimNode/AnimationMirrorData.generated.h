// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class MirrorDir : uint8;
#ifdef ANIMNODE_AnimationMirrorData_generated_h
#error "AnimationMirrorData.generated.h already included, missing '#pragma once' in AnimationMirrorData.h"
#endif
#define ANIMNODE_AnimationMirrorData_generated_h

#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_SPARSE_DATA
#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBoneRightAxisDataStructure); \
	DECLARE_FUNCTION(execGetBoneMirrorAxisDataStructure); \
	DECLARE_FUNCTION(execGetBoneMirrorDataStructure); \
	DECLARE_FUNCTION(execGetMirrorMappedBone); \
	DECLARE_FUNCTION(execGetPelvisBoneName); \
	DECLARE_FUNCTION(execSetPelvisBoneName); \
	DECLARE_FUNCTION(execSetMirrorMappedData); \
	DECLARE_FUNCTION(execSetMirrorMappedBone);


#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBoneRightAxisDataStructure); \
	DECLARE_FUNCTION(execGetBoneMirrorAxisDataStructure); \
	DECLARE_FUNCTION(execGetBoneMirrorDataStructure); \
	DECLARE_FUNCTION(execGetMirrorMappedBone); \
	DECLARE_FUNCTION(execGetPelvisBoneName); \
	DECLARE_FUNCTION(execSetPelvisBoneName); \
	DECLARE_FUNCTION(execSetMirrorMappedData); \
	DECLARE_FUNCTION(execSetMirrorMappedBone);


#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationMirrorData(); \
	friend struct Z_Construct_UClass_UAnimationMirrorData_Statics; \
public: \
	DECLARE_CLASS(UAnimationMirrorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNode"), NO_API) \
	DECLARE_SERIALIZER(UAnimationMirrorData)


#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationMirrorData(); \
	friend struct Z_Construct_UClass_UAnimationMirrorData_Statics; \
public: \
	DECLARE_CLASS(UAnimationMirrorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimNode"), NO_API) \
	DECLARE_SERIALIZER(UAnimationMirrorData)


#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationMirrorData(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationMirrorData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationMirrorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationMirrorData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationMirrorData(UAnimationMirrorData&&); \
	NO_API UAnimationMirrorData(const UAnimationMirrorData&); \
public:


#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationMirrorData(UAnimationMirrorData&&); \
	NO_API UAnimationMirrorData(const UAnimationMirrorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationMirrorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationMirrorData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAnimationMirrorData)


#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_PRIVATE_PROPERTY_OFFSET
#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_29_PROLOG
#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_PRIVATE_PROPERTY_OFFSET \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_SPARSE_DATA \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_RPC_WRAPPERS \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_INCLASS \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_PRIVATE_PROPERTY_OFFSET \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_SPARSE_DATA \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_INCLASS_NO_PURE_DECLS \
	unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMNODE_API UClass* StaticClass<class UAnimationMirrorData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID unrealhandgrasp_Plugins_AnimNode_Source_AnimNode_Public_AnimationMirrorData_h


#define FOREACH_ENUM_MIRRORDIR(op) \
	op(MirrorDir::None) \
	op(MirrorDir::X_Axis) \
	op(MirrorDir::Y_Axis) \
	op(MirrorDir::Z_Axis) \
	op(MirrorDir::XY_Axis) \
	op(MirrorDir::YZ_Axis) \
	op(MirrorDir::XZ_Axis) 

enum class MirrorDir : uint8;
template<> ANIMNODE_API UEnum* StaticEnum<MirrorDir>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
