/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"
#include "FloatingToolWindow.h"



//==============================================================================
MainContentComponent::MainContentComponent()
{
	LookAndFeel::setDefaultLookAndFeel(&lookAndFeelV3);

	button1 = new TextButton(L"Open a dialog");
	button2 = new TextButton(L"Open a second dialog");
	infoLabel = new Label(L"", L"This is just info");
	infoLabel->setBounds(10, 10, 150, 25);
	button1->setBounds(10, 45, 150, 25);
	button2->setBounds(10, 80, 150, 25);
	button1->addListener(this);
	button2->addListener(this);
	
	addAndMakeVisible(infoLabel);
	addAndMakeVisible(button1);
	addAndMakeVisible(button2);
    setSize (500, 400);
}

MainContentComponent::~MainContentComponent()
{
}

void MainContentComponent::paint (Graphics& g)
{
	g.fillAll(Colour(0xB7CCEBff));
    //g.fillAll (Colour (0xffeeddff));

    g.setFont (Font (16.0f));
    g.setColour (Colours::black);
    g.drawText ("Hello World v1.0.2!", getLocalBounds(), Justification::centred, true);
}

void MainContentComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}

void MainContentComponent::buttonClicked(Button* buttonThatWasClicked)
{
	if (buttonThatWasClicked == button1) {
		//infoLabel->setText(L"button1", NotificationType::dontSendNotification);
		showFirstToolWindow(firstComponent);
	}

	if (buttonThatWasClicked == button2) {
		//infoLabel->setText(L"button2", NotificationType::dontSendNotification);
		showSecondToolWindow(secondComponent);
	}
}

void MainContentComponent::showFirstToolWindow(ScopedPointer<Component>& ownerPointer)
{
	if (ownerPointer != nullptr)
	{
		ownerPointer->toFront(true);
	}
	else
	{
		new FloatingToolWindow("First window",
			"",
			new FirstSubComponent(), ownerPointer,
			600, 300,
			600, 300, 600, 300);
	}
}

void MainContentComponent::showSecondToolWindow(ScopedPointer<Component>& ownerPointer)
{
	if (ownerPointer != nullptr)
	{
		ownerPointer->toFront(true);
	}
	else
	{
		new FloatingToolWindow("Second window",
			"",
			new SecondSubComponent(), ownerPointer,
			600, 300,
			600, 300, 600, 300);
	}
}
