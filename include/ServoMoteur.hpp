// ServoMoteur.hpp

#include <Servo.h>

namespace HubArm
{
    class ServoMoteur {
        public:
            ServoMoteur(int pin);
            ~ServoMoteur() = default;

            void update(int angle);
        private:
            Servo servoMotor;
            const int servoPin;
    };
}
