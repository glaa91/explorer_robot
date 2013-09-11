#include "includes_todos.h"

 void InicializarISR(void){
     IO0IntEnF[0] |= 0x01 << 11;	//habilito al pin P0[11]-SW7 para que genere una ISR por flanco negativo
     IO2IntEnF[0] |= 0x01 << 13;	//habilito al pin P2[13]-SW10 para que genere una ISR por flanco negativo
     ISE_EINT3;
}
void EINT3_IRQHandler(void){
	uint32_t i;
 	CLR_EINT3;
 	if (IOIntStatus[0] & 0x01){// La interrup vino por algún bit de P0?
 		if ((IO0IntStatF[0] >> 11) & 0x01){ // Fue el P0[11]  SW7
 			for (i=0; i<400000; i++);	//PARA SACAR RUIDO
 			if(getPin(SW7,HIGH) == 0){	//PARA SACAR RUIDO
 				printf("SW7\n");

 			}
			IO0IntClr[0]|= 0x01<<11; // apago el flag del P0[18];
 		}

 	}
     if (IOIntStatus[0] & 0x04){ // La interrup vino por algún bit de P2?
    	 if((IO2IntStatF[0] >> 13) & 0x01){// Fue el P2[13] SW10
    		 printf("SW10\n");

 			 IO2IntClr[0]|= 0x01<<13; // apago el flag del P2[13]
    	 }
     }
 }
