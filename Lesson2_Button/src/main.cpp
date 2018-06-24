//
// Created by jelmew on 6/24/18.
//

#include <iostream>
#include <wiringPi.h>
#include "button.h"

constexpr int BUTTON{0};

int main() {
    std::cout << "Button pressing, button has no state" << std::endl;
    wiringPiSetup();
    pinMode(BUTTON, INPUT);
    button button1{false};
    while (true) {
        int val = digitalRead(BUTTON);
        if (val == HIGH) {
            delay(100);
            button1.pressButton();
        }
        delay(200);
        if (button1.isButtonOn()) {
            std::cout << "Button is on" << std::endl;
        } else {
            std::cout << "Button is off" << std::endl;
        }
    }
}