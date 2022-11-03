/*
 * led.h
 *
 * Created: 9/24/2022 3:42:18 AM
 *  Author: nerva
 */ 
#ifndef LED_H
#define LED_H
#include "../types/types.h"
#include "../DIO/DIO.h"


void ledinit(uint8_t PortName, uint8_t BinNumber);
void ledON(uint8_t PortName, uint8_t BinNumber);
void ledOFF(uint8_t PortName, uint8_t BinNumber);
void ledTOGGLE(uint8_t PortName, uint8_t BinNumber);
#endif // !LED_H
