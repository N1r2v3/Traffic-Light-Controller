/*
 * CFile1.c
 *
 * Created: 9/24/2022 3:38:33 AM
 *  Author: nervana
 */ 
#ifndef TYPES_H_
#define TYPES_H_

typedef unsigned char uint8_t;
//typedef unsigned int uint32_t;
#define SETBIT(REGISTER,BITNUMBER) REGISTER |= (1<<BITNUMBER)
#define CLEARBIT(REGISTER,BITNUMBER) REGISTER &= (~(1<<BITNUMBER))
#define TOGGLEBIT(REGISTER,BITNUMBER) REGISTER ^= (1<<BITNUMBER)
#define READBIT(REGISTER,BITNUMBER)   (REGISTER &= (1<<BITNUMBER))>>BITNUMBER


#endif /* TYPES_H_ */