/*
 * button.h
 *
 * Created: 9/24/2022 3:43:37 AM
 *  Author: nerva
 */ 
#ifndef BUTTON_H
#define BUTTON_H
#include "../types/types.h"
#include "../DIO/DIO.h"
void buttonInit(uint8_t PortName, uint8_t BinNumber);
void buttonRead(uint8_t PortName, uint8_t BinNumber, uint8_t* Value);



#endif