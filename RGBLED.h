#ifndef RGBLED_h
#define RGBLED_h

#include "LEDController.h"

class RGBLED : public LEDController {
public:
    RGBLED(int redPin, int greenPin, int bluePin);
    void initialize() override;
    void turnOn() override; // Bu örnekte RGBLED için spesifik değil, daha genel işlevsellik sağlayacağız
    void turnOff() override;
    void blink(int delayMs) override; // RGB LED için spesifik bir işlevsellik olmadığından, bu metod basit bir yanıp sönme işlevi gerçekleştirir
    void setColor(int red, int green, int blue); // RGB LED'in rengini ayarlamak için
private:
    int _redPin, _greenPin, _bluePin;
    void setRGB(int red, int green, int blue);
};

#endif
