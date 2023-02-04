/*
 * Blink_2sek_Delay.c
 *
 * Created: 18.11.2022. 12:39:42
 * Author : Aleksandar Bogdanovic
 */ 

#define  F_CPU 16000000UL

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
    DDRB = 0x01;
	PORTB = 0;
	
	
    while (1) 
    {
		PORTB = 0x01;
		_delay_ms(2000);
		PORTB = 0x00;
		_delay_ms(2000);
    }
}

