// Fill out your copyright notice in the Description page of Project Settings.


#include "ToolLibrary.h"

FString UToolLibrary::PrintObject(const UObject* Object, EToolPrintFlags::Type PrintType, FString Prefix)
{
	if (nullptr == Object)
	{
		return "";
	}
	FString Result = PrintObjectSelf(Object, PrintType, Prefix);
	bool IsMetaType = false;

	if (const UEnum* EnumClass = Cast<const UEnum>(Object))
	{
		Result += PrintEnumSelf(EnumClass, PrintType, Prefix);
		IsMetaType = true;
	}

	if (const UScriptStruct* StructClass = Cast<const UScriptStruct>(Object))
	{
		Result += PrintStructSelf(StructClass, nullptr, PrintType, Prefix);
		IsMetaType = true;
	}

	if (const UClass* ClassObj = Cast<const UClass>(Object))
	{
		Result += PrintClassSelf(ClassObj, nullptr, PrintType, Prefix);
		IsMetaType = true;
	}

	if (const UFunction* Func = Cast<const UFunction>(Object))
	{
		Result += PrintFunction(Func, PrintType, Prefix);
		IsMetaType = true;
	}

	if (!IsMetaType && EnumHasAnyFlags(PrintType, EToolPrintFlags::CLass))
	{
		Result += FString::Printf(L"%s\tClass:\n", *Prefix);

		UClass* ClassObj = Object->GetClass();
		Result += PrintObjectSelf(ClassObj, PrintType, Prefix + "\t");
		Result += PrintClassSelf(ClassObj, Object, PrintType, Prefix + "\t");
	}

	if (EnumHasAnyFlags(PrintType, EToolPrintFlags::Recursive))
	{
		TArray<UObject*> ChildObjects;
		GetObjectsWithOuter(Object, ChildObjects, false);
		for (const UObject* Child : ChildObjects)
		{
			Result += PrintObject(Child, PrintType, Prefix + "\t");
		}
	}

	return Result;
}

FString UToolLibrary::PrintObjectSelf(const UObject* Object, EToolPrintFlags::Type PrintType, FString Prefix)
{
	FString Result;
	Result += FString::Printf(TEXT("%s<%s\t%s\t%s>\n"), *Prefix, *Object->GetName(), *Object->GetClass()->GetName(), *Object->GetPathName());
	return Result;
}

FString UToolLibrary::PrintEnumSelf(const UObject* Object, EToolPrintFlags::Type PrintType, FString Prefix)
{
	return "";
}

FString UToolLibrary::PrintStructSelf(const UScriptStruct* StructObj, const UObject* Object, EToolPrintFlags::Type PrintType, FString Prefix)
{
	return "";
}

FString UToolLibrary::PrintClassSelf(const UClass* ClassObj, const UObject* Object, EToolPrintFlags::Type PrintType, FString Prefix)
{
	return "";
}

FString UToolLibrary::PrintFunction(const UFunction* FunctionObj, EToolPrintFlags::Type PrintType, FString Prefix)
{
	return "";
}

FString UToolLibrary::PrintProperty(const FProperty* Property, const UObject* Object, EToolPrintFlags::Type PrintType, FString Prefix)
{
	FString Result;

	if (EnumHasAnyFlags(PrintType, EToolPrintFlags::Parameters))
	{
		bool IsParam = (Property->PropertyFlags & CPF_Parm) != 0;
		bool IsOutParam = (Property->PropertyFlags & CPF_OutParm) != 0;
		bool IsReturnParam = (Property->PropertyFlags & CPF_ReturnParm) != 0;

		if (IsReturnParam)
		{
			Result += Prefix + Property->GetCPPType();
		}
		else
		{
			if (IsOutParam)
			{
				Result += FString::Printf(TEXT("%s& %s"), *Property->GetCPPType(), *Property->GetFName().ToString());
			}
			else
			{
				Result += FString::Printf(TEXT("%s %s"), *Property->GetCPPType(), *Property->GetFName().ToString());
			}
		}
	}
	else
	{
		Result += Prefix;
		Result += Property->GetCPPType();
		Result += " ";
		Result += Property->GetFName().ToString();
	}

	return Result;
}

bool UToolLibrary::EnumHasAnyFlags(const EToolPrintFlags::Type PrintType, const EToolPrintFlags::Type CheckType)
{
	switch (PrintType)
	{
	case EToolPrintFlags::All:
		return true;
	case EToolPrintFlags::PackageDefault:
		if (CheckType == EToolPrintFlags::Recursive
			|| CheckType == EToolPrintFlags::PackageDefault)
		{
			return true;
		}
		else
		{
			return false;
		}
	default:
		break;
	}
	return true;
}
