#include "OLED.h"
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <Wire.h>

OLED::OLED(uint8_t width, uint8_t height, uint8_t sda, uint8_t scl) 
  : _sda(sda), _scl(scl), display(Adafruit_SSD1306(width, height, &Wire, -1)) {}

void OLED::initialize() {
    Wire.begin(_sda, _scl); // I2C için SDA ve SCL pinlerini başlat
    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // OLED ekranın adresi genellikle 0x3C olur
        Serial.println(F("SSD1306 allocation failed"));
        for(;;); // Sonsuz döngüye girerek hata durumunda dur
    }
    display.display(); // Ekranı bir kere göstererek OLED'i aktif hale getir
    turnOff(); // Ekranı temizle
}

void OLED::turnOn() {
    // Ekranı açık tutmak için özel bir işlem yapmaya gerek yok
    // Çünkü turnOff metodu ekranı temizlerken, turnOn metodu direkt olarak
    // yeni çizimler için kullanılabilir, bu nedenle bu metod boş bırakılabilir.
}

void OLED::turnOff() {
    display.clearDisplay();
    display.display();
}

void OLED::blink(int delayMs) {
    // OLED için bu metod özel bir animasyon veya yanıp sönme işlevi içerebilir.
    // Ancak basit bir yanıp sönme için:
    turnOn();
    delay(delayMs);
    turnOff();
    delay(delayMs);
}

void OLED::displayText(const String &text) {
    display.clearDisplay();
    display.setTextSize(1); // Normal 1:1 piksel ölçeği
    display.setTextColor(SSD1306_WHITE); // Beyaz renkli metin
    display.setCursor(0,0); // Başlangıç noktası
    display.println(text);
    display.display(); // Yazıyı ekranda göster
}
