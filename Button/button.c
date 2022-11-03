/*
 * button.c
 *
 * Created: 9/24/2022 3:43:50 AM
 *  Author: nerva
 */ 
#include "button.h"


void buttonInit(uint8_t PortName, uint8_t BinNumber)
{
	pinInit(PortName, BinNumber, IN);

}

void buttonRead(uint8_t PortName, uint8_t BinNumber,uint8_t* Value)
{
	pinRead(PortName, BinNumber, Value);
}
