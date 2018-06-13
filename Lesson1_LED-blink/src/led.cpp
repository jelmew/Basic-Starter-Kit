//
// Created by jelmew on 6/11/18.
//

#include "led.h"

led::led(const int ledPin) : LED_PIN(ledPin),lightOn(false)  {
    pinMode(ledPin, OUTPUT);
}

void led::switchLight() {
    lightOn = !lightOn;
    if (lightOn) {
        std::cout<<"On"<<std::endl;
        turnLightOn();
        return;;
    } else {
        std::cout<<"Of"<<std::endl;
        turnLightOff();
    }
}

void led::turnLightOn() {
    lightOn = true;
    digitalWrite(LED_PIN, HIGH);
}

void led::turnLightOff() {
    lightOn = false;
    digitalWrite(LED_PIN, LOW);
}

led::~led() {
    digitalWrite(LED_PIN,LOW);

}
