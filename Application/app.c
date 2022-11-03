/*
 * app.c
 *
 * Created: 10/20/2022 5:27:37 PM
 *  Author: nerva
 */ 
#include "app.h"
uint8_t activeLed= GREEN;

void AppInit(void)
{
	
	// initialize leds 
	ledinit(CARPORT,GREEN);
	ledinit(CARPORT,YELLOW);
	ledinit(CARPORT,RED);

	ledinit(PEDPORT,GREEN);
	ledinit(PEDPORT,YELLOW);
	ledinit(PEDPORT,RED);
	
	// intialize button
	buttonInit(BUTTONPORT,BUTTON);
	
	// interrupt init 
	global_interrupt(HIGH);
	interrupt_sense_control(FALLING_EDGE);
	enable_external_interrupt();
}

void AppStart()
{    int greenflag=FALSE;
	while(1)
	{  
		switch(activeLed)
		{
			case GREEN:
			    ledOFF(CARPORT,YELLOW);
				ledON(CARPORT,GREEN);
				FiveSec();
				activeLed= YELLOW;
				greenflag=TRUE;
			    break;
			case YELLOW:
			     ledOFF(CARPORT,RED);
				 ledOFF(CARPORT,GREEN);
				 int count=10;
				 while(count)
				 {
					 ledTOGGLE(CARPORT,YELLOW);
					 HalfSec();
					 count--;
				 }
				 if(greenflag) activeLed=RED;
				 else activeLed = GREEN;
			     break;
		     case RED:
			       ledOFF(CARPORT,YELLOW);
			       ledON(CARPORT,RED);
				   FiveSec();
				   greenflag=FALSE;
				   activeLed=YELLOW;
				   break;
			default:
					activeLed=YELLOW;
					break;
		}
	}
	
}
ISR(EXT_INT_0)
{
	global_interrupt(LOW);
	if(activeLed==RED)
	{
		ledON(PEDPORT,GREEN);
		int count =10;
		while (count --) HalfSec();
		ledOFF(PEDPORT,GREEN);
		ledOFF(CARPORT,RED);
	}
	else
	{    ledOFF(CARPORT,GREEN);
		ledOFF(CARPORT,YELLOW);
		ledON(PEDPORT,RED);
		ledON(CARPORT,GREEN);
		int count =10;
		while (count --) HalfSec();
		ledOFF(PEDPORT,RED);
		ledOFF(CARPORT,GREEN);
		 count = 10;
		while (count)
		{
			ledTOGGLE(PEDPORT,YELLOW);
			ledTOGGLE(CARPORT,YELLOW);
			HalfSec();
			count --;
		}
		ledON(PEDPORT,GREEN);
		ledON(CARPORT,RED);
		count =10;
		while (count --) HalfSec();
		ledOFF(PEDPORT,GREEN);
		ledOFF(CARPORT,RED);
	}
	global_interrupt(HIGH);
	activeLed=YELLOW;
	
     
}