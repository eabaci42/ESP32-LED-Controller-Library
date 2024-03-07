#ifndef LEDController_h
#define LEDController_h

class LEDController {
public:
    virtual void initialize() = 0; // LED donanımını başlatmak için
    virtual void turnOn() = 0; // LED'i açmak için
    virtual void turnOff() = 0; // LED'i kapatmak için
    virtual void blink(int delayMs) = 0; // LED'i belirli bir hızda yanıp söndürmek için
    virtual ~LEDController() {} // Sanal yıkıcı
};

#endif
