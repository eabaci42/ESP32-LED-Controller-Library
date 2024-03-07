#include "Arduino.h"
#include "SingleColorLED.h"

SingleColorLED::SingleColorLED(int pin) : _pin(pin) {}

void SingleColorLED::initialize() {
    pinMode(_pin, OUTPUT);
    turnOff(); // Başlangıçta LED'i kapalı duruma getir
}

void SingleColorLED::turnOn() {
    digitalWrite(_pin, HIGH); // LED'i aç
}

void SingleColorLED::turnOff() {
    digitalWrite(_pin, LOW); // LED'i kapat
}

void SingleColorLED::blink(int delayMs) {
    turnOn(); // LED'i aç
    delay(delayMs); // Belirtilen süre kadar beklet
    turnOff(); // LED'i kapat
    delay(delayMs); // Belirtilen süre kadar beklet
}
