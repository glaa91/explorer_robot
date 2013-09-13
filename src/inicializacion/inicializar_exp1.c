#include "includes_todos.h"

//*************************FUNCIONES******************************

void InicializarExp1 (void)
{
	setPinSel (LED1, PINSEL_GPIO);
	setPinSel (LED2, PINSEL_GPIO);
	setPinSel (LED3, PINSEL_GPIO);
	setPinSel (LED4, PINSEL_GPIO);
	setPinSel (LED5, PINSEL_GPIO);
	setPinSel (LED6, PINSEL_GPIO);
	setPinSel (LED7, PINSEL_GPIO);
	setPinSel (LED8, PINSEL_GPIO);

	setPinSel (DP1_1, PINSEL_GPIO);
	setPinSel (DP1_2, PINSEL_GPIO);
	setPinSel (DP1_3, PINSEL_GPIO);
	setPinSel (DP1_4, PINSEL_GPIO);
	setPinSel (DP1_5, PINSEL_GPIO);
	setPinSel (DP1_6, PINSEL_GPIO);
	setPinSel (DP1_7, PINSEL_GPIO);
	setPinSel (DP1_8, PINSEL_GPIO);

	setPinSel (DP2_1, PINSEL_GPIO);
	setPinSel (DP2_2, PINSEL_GPIO);
	setPinSel (DP2_3, PINSEL_GPIO);

	setPinDir (LED1, SALIDA);
	setPinDir (LED2, SALIDA);
	setPinDir (LED3, SALIDA);
	setPinDir (LED4, SALIDA);
	setPinDir (LED5, SALIDA);
	setPinDir (LED6, SALIDA);
	setPinDir (LED7, SALIDA);
	setPinDir (LED8, SALIDA);

	setPinDir (DP1_1, ENTRADA);
	setPinDir (DP1_2, ENTRADA);
	setPinDir (DP1_3, ENTRADA);
	setPinDir (DP1_4, ENTRADA);
	setPinDir (DP1_5, ENTRADA);
	setPinDir (DP1_6, ENTRADA);
	setPinDir (DP1_7, ENTRADA);
	setPinDir (DP1_8, ENTRADA);

	setPinDir (DP2_1, ENTRADA);
	setPinDir (DP2_2, ENTRADA);
	setPinDir (DP2_3, ENTRADA);

}
