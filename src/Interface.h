#ifndef interface_h
#define interface_h

#include <Arduino.h>

class Interface
{
    private:
        //variables
        byte potAmount;
        byte toggleAmount;
        byte analogResolution = 10;
        byte analogAveraging = 1; //needs testing
        
        byte *toggles;
        unsigned int *potentiometers;
        //smoothing
        //pointer init, the array is created in the constructor
        unsigned int *potentiometersTemp; 
        unsigned int *potentiometersReading;

        //timers
        elapsedMicros clockRead; //general timer for a/d read loops
        const unsigned int intervalRead = 300;
        elapsedMicros clockDebounce;
        unsigned long lastDebounce;
        const unsigned long debounceDelay = 200;
        
        #define S0 5
        #define S1 4
        #define S2 3
        #define S3 2
        #define ANALOGMUX 22
        #define DIGITALMUX 1
        #define ARCADEPIN 14
        #define EXPPIN 15

        //Functions
        void readToggles(byte index);
        void readPots(byte index);

    public:
        Interface(byte potAmount, byte toggleAmount);
        void init();
        void update();
        byte getToggle(byte index);
        int getPot(byte index);

        //Callbacks
        // void setHandlePotChange(PotChangeCallback fptr);
        // void setHandleToggleChange(ToggleChangeCallback fptr);
};

#endif