// Fill out your copyright notice in the Description page of Project Settings.


#include "MyClass.h"
#include "Blueprint/UserWidget.h"
#include "Framework/Docking/TabManager.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/SWeakWidget.h"

void UMyClass::Initialize(FSubsystemCollectionBase& Collection)
{
	UE_LOG(LogTemp, Warning, TEXT("UMyClass::Initialize\n"));
}

void UMyClass::ShowWidget(const UObject* WorldContextObject)
{
	UUserWidget* TestWidget = nullptr;
	TSubclassOf<UUserWidget> TestWidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/Blueprint/NewBlueprint.NewBlueprint_C"));
	
	UWorld* WidgetWorld = WorldContextObject->GetWorld();
	if (WidgetWorld)
	{
		TestWidget = CreateWidget<UUserWidget>(WidgetWorld, TestWidgetClass);
		//TestWidget->AddToViewport();
	}

	if (GEngine && GEngine->GameViewport)
	{
		TArray<FName> TabName = { "LeftTab", "RightTopTab", "RightBottomTab" };

		FGlobalTabmanager::Get()->RegisterTabSpawner(TabName[0], FOnSpawnTab::CreateLambda(
			[&](const FSpawnTabArgs& Args)->TSharedRef<SDockTab> {
				return SNew(SDockTab)
					[
						TestWidget->TakeWidget()
					];
			}
		));

		FGlobalTabmanager::Get()->RegisterTabSpawner(TabName[1], FOnSpawnTab::CreateLambda(
			[&](const FSpawnTabArgs& Args)->TSharedRef<SDockTab> {
				return SNew(SDockTab)
					[
						SNew(SButton).Text(FText::FromName(TabName[1]))
					];
			}
		));

		FGlobalTabmanager::Get()->RegisterTabSpawner(TabName[2], FOnSpawnTab::CreateLambda(
			[&](const FSpawnTabArgs& Args)->TSharedRef<SDockTab> {
				return SNew(SDockTab)
					[
						SNew(SButton).Text(FText::FromName(TabName[2]))
					];
			}
		));

		const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout(TEXT("Layout"))
			->AddArea(
				FTabManager::NewPrimaryArea()
				->SetOrientation(EOrientation::Orient_Horizontal)
				->Split(
					FTabManager::NewStack()
					->AddTab(TabName[0], ETabState::OpenedTab)
				)
				->Split(
					FTabManager::NewSplitter()
					->SetOrientation(EOrientation::Orient_Vertical)
					->Split(
						FTabManager::NewStack()
						->AddTab(TabName[1], ETabState::OpenedTab)
					)
					->Split(
						FTabManager::NewStack()
						->AddTab(TabName[2], ETabState::OpenedTab)
					)
				)
			);
		//FGlobalTabmanager::Get()->RestoreFrom(Layout, GEngine->GameViewport->GetWindow());
		TSharedRef<SWidget> TabContents = FGlobalTabmanager::Get()->RestoreFrom(Layout, TSharedPtr<SWindow>()).ToSharedRef();
		GEngine->GameViewport->AddViewportWidgetContent(TabContents);
	}

}
