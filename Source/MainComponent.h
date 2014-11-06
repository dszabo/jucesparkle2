/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "FirstSubComponent.h"
#include "SecondSubComponent.h"


//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainContentComponent   : public Component, public ButtonListener
{
public:
    //==============================================================================
    MainContentComponent();
    ~MainContentComponent();

    void paint (Graphics&);
    void resized();
	void buttonClicked(Button* button);
	void showFirstToolWindow(ScopedPointer<Component>& ownerPointer);
	void showSecondToolWindow(ScopedPointer<Component>& ownerPointer);

private:
    //==============================================================================
	ScopedPointer<TextButton> button1;
	ScopedPointer<TextButton> button2;
	ScopedPointer<Label> infoLabel;
	ScopedPointer<Component> firstComponent;
	ScopedPointer<Component> secondComponent;
	LookAndFeel_V3 lookAndFeelV3;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
