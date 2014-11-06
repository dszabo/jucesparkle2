#ifndef SECONDSUBCOMPONENT_H_INCLUDED
#define SECONDSUBCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class SecondSubComponent : public Component, public ButtonListener
{
public:
	//==============================================================================
	SecondSubComponent();
	~SecondSubComponent();

	void paint(Graphics&);
	void resized();
	void buttonClicked(Button* button);

private:
	//==============================================================================
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SecondSubComponent)
};


#endif  // SECONDSUBCOMPONENT_H_INCLUDED