//
// Created by jelmew on 6/24/18.
//

#ifndef BUTTON_BUTTON_H
#define BUTTON_BUTTON_H


class button {
private:
    bool button_on;

public:
    button(bool button_on);

    button();

    const bool isButtonOn() const;

    void pressButton();
};


#endif //BUTTON_BUTTON_H
