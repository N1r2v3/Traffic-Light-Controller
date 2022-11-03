/*
 * DIO.c
 *
 * Created: 9/24/2022 3:40:21 AM
 *  Author: nerva
 */ 
#include "DIO.h"

void pinInit(uint8_t PortName, uint8_t BitNumber, uint8_t Direction)
{
	switch (PortName)
	{
		case PORT_A:
		if (Direction == OUT)
		SETBIT(DDRA, BitNumber);
		else CLEARBIT(DDRA, BitNumber);
		break;
		case PORT_B:
		if (Direction == OUT)
		SETBIT(DDRB, BitNumber);
		else CLEARBIT(DDRB, BitNumber);
		break;
		case PORT_C:
		if (Direction == OUT)
		SETBIT(DDRC, BitNumber);
		else CLEARBIT(DDRC, BitNumber);
		break;
		case PORT_D:
		if (Direction == OUT)
		SETBIT(DDRD, BitNumber);
		else CLEARBIT(DDRD, BitNumber);
		break;

	}
}

void pinWrite(uint8_t PortName, uint8_t BitNumber, uint8_t Data)
{
	switch (PortName)
	{
		case PORT_A:
		if (Data == HIGH)
		SETBIT(PORTA, BitNumber);
		else CLEARBIT(PORTA, BitNumber);
		break;
		case PORT_B:
		if (Data == HIGH)
		SETBIT(PORTB, BitNumber);
		else CLEARBIT(PORTB, BitNumber);
		break;
		case PORT_C:
		if (Data == HIGH)
		SETBIT(PORTC, BitNumber);
		else CLEARBIT(PORTC, BitNumber);
		break;
		case PORT_D:
		if (Data == HIGH)
		SETBIT(PORTD, BitNumber);
		else CLEARBIT(PORTD, BitNumber);
		break;

	}
}

void pinRead(uint8_t PortName, uint8_t BitNumber, uint8_t* readData)
{
	switch (PortName)
	{
		case PORT_A:
		*readData = READBIT(PINA, BitNumber);
		break;
		case PORT_B:
		*readData = READBIT(PINB, BitNumber);
		break;
		case PORT_C:
		*readData = READBIT(PINC, BitNumber);
		break;
		case PORT_D:
		*readData = READBIT(PIND, BitNumber);
		break;
	}
}

void portWrite(uint8_t PortName,uint8_t Data)
{
	switch(PortName)
	{
		case PORT_A:
		PORTA=Data;
		break;
		case PORT_B:
		PORTB = Data;
		break;
		case PORT_C:
		PORTC = Data;
		break;
		case PORT_D:
		PORTD=Data;
		break;
	}

}

void portRead(uint8_t PortName,uint8_t *Data)
{
	switch(PortName)
	{
		case PORT_A:
		*Data = PINA ;
		break;
		case PORT_B:
		*Data = PINB; 
		break;
		case PORT_C:
		*Data = PINC; 
		break;
		case PORT_D:
		*Data = PIND; 
		break;
	}

}
void togglepin(uint8_t PortName, uint8_t BitNumber)
{
	switch (PortName)
	{
		case PORT_A:
		TOGGLEBIT(PORTA, BitNumber);
		break;
	     case PORT_B:
	     TOGGLEBIT(PORTB, BitNumber);
	     break; 
		 case PORT_C:
		 TOGGLEBIT(PORTB, BitNumber);
		 break;
		 case PORT_D:
		 TOGGLEBIT(PORTD, BitNumber);
		 break;

	}
}