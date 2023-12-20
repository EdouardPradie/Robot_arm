// main

#include "Joystick.hpp"
#include "ServoMoteur.hpp"

int main()
{
    HubArm::Joystick joystick;
    HubArm::ServoMoteur hand(9);
    HubArm::ServoMoteur base(9);
    HubArm::ServoMoteur up(9);
    HubArm::ServoMoteur down(9);

    while (true) {
        joystick.update();
        joystick.printValues();
    }

    return 0;
}