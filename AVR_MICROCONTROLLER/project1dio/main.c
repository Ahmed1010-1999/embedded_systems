/*
 * main.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: AcTivE
 */
#include "BIT_MATH.h"
#include "avr/io.h"
#include <util/delay.h>

int main(){
	DDRC |= 0xFF;//set pin as outputc0
	while(1){
		for(char i=0;i<8;i++){
			SET_BIT(PORTC,i);//set pin as high c0
			_delay_ms(250);
			CLR_BIT(PORTC,i);
			/*CLR_BIT(PORTC,i);//set pin as high c0
			_delay_ms(1000);*/

		}

	}


}
