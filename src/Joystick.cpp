// Joystick

#include "Joystick.hpp"

HubArm::Joystick::Joystick()
{
    this->pinJoystickX = A0;
    this->pinJoystickY = A1;
    Serial.begin(9600);
}

void HubArm::Joystick::update()
{
    this->xValue = analogRead(this->pinJoystickX);
    this->yValue = analogRead(this->pinJoystickY);

    delay(100);
}

void HubArm::Joystick::printValues()
{
    Serial.print("Valeur X: ");
    Serial.print(this->xValue);
    Serial.print(" | Valeur Y: ");
    Serial.println(this->yValue);
}

int HubArm::Joystick::getXValue()
{
    return this->xValue;
}

int HubArm::Joystick::getYValue()
{
    return this->yValue;
}

