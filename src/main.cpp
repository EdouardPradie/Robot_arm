// main

#include "Joystick.hpp"

int main()
{
    HubArm::Joystick joystick;

    while (true) {
        joystick.update();
        joystick.printValues();
    }

    return 0;
}