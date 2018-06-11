//
// Created by jelmew on 6/11/18.
//

#ifndef BLINK_LED_H
#define BLINK_LED_H

#include <wiringPi.h>

class led {
private:
    const int LED_PIN;
    bool lightOn;
public:
    explicit led(int ledPin);

    virtual ~led();

    void switchLight();

    void turnLightOn();

    void turnLightOff();
};


#endif //BLINK_LED_H
