/*
*****************************************************************************
@file         Deneyap_Role.h
@mainpage     Deneyap Relay Arduino library header file
@version      v1.0.1
@date         June 22, 2022
@brief        This file contains all function prototypes and macros
              for Deneyap Relay Arduino library
*****************************************************************************
*/

#ifndef __Deneyap_Role_H
#define __Deneyap_Role_H

#include <Wire.h>
#include <Arduino.h>

#define I2C_SLV_ADDR_ALT1 (uint8_t)(I2C_SLV_ADDR_DEFAULT + 1)
#define I2C_SLV_ADDR_ALT2 (uint8_t)(I2C_SLV_ADDR_DEFAULT + 2)
#define I2C_SLV_ADDR_ALT3 (uint8_t)(I2C_SLV_ADDR_DEFAULT + 3)
#define DATA_BUFFER_SIZE 1 // in Byte (max data size)

typedef struct { // Data packet (protocol) created by master
                 // for I2C data exchange process
    uint8_t command : 3;
    uint8_t dataSize : 2;
    uint8_t data[DATA_BUFFER_SIZE];
} Relay_DataPacket_TypeDef;

enum Relay_packetCommands { // Commands in data packet (protocol)
    DRIVE_RELAY = (uint8_t)0x00,
    RELAY_CHANGE_ADDR,
    RELAY_REQUEST_FW_VERSION,
};

class Relay {
public:
    /* Check device status */
    bool begin(uint8_t address, TwoWire &wirePort = Wire);
    bool isConnected();
    uint16_t getFwVersion();
    bool setI2Caddress(uint8_t newAddress);

    /* Functions for data manipulation */
    bool RelayDrive(uint8_t relayData);

    uint8_t i2cData2;
    uint8_t i2cData1;

private:
    TwoWire *_i2cPort;                    // Port selection (0 or 1)
    uint8_t _address;                     // Device I2C address
    Relay_DataPacket_TypeDef _dataPacket; // Struct to transfer data over I2C interface

    /* I2C data transaction functions */
    uint8_t I2C_ReadData8bit(Relay_DataPacket_TypeDef *dataPacket);
    uint16_t I2C_ReadData16bit(Relay_DataPacket_TypeDef *dataPacket);
    uint16_t I2C_ReadFirmwareData16bit(Relay_DataPacket_TypeDef *dataPacket);
    bool I2C_SendDataPacket(Relay_DataPacket_TypeDef *dataPacket);
};

#endif /* __Deneyap_Role_H */
