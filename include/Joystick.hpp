// Joystick.hpp

#include <KF5/NetworkManagerQt/networkmanagerqt/setting.h>

namespace HubArm
{
    class Joystick {
        public:
            Joystick();
            ~Joystick() = default;

            void update();
            void printValues();
            int getXValue() const;
            int getYValue() const;
        private:
            int pinJoystickX;
            int pinJoystickY;
            int xValue;
            int yValue;

    };    
}
