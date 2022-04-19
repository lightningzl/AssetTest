// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ToolLibrary.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
namespace EToolPrintFlags
{
	enum Type
	{
		/**  */
		PackageDefault,

		/**  */
		CLass,

		/**  */
		Recursive,

		/**  */
		Parameters,

		/**  */
		WithMetaData,

		/**  */
		All

	};
}

UCLASS()
class ASSETCHECKER_API UToolLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Print Object", CompactNodeTitle = "Print Obj", Keywords = "Print object"), Category = ToolLibrary)
		static FString PrintObject(const UObject* Object, EToolPrintFlags::Type PrintType = EToolPrintFlags::All, FString Prefix = "");
	UFUNCTION(BlueprintCallable, Category = ToolLibrary)
		static FString PrintObjectSelf(const UObject* Object, EToolPrintFlags::Type PrintType = EToolPrintFlags::All, FString Prefix = "");
	UFUNCTION(BlueprintCallable, Category = ToolLibrary)
		static FString PrintEnumSelf(const UObject* Object, EToolPrintFlags::Type PrintType = EToolPrintFlags::All, FString Prefix = "");
	UFUNCTION(BlueprintCallable, Category = ToolLibrary)
		static FString PrintStructSelf(const UScriptStruct* StructObj, const UObject* Object, EToolPrintFlags::Type PrintType = EToolPrintFlags::All, FString Prefix = "");
	UFUNCTION(BlueprintCallable, Category = ToolLibrary)
		static FString PrintClassSelf(const UClass* ClassObj, const UObject* Object, EToolPrintFlags::Type PrintType = EToolPrintFlags::All, FString Prefix = "");
	UFUNCTION(BlueprintCallable, Category = ToolLibrary)
		static FString PrintFunction(const UFunction* FunctionObj, EToolPrintFlags::Type PrintType = EToolPrintFlags::All, FString Prefix = "");
	
		static FString PrintProperty(const FProperty* Property, const UObject* Object, EToolPrintFlags::Type PrintType = EToolPrintFlags::All, FString Prefix = "");
	UFUNCTION(BlueprintCallable, Category = ToolLibrary)
		static FString PrintParents(const UObject* Object);
	UFUNCTION(BlueprintCallable, Category = ToolLibrary)
		static FString GetClassHierarchyString(const UStruct* StructClass);
#if WITH_METADATA
		static FString PrintMetaDataMap(const TMap<FName, FString>* MetaDataMap, EToolPrintFlags::Type PrintType, FString Prefix);
#endif
	UFUNCTION(BlueprintCallable, Category = ToolLibrary)
		static bool EnumHasAnyFlags(const EToolPrintFlags::Type PrintType, const EToolPrintFlags::Type CheckType);

};
