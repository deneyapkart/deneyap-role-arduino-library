/*
 *   I2C olmadan Röle örneği,
 *   
 *   Röle değeri saniyede bir değişmektedir.
 *   
 *   Bu algılayıcı I2C haberleşme protokolü ile çalışmaktadır.
 *   Bu örnek I2C haberleşme protokolü kullanılmadan yazılmıştır. 
 *   
 *   Bu örnek Deneyap Röle için oluşturulmuştur
 *      ------>  www.....com <------ //docs
 *      ------>  https://github.com/deneyapkart/deneyap-role-arduino-library  <------
 *     
*/
#define ROLE D0                           // Role kartındaki TRIG pininin D0 pinine baglanmalıdır

void setup(){
  pinMode(ROLE,OUTPUT);                   // Role cıkıs olarak ayarlanmasi
}

void loop() {
  digitalWrite(ROLE,HIGH);
  delay(1000);
  digitalWrite(ROLE,LOW);
  delay(1000);
}
