#ifndef KIT_INFO2_H_
#define KIT_INFO2_H_

#include "includes_todos.h"


//*************************PROTOTIPOS PLACA BASE*****************************
	void InicializarPlacaBase (void);
	void inic_Teclado (void);
	void inic_Relay_Buzz (void);
	void inic_RGB (void);

//************************* MACROS *****************************
	//Leds (Reles)
		#define		RELAY1		PORT2,0 		//GPIO2
		#define		RELAY2		PORT0,23		//GPIO0
		#define		RELAY3		PORT0,21		//GPIO0
		#define		RELAY4		PORT0,27		//GPIO0

	//Buzz
		#define		BUZZ		PORT0,28		//GPIO0

	//Led RGB:
		#define		RGBG		PORT2,1			//GPIO2
		#define		RGBR		PORT2,2			//GPIO2
		#define		RGBB		PORT2,3			//GPIO2

	//Teclas (teclado 4x1)
		#define		KEY0		PORT2,10		//GPIO2
		#define		KEY1		PORT0,18		//GPIO0
		#define		KEY2		PORT0,11		//GPIO0
		#define		KEY3		PORT2,13		//GPIO2

		#define		KEY_RC		PORT1,26		//GPIO1

		#define		SW1			KEY0
		#define		SW4			KEY1
		#define		SW7			KEY2
		#define		SW10		KEY3
		#define		SW13		KEY_RC

	//Entradas digitales:
		#define		IN0			PORT4,29	//GPIO4
		#define		IN1			PORT2,11	//GPIO2

	//GPIOS LCD:
		#define		LCD_D4		PORT0,5			//GPIO0
		#define		LCD_D5		PORT0,10		//GPIO0
		#define		LCD_D6		PORT2,4			//GPIO2
		#define		LCD_D7		PORT2,5			//GPIO2

		#define		LCD_RS		PORT2,6			//GPIO2
		#define		LCD_BF		PORT0,28		//GPIO1
		#define		LCD_E		PORT0,4			//GPIO0

	//	INTERRUUPCIONES
		#define EINT0 PORT2,10 //	sw1
		#define EINT1 PORT2,11 //	ED2 FIJO
		#define EINT2 PORT2,12 //	DIP2_2 exp1
		#define EINT3 PORT2,13 //	sw10 FIJO

	//Identificación de los puertos de expansion:
		#define EXPANSION0		PORT2,7
		#define EXPANSION1		PORT1,29
		#define EXPANSION2		PORT4,28
		#define EXPANSION3		PORT1,23
		#define EXPANSION4		PORT1,20
		#define EXPANSION5		PORT0,19
		#define EXPANSION6		PORT3,26
		#define EXPANSION7		PORT1,25

		#define EXPANSION8		PORT1,22
		#define EXPANSION9		PORT1,19
		#define EXPANSION10		PORT0,20
		#define EXPANSION11		PORT3,25
		#define EXPANSION12		PORT1,27
		#define EXPANSION13		PORT1,24
		#define EXPANSION14		PORT1,21
		#define EXPANSION15		PORT1,18
		#define EXPANSION16		PORT1,31

		#define EXPANSION17		PORT0,24
		#define EXPANSION18		PORT0,25
		#define EXPANSION19		PORT0,17
		#define EXPANSION20		PORT1,31
		#define EXPANSION21		PORT0,22
		#define EXPANSION22		PORT0,15
		#define EXPANSION23		PORT0,16

		#define EXPANSION24		PORT2,8
		#define EXPANSION25		PORT2,12
		#define EXPANSION26		PORT1,31
		#define EXPANSION27		PORT1,31


	//Defines generales:
		#define		OFF		0
		#define		ON		1

		#define		LOW		0
		#define		HIGH	1

		#define     ALTO    1
		#define     BAJO    0

		#define		BUZZ_ON		1
		#define		BUZZ_OFF	0

		#define 	ENTRADA 	0
		#define 	SALIDA  	1

		#define 	NIVEL 		0
		#define 	FLANCO 		1

#endif /* KIT_INFO2_H_ */
