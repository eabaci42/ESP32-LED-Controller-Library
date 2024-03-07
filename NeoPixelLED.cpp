#include "NeoPixelLED.h"

NeoPixelLED::NeoPixelLED(uint16_t numPixels, uint8_t pin) : strip(numPixels, pin, NEO_GRB + NEO_KHZ800) {}

void NeoPixelLED::initialize() {
    strip.begin(); // NeoPixel şeridini başlat
    strip.show(); // Başlangıçta tüm LED'leri kapat (temizle)
}

void NeoPixelLED::turnOn() {
    for(uint16_t i = 0; i < strip.numPixels(); i++) {
        strip.setPixelColor(i, strip.Color(255, 255, 255)); // Tüm LED'leri beyaz yap
    }
    strip.show();
}

void NeoPixelLED::turnOff() {
    for(uint16_t i = 0; i < strip.numPixels(); i++) {
        strip.setPixelColor(i, 0); // Tüm LED'leri kapat
    }
    strip.show();
}

void NeoPixelLED::blink(int delayMs) {
    turnOn();
    delay(delayMs);
    turnOff();
    delay(delayMs);
}

void NeoPixelLED::setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b) {
    if (n < strip.numPixels()) {
        strip.setPixelColor(n, strip.Color(r, g, b));
    }
}

void NeoPixelLED::show() {
    strip.show();
}
