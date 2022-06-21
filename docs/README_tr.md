# Deneyap Röle Arduino Kütüphanesi

***** Fotoğraf eklenecek ****

Deneyap Röle için Arduino kütüphanesidir.

## :mag_right:Özellikler 
- `Ürün ID` **M36**, **mpv1.0**
- `MCU` STM8S003F3
- `I2C Adres` 0x0C, 0x0D, 0x11, 0x12

| Adress |  | 
| :---      | :---     |
| 0x1A | varsayılan adres |
| 0x0D | ADR1 kısa devre yapıldığındaki adres |
| 0x11 | ADR2 kısa devre yapıldığındaki adres |
| 0x12 | ADR1 ve ADR2 kısa devre yapıldığındaki adres |

## :closed_book:Dokümanlar
Deneyap Röle

Arduino Kütüphanesi Nasıl İndirilir

## :pushpin:Deneyap Röle
Bu Arduino kütüphanesi Deneyap Rölenin I2C çevre birimi ile kullanılmasını sağlar. Arduino ile uyumlu, I2C çevre birimine sahip herhangi bir geliştirme kartı ile bu kütüphaneyi projelerinizde kullanabilirsiniz.

## :globe_with_meridians:Repo İçeriği
- `/docs` README_tr.md ve ürün fotoğrafları
- `/examples` .ino uzantılı örnek uygulamalar
- `/src` kütüphane için .cpp ve .h uzantılı dosyalar
- `keywords.txt` Arduino IDE'de vurgulanacak anahtar kelimeler
- `library.properties` Arduino yöneticisi için genel kütüphane özellikleri

## Sürüm Geçmişi
1.0.0 - ilk sürüm

## :rocket:Donanım Bağlantıları
- Deneyap Röle ile kullanılan geliştirme kartı I2C kablosu ile bağlanabilir
- veya jumper kablolar ile 3V3, GND, SDA ve SCL bağlantıları yapılabilir.

|Röle | Fonksiyon| Kart pinleri | 
| :---      | :---       |   :---  |
|3.3V       | Güç   	| 3.3V      | 
|GND        | Toprak  	| GND       | 
|SDA       	| I2C Data  | SDA pini | 
|SCL       	| I2C Clock | SCL pini | 
|SWIM		| Debug 	| bağlantı yok | 
|RES 		| Debug 	| bağlantı yok | 
|TRIG       | TRIG      | herhangi bir GPIO pini|
|RLY        | RELAY     | herhangi bir GPIO pini|

## :bookmark_tabs:Lisans Bilgisi 
Lisans bilgileri için [LICENSE](https://github.com/deneyapkart/deneyap-role-arduino-library/blob/master/LICENSE) dosyasını inceleyin.