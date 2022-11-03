/*
 * timer.h
 *
 * Created: 10/15/2022 12:11:17 AM
 *  Author: nerva
 */ 

#ifndef TIMER_H
#define TIMER_H
#include "../DIO/DIO.h"
#include "../types/types.h"
#include "../types/registers.h"
#define NOPRESCALER 0
#define PRESCALER8 1
#define PRESCALER64 2
#define PRESCALER256 3
#define PRESCALER1024 4
#define fiveSecOV  20
#define fiveSecInitValue 0x0C
#define HALFSECOV  32
#define HALFSECINIT 0x00


void NormalTimer(uint8_t InitialValue,uint8_t prescaler);
void FiveSec(void);
void HalfSec(void);



#endif