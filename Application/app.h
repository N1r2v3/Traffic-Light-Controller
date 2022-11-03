#ifndef _TRAFFICPORTS__
#define _TRAFFICPORTS__

#include "..\Button\button.h"
#include "../LED/led.h"
#include "../timer/timer.h"
#include "../interrupt/interrupt.h"

#define CARPORT PORT_A
#define PEDPORT PORT_B

#define BUTTONPORT PORT_D
#define BUTTON 2

#define GREEN 0
#define YELLOW 1
#define RED 2

#define TRUE 1;
#define FALSE 0;
void AppInit(void);
void AppStart(void);
#endif