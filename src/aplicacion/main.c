#ifdef __USE_CMSIS
#include "LPC17xx.h"
#endif

#include <cr_section_macros.h>
#include <NXP/crp.h>

__CRP const unsigned int CRP_WORD = CRP_NO_CRP ;

#include "includes_todos.h"
#include "stdio.h"

int main(void)
{
	InicializarLPC();
	InicializarPlacaBase();
	//InicializarExp1();
	//InicializarISR();
	InicializarSysTick();

	setPin(BUZZ,BUZZ_OFF);

	while(1);

	return 0 ;
}
