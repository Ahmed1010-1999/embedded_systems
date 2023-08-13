/*
 * main.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: AcTivE
 */
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "avr/io.h"
#include <util/delay.h>


int main(){
	s8 bcdArray[] = {
	  // BCD values for digits 0 to 9
	  0b00111111, // 0
	  0b00000110, // 1
	  0b01011011, // 2
	  0b01001111, // 3
	  0b01100110, // 4
	  0b01101101, // 5
	  0b01111101, // 6
	  0b00000111, // 7
	  0b01111111, // 8
	  0b01101111  // 9
	};

	s8 selector=1;

	DDRC |= 0xFF;//set pin as outputc0
	DDRD|=0xFF;
	DDRA|=0xFF;
	while(1){
		PORTD=0b00000001;
		for(s8 i=5;i>=0;i--){
			PORTA=bcdArray[selector];

			PORTC=bcdArray[i];
			_delay_ms(289);



		}
		selector=0;
		for(s8 i=9;i>=0;i--){
			PORTA=bcdArray[selector];
			PORTC=bcdArray[i];
			_delay_ms(289);
		}
		selector=1;
		PORTD=0b00000010;
		for(s8 i=5;i>=0;i--){
			PORTA=bcdArray[selector];

			PORTC=bcdArray[i];
			_delay_ms(289);



		}
		selector=0;
		for(s8 i=9;i>=0;i--){
			PORTA=bcdArray[selector];
			PORTC=bcdArray[i];
			_delay_ms(289);
		}
		PORTD=0b00000100;
		for(s8 i=3;i>=0;i--){
					PORTA=bcdArray[selector];
					PORTC=bcdArray[i];
					_delay_ms(289);
				}
		selector=1;



	}


}
