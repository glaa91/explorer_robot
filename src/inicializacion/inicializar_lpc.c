#include "includes_todos.h"
void InicializarLPC ( void )
{
	//Configuro en primer lugar el PLL:
	//Estabiliza el oscilador interno del micro en 100MHz
	InitPLL();
}

//void InitGPIOs ( void )
//{
//	//Para cada pin de un puerto de entrada/salida, tengo que
//	//configurar 2 registros:
//	//PINSEL: 	Selecciona si el pin se comportara como un GPIO o como el pin de un periférico
//	//			Para modificar este registro uso la macro SETPINSEL, definida en KitInfo2.h
//	//FIODIR:	Selecciona si el pin se comportara como una entrada o como una salida digital
//	//			Para modificar este registro uso la macro DIRECCION, definida en KitInfo2.h
//
//	//OUT0 : PIN42		-> 	P2[0]	-> PINSEL4: 00:01
//	setPinSel(LED1,PINSEL_GPIO);
//	setPinDir(LED1,SALIDA);
//
//	//OUT1 : PIN15 		-> 	P0[23]	-> PINSEL1: 14:15
//	setPinSel(LED2,PINSEL_GPIO);
//	setPinDir(LED2,SALIDA);
//
//	//OUT2 : PIN23 		-> 	P0[21]	-> PINSEL1: 10:11
//	setPinSel(LED3,PINSEL_GPIO);
//	setPinDir(LED3,SALIDA);
//
//	//OUT3 : PIN25 		-> 	P0[27]	-> PINSEL1: 22:23
//	setPinSel(LED4,PINSEL_GPIO);
//	setPinDir(LED4,SALIDA);
//
//	//Buzzer : PIN26	-> 	P0[28]	-> PINSEL1: 24:25
//	setPinSel(BUZZ,PINSEL_GPIO);
//	setPinDir( BUZZ,SALIDA);
//
//	//LEDs RGB:
//	//Led1 : PIN43		-> 	P2[1]	-> PINSEL4: 02:03
//	setPinSel(RGBR,PINSEL_GPIO);
//	setPinDir(RGBR,SALIDA);
//
//	//Led2 : PIN44		-> 	P2[2]	-> PINSEL4: 04:05
//	setPinSel(RGBG,PINSEL_GPIO);
//	setPinDir(RGBG,SALIDA);
//	//Led3 : PIN45		-> 	P2[3]	-> PINSEL4: 06:07
//	setPinSel(RGBB,PINSEL_GPIO);
//	setPinDir(RGBB,SALIDA);
//
//	//Pulsadores:
//	//Tecla0:	PIN 51	-> 	P2[10]	-> PINSEL4:	20:21
//	setPinSel(KEY0,PINSEL_GPIO);
//	setPinDir(KEY0,ENTRADA);
//	//Tecla1:	PIN 11	-> 	P0[18]	-> PINSEL1: 04:05
//	setPinSel(KEY1,PINSEL_GPIO);
//	setPinDir(KEY1,ENTRADA);
//	//Tecla2:	PIN 41	-> 	P0[11]	-> PINSEL0: 22:23
//	setPinSel(KEY2,PINSEL_GPIO);
//	setPinDir(KEY2,ENTRADA);
//	//Tecla3:	PIN 27	-> 	P2[13]	-> PINSEL4: 26:27
//	setPinSel(KEY3,PINSEL_GPIO);
//	setPinDir(KEY3,ENTRADA);
//
//	//PulsadorRC:
//	//Tecla0: PAD 9	-> 		P1[26]	-> PINSEL3: 20:21
//	setPinSel(KEY_RC,PINSEL_GPIO);
//	setPinDir(KEY_RC ,ENTRADA);
//
//	//Entradas digitales:
//	//I0 : PAD 16	-> 		P4[29]	-> PINSEL9: 26:27
//	setPinSel(IN0,PINSEL_GPIO);
//	setPinDir(IN0,ENTRADA);
//
//	//I1 : PIN 52	-> 		P2[11]	-> PINSEL4: 22:23
//	setPinSel(IN1,PINSEL_GPIO);
//	setPinDir(IN1,ENTRADA);
//
//#if (EXPANSION == EXPAN1)
//
//	setPinSel(LD1,PINSEL_GPIO);
//	setPinDir(LD1,SALIDA);
//	setPinSel(LD2,PINSEL_GPIO);
//	setPinDir(LD2,SALIDA);
//	setPinSel(LD3,PINSEL_GPIO);
//	setPinDir(LD3,SALIDA);
//	setPinSel(LD4,PINSEL_GPIO);
//	setPinDir(LD4,SALIDA);
//	setPinSel(LD5,PINSEL_GPIO);
//	setPinDir(LD5,SALIDA);
//	setPinSel(LD6,PINSEL_GPIO);
//	setPinDir(LD6,SALIDA);
//	setPinSel(LD7,PINSEL_GPIO);
//	setPinDir(LD7,SALIDA);
//	setPinSel(LD8,PINSEL_GPIO);
//	setPinDir(LD8,SALIDA);
//
//
//	setPinSel(DP1_1,PINSEL_GPIO);
//	setPinDir(DP1_1,ENTRADA);
//	setPinSel(DP1_2,PINSEL_GPIO);
//	setPinDir(DP1_2,ENTRADA);
//	setPinSel(DP1_3,PINSEL_GPIO);
//	setPinDir(DP1_3,ENTRADA);
//	setPinSel(DP1_4,PINSEL_GPIO);
//	setPinDir(DP1_4,ENTRADA);
//	setPinSel(DP1_1,PINSEL_GPIO);
//	setPinDir(DP1_5,ENTRADA);
//	setPinSel(DP1_5,PINSEL_GPIO);
//	setPinDir(DP1_6,ENTRADA);
//	setPinSel(DP1_6,PINSEL_GPIO);
//	setPinDir(DP1_6,ENTRADA);
//	setPinSel(DP1_7,PINSEL_GPIO);
//	setPinDir(DP1_7,ENTRADA);
//	setPinSel(DP1_8,PINSEL_GPIO);
//	setPinDir(DP1_8,ENTRADA);
//
//	setPinSel(DP2_1,PINSEL_GPIO);
//	setPinDir(DP2_1,ENTRADA);
//	setPinSel(DP2_2,PINSEL_GPIO);
//	setPinDir(DP2_2,ENTRADA);
//
//
//#endif
//
//	//Empiezo el programa con los LEDs y el buzzer apagados
//	setPin(LED1,OFF);
//	setPin(LED4,OFF);
//	setPin(LED2,OFF);
//	setPin(LED3,OFF);
//	setPin(BUZZ,ON);
//
//}
