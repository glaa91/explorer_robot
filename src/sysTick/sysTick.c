#include "includes_todos.h"


//CON EXTERN LE DIGO QUE ESTA EN OTRO LADO
timer_t tmr_run_seg[TIMER_SEG];
event_t eventos_seg;


void InicializarSysTick(void)
{
	STRELOAD = ( STCALIB / 1 ) - 1;
	STCURR = 0;
	CLKSOURCE = 1;
	ENABLE = 1;
	TICKINT = 1;
	//STCTRL |= 0x00000001 << 0;
	//STCTRL |= 0x00000001 << 1;
	//STCTRL |= 0x00000001 << 2;
	return;
}

//timerStart(0,4,SEG) Timer 0, Cada 4, SEGUNDOS
//si lo disparo cada 0 segundos puedo interpretar que lo quiero apagar

void timerStart (uint8_t n_ev, timer_t t, uint8_t u)
{
	switch(u){
		case DEC:
			//para y arranca la interrupcion
			TICKINT = 0;	//hay que hacerlo pq si una linea de C dura 2 de asm y justo salta en el medio de las 2 y modifica el valor, va a ver un problema.
//			tmr_run_dec[n_ev] = t;
//			eventos_dec &= ~( 1 << n_ev );
			TICKINT = 1;
			break;

		case SEG:
			TICKINT = 0;	//hay que hacerlo pq si una linea de C dura 2 de asm y justo salta en el medio de las 2 y modifica el valor, va a ver un problema.
			tmr_run_seg[n_ev] = t;
			eventos_seg &= ~( 1 << n_ev );
			TICKINT = 1;
			break;

		case MIN:
			TICKINT = 0;	//hay que hacerlo pq si una linea de C dura 2 de asm y justo salta en el medio de las 2 y modifica el valor, va a ver un problema.
//			tmr_run_min[n_ev] = t;
//			eventos_min &= ~( 1 << n_ev );
			TICKINT = 1;
			break;
	}
}

//void timerStop (uchar n_ev, timer_t t, uchar8_t u)
//{
//
//}

void timerClose (void)
{
	uint8_t i;

	for(i=0; i<TIMER_SEG; i++)
	{
		timerStop(i,SEG);
	}
}

void SysTick_Handler(void)
{
	static uint8_t ticks = UNA_DECIMA;
	static uint8_t decimas = UN_SEGUNDO;

	ticks --;

	if(!ticks)
	{
		ticks = UNA_DECIMA;
		decimas--;

		if(!decimas)
		{
			decimas = UN_SEGUNDO;
			analizarTimer(tmr_run_seg, &eventos_seg, TIMER_SEG);	//le pasamos la direcion del vector de los temporizadores que quiero analizar
		}
	}
}

void analizarTimer(timer_t tmr_run[], event_t *evento, uint8_t TIMERS)
{
	uint8_t i;

	for(i=0; i<TIMERS; i++)
	{
		if(tmr_run[i]) //si vale algo hagoa lgo
		{
			tmr_run[i] --;
			if(!tmr_run[i])	*evento |= (1<<i);	//pongo en 1 el flag
		}

	}
}
