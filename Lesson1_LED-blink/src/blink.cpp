/*
 * Created by keen
 * Modified by keen 
 * Compiling: gcc -Wall -o blink blink.c -lwiringPi
 * Run: sudo ./blink
 * Date: 28/03/2017
 */

#include <wiringPi.h>
#include <cstdio>
#include <iostream>
#include "led.h"

constexpr int LED_PIN{0};

int main() {

    std::cout << "Raspberry Pi blink program..." << std::endl;
    std::cout << "Press Ctrl+C to exit\n..." << std::endl;
    wiringPiSetup();
    led led1(LED_PIN);
    for (int i = 0; i < 100; ++i) {
        led1.switchLight();
        delay(0500);
    }
}

