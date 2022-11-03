/*
 * interrupt.c
 *
 * Created: 10/20/2022 4:09:20 PM
 *  Author: nervana
 */ 
#include "interrupt.h"
void global_interrupt(uint8_t mode)
{	if(mode == HIGH)
     SETBIT(SREG,7);
	 else CLEARBIT(SREG,7);
}
  
 void interrupt_sense_control(uint8_t mode)
 {   
	 // using only int0
	 switch(mode)
	 {
		case LOW:
			 CLEARBIT(MCUCR,0);
			 CLEARBIT(MCUCR,1);
			 break;
	 
		 case LOGICCHANGE:
			 CLEARBIT(MCUCR,0);
			 SETBIT(MCUCR,1);
			 break;
	 
		 case FALLING_EDGE:
			 SETBIT(MCUCR,0);
			 CLEARBIT(MCUCR,1);
			 break;
	 
		 case RISSING_EDGE:
			 SETBIT(MCUCR,0);
			 SETBIT(MCUCR,1);
		 }
 }
void enable_external_interrupt(void)
{
	// enable external interrupt on int 0
	SETBIT(GICR,6);
}


