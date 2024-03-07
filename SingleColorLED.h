#ifndef SingleColorLED_h
#define SingleColorLED_h

#include "LEDController.h"

class SingleColorLED : public LEDController {
public:
    SingleColorLED(int pin);
    void initialize() override;
    void turnOn() override;
    void turnOff() override;
    void blink(int delayMs) override;
private:
    int _pin;
};

#endif
