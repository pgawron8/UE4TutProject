// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSPROJECT_FPSHUD_generated_h
#error "FPSHUD.generated.h already included, missing '#pragma once' in FPSHUD.h"
#endif
#define FPSPROJECT_FPSHUD_generated_h

#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_RPC_WRAPPERS
#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSHUD(); \
	friend struct Z_Construct_UClass_AFPSHUD_Statics; \
public: \
	DECLARE_CLASS(AFPSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSHUD)


#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFPSHUD(); \
	friend struct Z_Construct_UClass_AFPSHUD_Statics; \
public: \
	DECLARE_CLASS(AFPSHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSHUD)


#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSHUD(AFPSHUD&&); \
	NO_API AFPSHUD(const AFPSHUD&); \
public:


#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSHUD(AFPSHUD&&); \
	NO_API AFPSHUD(const AFPSHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSHUD)


#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CrosshairTexture() { return STRUCT_OFFSET(AFPSHUD, CrosshairTexture); }


#define FPSProjectClone_Source_FPSProject_FPSHUD_h_15_PROLOG
#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProjectClone_Source_FPSProject_FPSHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FPSProjectClone_Source_FPSProject_FPSHUD_h_18_RPC_WRAPPERS \
	FPSProjectClone_Source_FPSProject_FPSHUD_h_18_INCLASS \
	FPSProjectClone_Source_FPSProject_FPSHUD_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProjectClone_Source_FPSProject_FPSHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProjectClone_Source_FPSProject_FPSHUD_h_18_PRIVATE_PROPERTY_OFFSET \
	FPSProjectClone_Source_FPSProject_FPSHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProjectClone_Source_FPSProject_FPSHUD_h_18_INCLASS_NO_PURE_DECLS \
	FPSProjectClone_Source_FPSProject_FPSHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProjectClone_Source_FPSProject_FPSHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
