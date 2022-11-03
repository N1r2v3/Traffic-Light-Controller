/*
 * interrupt.h
 *
 * Created: 10/20/2022 4:09:35 PM
 *  Author: nerva
 */ 
#ifndef INTERRUPT_H
#define INTERRUPT_H
 
 #include "../Button/button.h"
 #define INT0 0
 
 #define LOW 00
 #define LOGICCHANGE  01
 #define FALLING_EDGE 10
 #define RISSING_EDGE 11
 
 
#define EXT_INT_0 __vector_1
#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
void INT_VECT(void)


extern uint8_t activeLed ;

void global_interrupt(uint8_t mode);
void interrupt_sense_control(uint8_t mode);
void enable_external_interrupt(void);

 




#endif