/*
 *   Röle buton örneği,
 *
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır.
 *   Deneyap geliştirme kartlarındaki dahili butona basıldığında Röle değeri 0 olmaktadır.
 *
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *
 *   Bu örnek Deneyap Röle için oluşturulmuştur
 *      ------>  www.....com <------ //docs
 *      ------>  https://github.com/deneyapkart/deneyap-role-arduino-library  <------
 *
 */
#include <Deneyap_Role.h>                             // Deneyap_Role.h kütüphanesi eklenmesi

Relay Role;                                           // Relay için class tanımlanması

void setup() {
    Serial.begin(115200);
    pinMode(GPKEY, INPUT);
    if (!Role.begin(0x0C)) {                         // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
        delay(3000);
        Serial.println("I2C bağlantısı başarısız "); // I2C bağlantısı başarısız olursa seri monitore yazdırılması
        while (1);
    }
}

void loop() {
    if (digitalRead(GPKEY) == 0) {
        Role.RelayDrive(0);
    }
    else {
        Role.RelayDrive(1);
    }
}
