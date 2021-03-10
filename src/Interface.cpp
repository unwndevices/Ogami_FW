#include <Arduino.h>
#include "Interface.h"

/* the constructor initializes the datasets*/
Interface::Interface(byte potAmount, byte toggleAmount) {
    this->potAmount = potAmount;
    this->toggleAmount = toggleAmount;
    this->toggles = new byte[toggles];
    this->potentiometers = new unsigned int[potentiometers];
    this->potentiometersTemp = new unsigned int[potentiometers];
    this->potentiometersReading = new unsigned int[potentiometers];
}

void Interface::init(){
    pinMode(S0, OUTPUT);
    pinMode(S1, OUTPUT);
    pinMode(S2, OUTPUT);
    pinMode(S3, OUTPUT);
    pinMode(ANALOGMUX, INPUT);
    pinMode(DIGITALMUX, INPUT_PULLUP);
    pinMode(ARCADEPIN, INPUT);
    pinMode(EXPPIN, INPUT);
    analogReadResolution(this->analogResolution);
    analogReadAveraging(this->analogAveraging);
}

void Interface::update(){
    if (clockRead > intervalRead) {
        for (byte i = 0; i<)
    }
}

byte Interface::getToggle(byte index){
    
}

int Interface::getPot(byte index){

}

//Private
void Interface::readPots(byte index){

}

void Interface::readToggles(byte index){

}
