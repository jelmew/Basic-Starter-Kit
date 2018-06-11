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

constexpr int LED_PIN{0};

int main(void) {

    std::cout << "Welcome to Elecrow..." << std::endl;
    std::cout << "Raspberry Pi blink program..." << std::endl;
    std::cout << "Press Ctrl+C to exit\n..." << std::endl;
    wiringPiSetup();
    pinMode(LED_PIN, OUTPUT);
    for (int i = 0; i < 100; ++i) {
        digitalWrite(LED_PIN, HIGH);
        delay(1000);
        digitalWrite(LED_PIN, LOW);
        delay(1000);
    }

    digitalWrite(LED_PIN,LOW)
}

