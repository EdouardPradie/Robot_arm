// ServoMoteur

#include "ServoMoteur.hpp"

HubArm::ServoMoteur::ServoMoteur(int pin)
{
    this->servoPin = pin;
    this->servoMotor.attach(this->servoPin)
}

void HubArm::ServoMoteur::update(int angle)
{
    this->servoMotor.write(angle);
    delay(1000);
}
