#include "SecondSubComponent.h"

SecondSubComponent::SecondSubComponent()
{
	setSize(500, 400);
}

SecondSubComponent::~SecondSubComponent()
{
}

void SecondSubComponent::paint(Graphics& g)
{
	g.fillAll(Colour(0xA7CCEBff));
	g.setFont(Font(16.0f));
	g.setColour(Colours::black);
}

void SecondSubComponent::resized()
{
}

void SecondSubComponent::buttonClicked(Button* buttonThatWasClicked)
{
}

