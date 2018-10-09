// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPSPROJECT_FPSProjectile_generated_h
#error "FPSProjectile.generated.h already included, missing '#pragma once' in FPSProjectile.h"
#endif
#define FPSPROJECT_FPSProjectile_generated_h

#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormaImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormaImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent); \
		P_GET_STRUCT(FVector,Z_Param_NormaImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormaImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSProjectile(); \
	friend struct Z_Construct_UClass_AFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectile)


#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPSProjectile(); \
	friend struct Z_Construct_UClass_AFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AFPSProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSProject"), NO_API) \
	DECLARE_SERIALIZER(AFPSProjectile)


#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectile(AFPSProjectile&&); \
	NO_API AFPSProjectile(const AFPSProjectile&); \
public:


#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSProjectile(AFPSProjectile&&); \
	NO_API AFPSProjectile(const AFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSProjectile)


#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_PRIVATE_PROPERTY_OFFSET
#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_11_PROLOG
#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_RPC_WRAPPERS \
	FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_INCLASS \
	FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_INCLASS_NO_PURE_DECLS \
	FPSProjectClone_Source_FPSProject_FPSProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProjectClone_Source_FPSProject_FPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
