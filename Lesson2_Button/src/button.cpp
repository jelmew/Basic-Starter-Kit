//
// Created by jelmew on 6/24/18.
//

#include "button.h"

button::button(bool button_on) : button_on(button_on) {}

button::button() : button_on(false) {}

const bool button::isButtonOn() const {
    return button_on;
}

void button::pressButton() {
    button_on = !button_on;

}
