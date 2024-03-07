#ifndef OLED_h
#define OLED_h

#include "LEDController.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class OLED : public LEDController {
public:
    OLED(uint8_t width, uint8_t height, uint8_t sda, uint8_t scl);
    void initialize() override;
    void turnOn() override;
    void turnOff() override;
    void blink(int delayMs) override;
    void displayText(const String &text);
private:
    Adafruit_SSD1306 display;
    uint8_t _sda, _scl;
};

#endif
