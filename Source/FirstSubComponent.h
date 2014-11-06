#ifndef FIRSTSUBCOMPONENT_H_INCLUDED
#define FIRSTSUBCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class FirstSubComponent : public Component, public ButtonListener
{
public:
	//==============================================================================
	FirstSubComponent();
	~FirstSubComponent();

	void paint(Graphics&);
	void resized();
	void buttonClicked(Button* button);

private:
	//==============================================================================
	ScopedPointer<TextButton> button1;
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(FirstSubComponent)
};


#endif  // FIRSTSUBCOMPONENT_H_INCLUDED