#ifndef NeoPixelLED_h
#define NeoPixelLED_h

#include "LEDController.h"
#include <Adafruit_NeoPixel.h>

class NeoPixelLED : public LEDController {
public:
    NeoPixelLED(uint16_t numPixels, uint8_t pin);
    void initialize() override;
    void turnOn() override; // Tüm LED'leri belirli bir renge ayarla
    void turnOff() override; // Tüm LED'leri kapat
    void blink(int delayMs) override; // Yanıp sönme efekti
    void setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b); // Belirli bir LED'i renklendir
    void show(); // Değişiklikleri uygula

private:
    Adafruit_NeoPixel strip;
};

#endif
