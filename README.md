# Deneyap Relay Arduino Library
[FOR TURKISH VERSION](docs/README_tr.md) ![trflag](https://github.com/deneyapkart/deneyapkart-arduino-core/blob/master/docs/tr.png)

***** Add photo ****

Arduino library for Deneyap Relay

## :mag_right:Specifications 
- `Product ID` **M36**, **mpv1.0**
- `MCU` STM8S003F3
- `I2C address` 0x0C, 0x0D, 0x11, 0x12

| Address |  | 
| :---      | :---     |
| 0x1A | default address |
| 0x0D | address when ADR1 pad is shorted |
| 0x11 | address when ADR2 pad is shorted |
| 0x12 | address when ADR1 and ADR2 pads are shorted |

## :closed_book:Documentation
Deneyap Relay 

How to install a Arduino Library -

## :pushpin:Deneyap Relay
This Arduino library allows you to use Deneyap Relay with I2C peripheral. You can use this library in your projects with any Arduino compatible board with I2C peripheral.

## :globe_with_meridians:Repository Contents
- `/docs ` README_tr.md and product photos
- `/examples ` Examples with .ino extension sketches
- `/src ` Source files (.cpp .h)
- `keywords.txt ` Keywords from this library that will be highlighted in the Arduino IDE
- `library.properties ` General library properties for the Arduino package manager

## Version History

1.0.0 - initial release

## :rocket:Hardware Connections
- Deneyap Relay and Board can be connected with I2C cable
- or 3V3, GND, SDA and SCL pins can be connected with jumper cables

| Relay      | Function		 | Board pins |
| :---       | :---     	 |   :---     |
| 3.3V       | Power  		 | 3.3V       |
| GND        | Ground 		 | GND        |
| SDA        | I2C Data 	 | SDA pin |
| SCL        | I2C Clock	 | SCL pin |
| SWIM		 | Debug		 | no connection |
| RES 		 | Debug		 | no connection |
| TRIG		 | TRIG 		 |any GPIO pin|
| RLY 		 | RELAY 		 |any GPIO pin| 

## :bookmark_tabs:License Information
Please review the [LICENSE](https://github.com/deneyapkart/deneyap-role-arduino-library/blob/master/LICENSE) file for license information.