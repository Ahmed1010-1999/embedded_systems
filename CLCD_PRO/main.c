#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "CLCD_interface.h"

void main(void)
{
	uint8 Local_u8MyPattern[8]={0,0b00010001,0b00010001,0b00010001,0b00011111,0b00011111,0b00000100,0};
	/*LCD Pins initialisation*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_OUTPUT);	/*RS Pins*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN2,DIO_u8PIN_OUTPUT);	/*E Pins*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN3,DIO_u8PIN_OUTPUT);	/*D4 Pins*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN4,DIO_u8PIN_OUTPUT);	/*D5 Pins*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN5,DIO_u8PIN_OUTPUT);	/*D6 Pins*/
	DIO_u8SetPinDirection(DIO_u8PORTA,DIO_u8PIN6,DIO_u8PIN_OUTPUT);	/*D7 Pins*/

	//DIO_u8SetPortDirection(DIO_u8PORTB,0xff);	/*Data port*/

	CLCD_voidInit();

	CLCD_voidSendSpecialCharacter(Local_u8MyPattern,0,0,0);

	//CLCD_voidGoToXY(0,1u);
	//CLCD_u8SendString("Amgad Samir");
	//CLCD_voidSendNumber(12345);
	while(1)
	{

	}
}
