/*
 *   Röle örneği,
 *   
 *   Bu örnekte temel konfigürasyon ayarları yapılmaktadır. 
 *   Röle değeri saniyede bir değişmektedir.
 *   
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *   
 *   Bu örnek Deneyap Röle için oluşturulmuştur
 *      ------>  www.....com <------ //docs
 *      ------>  https://github.com/deneyapkart/deneyap-role-arduino-library  <------
 *     
*/
#include <Deneyap_Role.h>                           // Deneyap_Role.h kütüphanesi eklenmesi

Relay Role;                                         // Relay için class tanımlanması

void setup(){
  Serial.begin(115200);
   if(!Role.begin(0x0C)){                           // begin(slaveAdress) fonksiyonu ile cihazların haberleşmesi başlatılması
      delay(3000);
      Serial.println("I2C bağlantısı başarısız ");  // I2C bağlantısı başarısız olursa seri monitore yazdırılması
      while(1);
   }
}

void loop() {
  /* RelayDrive(PinDeğer);
     PinDeğer: 0 -----> LOW
               1 -----> HIGH   */               
  Role.RelayDrive(0);   
  delay(1000);
  Role.RelayDrive(1);
  delay(1000);
}
