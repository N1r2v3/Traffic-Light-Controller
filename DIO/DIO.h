/*
 * DIO.h
 *
 * Created: 9/24/2022 3:40:35 AM
 *  Author: nerva
 */ 
#ifndef DIO_H
#define DIO_H
// digital input output interfacing
#include "..\types\registers.h"
//define ports
#define PORT_A 0
#define PORT_B 1
#define PORT_C 2
#define PORT_D 3
//define pins
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
// pin direction
#define OUT 1
#define IN 0
// pin input
#define HIGH 1
#define LOW 0


void pinInit(uint8_t PortName, uint8_t BitNumber,uint8_t Direction);
void pinWrite(uint8_t PortName, uint8_t BitNumber, uint8_t Data);
void pinRead(uint8_t PortName, uint8_t BitNumber, uint8_t* readData);
void portWrite(uint8_t PortName,uint8_t Data);
void portRead(uint8_t PortName,uint8_t *Data);
void togglepin(uint8_t PortName, uint8_t BitNumber);
#endif