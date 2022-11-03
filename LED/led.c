/*
 * led.c
 *
 * Created: 9/24/2022 3:42:05 AM
 *  Author: nerva
 */ 
#include "led.h"


void ledinit(uint8_t PortName, uint8_t BinNumber)
{
	pinInit(PortName, BinNumber,OUT);
}

void ledON(uint8_t PortName, uint8_t BinNumber)
{
	pinWrite(PortName, BinNumber, HIGH);
}

void ledOFF(uint8_t PortName, uint8_t BinNumber)
{
	pinWrite(PortName, BinNumber, LOW);
}

void ledTOGGLE(uint8_t PortName, uint8_t BinNumber)
{
	togglepin(PortName, BinNumber);
}
