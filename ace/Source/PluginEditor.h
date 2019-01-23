/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class AceAudioProcessorEditor  : public AudioProcessorEditor, Timer
{
public:
    AceAudioProcessorEditor (AceAudioProcessor&);
    ~AceAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    void timerCallback () override
    {
        chord = getAudioProcessor ()->getProgramName (0);;
        repaint ();
    }

private:
    
    String chord;
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    AceAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AceAudioProcessorEditor)
};
