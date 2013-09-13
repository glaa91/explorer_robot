#include "includes_todos.h"

#ifndef SYSTICK_H_
#define SYSTICK_H_

	typedef uint8_t	timer_t;
	typedef uint8_t	event_t;

//timerStart(0,4,SEG) Timer 0, Cada 4, SEGUNDOS
//si lo disparo cada 0 segundos puedo interpretar que lo quiero apagar
	#define timerStop(eve,base)		timerStart(eve,0,base)

// cantidad de timers

	#define TIMER_DEC 0
	#define TIMER_SEG 6
	#define TIMER_MIN 0

	#define UNA_DECIMA	40	//con ticks de 2.5mS
	#define UN_SEGUNDO	10
	#define	UN_MINUTO 0

	#define	DEC 0
	#define	SEG	1
	#define	MIN 2

//************************* PROTOTIPOS *****************************
	void InicializarSysTick(void);	//Inicializacion del System Tick Counter
	void timerStart (uint8_t , timer_t , uint8_t);
	void timerClose (void);
	void analizarTimer(timer_t tmr_run[], event_t *evento, uint8_t TIMERS);

#endif /* SYSTICK_H_ */
