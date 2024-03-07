# LED Kontrol Kütüphanesi

Bu kütüphane, ESP32 mikrokontrolör üzerinde çeşitli LED türlerini ve OLED ekranları kontrol etmek için geliştirilmiştir. Temel LED işlevselliğinden, RGB ve NeoPixel LED'lerin karmaşık kontrolüne kadar geniş bir yelpazeyi kapsar. Ayrıca, OLED ekranlar üzerinde metin gösterimi gibi ileri düzey işlevler sunar.

## Özellikler

- **Tek Renkli LED Kontrolü:** Basit açma, kapama ve yanıp sönme işlevleri.
- **RGB LED Kontrolü:** Her bir renk kanalı için ayrı kontrol.
- **NeoPixel LED Kontrolü:** Adreslenebilir LED şeritleri için renk ve desen kontrolü.
- **OLED Ekran Kontrolü:** Metin gösterimi ve ekran yönetimi.

## Kullanım

Her bir LED türü veya OLED ekran için ayrı sınıflar bulunur. İlk olarak, ilgili sınıfın bir nesnesini oluşturun ve başlatma metodunu çağırın:

```
#include "SingleColorLED.h"
#include "RGBLED.h"
#include "NeoPixelLED.h"
#include "OLED.h"

SingleColorLED myLED(LED_PIN);
RGBLED myRGBLED(RED_PIN, GREEN_PIN, BLUE_PIN);
NeoPixelLED myNeoPixel(NUM_PIXELS, NEOPIXEL_PIN);
OLED myOLED(WIDTH, HEIGHT, SDA, SCL);

void setup() {
    myLED.initialize();
    myRGBLED.initialize();
    myNeoPixel.initialize();
    myOLED.initialize();
}

void loop() {
    // LED kontrol kodları buraya
}
```

## Gelecekteki Geliştirmeler
Wi-Fi ve Bluetooth Entegrasyonu: ESP32'nin kablosuz yeteneklerini kullanarak LED'leri uzaktan kontrol etme.
Daha Fazla LED Desteği: Daha fazla LED türünü destekleyecek şekilde kütüphaneyi genişletme.
Animasyon Kütüphanesi: NeoPixel LED'ler için hazır animasyon desenleri eklenmesi.
Grafik Fonksiyonlar: OLED ekranlar için daha gelişmiş grafik fonksiyonları ve kullanıcı arayüzü bileşenleri.