/*
 * timer.c
 *
 * Created: 10/15/2022 12:11:38 AM
 *  Author: nerva
 */ 
// choose mode of operation TTCRN
//set start value TCNTN
// enable interrupt lw 3ayza TIMSK
// set prescaler TTCRN
// get state : check flag from TIFR
#include "timer.h"

void NormalTimer(uint8_t InitialValue,uint8_t prescaler)
{
	TCCR0 = 0x00; /// choose normal mode from bit 3 &6
	//setting prescaler bit 0 1 2
	TCNT0 = InitialValue; // setting intial value
	// setting prescaler will start timer 
	switch(prescaler)
	{ // 0 is to stop timer
		case NOPRESCALER:
		TCCR0 |=0x01;
		break;
		case PRESCALER8:
		TCCR0 |=0x02;
		break;
		case PRESCALER64:
		TCCR0 |=0x03;
		break;
		case PRESCALER256:
		TCCR0 |=0x04;
		break;
		case PRESCALER1024:
		TCCR0 |=0x05;
		break;
		// 6 & 7 are for external timers 
		SETBIT(TIFR,0); // setting overflow flag
	}
	
	
	
}


void FiveSec(void)
{
	uint8_t OverFlows=0; 
	//start timer
	NormalTimer(fiveSecInitValue,PRESCALER1024);
	while(OverFlows<fiveSecOV)
	{
		if(READBIT(TIFR,0)==1)
		{
			OverFlows++;
			//clear flag by setting it
			SETBIT(TIFR,0);
		}
	}
	// stop timer by cancelling prescaller 
	TCCR0=0x0000;
}
void HalfSec(void)
{ 
	uint8_t overFlows=0;
	NormalTimer(HALFSECINIT,PRESCALER64);
	while(overFlows<HALFSECOV)
	{
		if(READBIT(TIFR,0)==1)
		{
			SETBIT(TIFR,0);
			overFlows++;
		}
		TCCR0==0x000; // stop timer;
	}
}