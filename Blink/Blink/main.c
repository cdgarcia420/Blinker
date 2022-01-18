/*
 * Blink.c
 *
 * Created: 1/18/2022 2:29:36 PM
 * Author : Cameron Garcia
 */ 

#include <avr/io.h>
#include <avr/power.h>


int main(void)
{
	clock_prescale_set(clock_div_1);   // 16 MHz
	DDRB = 0xFF; // Make B7 to B0 output pins

	while (1)
	{
		PORTB = ~PORTB; // Complement every bit
		for (volatile int32_t n = 0; n < 12345; n++){}
	}
}


