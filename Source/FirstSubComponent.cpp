#include "FirstSubComponent.h"

#if JUCE_MSVC
#include <Windows.h>
#include <winsparkle.h>
#endif

FirstSubComponent::FirstSubComponent()
{
	button1 = new TextButton(L"Check for updates");
	button1->setBounds(10, 45, 150, 25);
	button1->addListener(this);
	addAndMakeVisible(button1);

	setSize(500, 400);
}

FirstSubComponent::~FirstSubComponent()
{
}

void FirstSubComponent::paint(Graphics& g)
{
	g.fillAll(Colour(0xA7CCEBff));
	g.setFont(Font(16.0f));
	g.setColour(Colours::black);
}

void FirstSubComponent::resized()
{
}

void FirstSubComponent::buttonClicked(Button* buttonThatWasClicked)
{
#if JUCE_MSVC
	if (buttonThatWasClicked == button1) {
		win_sparkle_check_update_with_ui();
	}
#endif
}

