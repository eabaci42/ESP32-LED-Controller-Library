#include "Arduino.h"
#include "RGBLED.h"

RGBLED::RGBLED(int redPin, int greenPin, int bluePin) 
    : _redPin(redPin), _greenPin(greenPin), _bluePin(bluePin) {}

void RGBLED::initialize() {
    pinMode(_redPin, OUTPUT);
    pinMode(_greenPin, OUTPUT);
    pinMode(_bluePin, OUTPUT);
    turnOff(); // Başlangıçta LED'i kapalı duruma getir
}

void RGBLED::turnOn() {
    setRGB(255, 255, 255); // Beyaz renk, yani tüm LED'ler açık
}

void RGBLED::turnOff() {
    setRGB(0, 0, 0); // LED'i kapat
}

void RGBLED::blink(int delayMs) {
    turnOn(); // LED'i aç
    delay(delayMs); // Belirtilen süre kadar beklet
    turnOff(); // LED'i kapat
    delay(delayMs); // Belirtilen süre kadar beklet
}

void RGBLED::setColor(int red, int green, int blue) {
    setRGB(red, green, blue); // Belirtilen renge ayarla
}

void RGBLED::setRGB(int red, int green, int blue) {
    analogWrite(_redPin, red);
    analogWrite(_greenPin, green);
    analogWrite(_bluePin, blue);
}
