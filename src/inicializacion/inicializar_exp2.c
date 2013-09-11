#include "includes_todos.h"
//*************************FUNCIONES******************************

void InicializarExp2 (void)
{
	setPinSel (DIG1, PINSEL_GPIO);
	setPinSel (DIG2, PINSEL_GPIO);
	setPinSel (DIG3, PINSEL_GPIO);
	setPinSel (DIG4, PINSEL_GPIO);
	setPinSel (DIG5, PINSEL_GPIO);
	setPinSel (DIG6, PINSEL_GPIO);
	setPinSel (SEG_A, PINSEL_GPIO);
	setPinSel (SEG_B, PINSEL_GPIO);
	setPinSel (SEG_C, PINSEL_GPIO);
	setPinSel (SEG_D, PINSEL_GPIO);
	setPinSel (SEG_E, PINSEL_GPIO);
	setPinSel (SEG_F, PINSEL_GPIO);
	setPinSel (SEG_G, PINSEL_GPIO);
	setPinSel (SEG_DP, PINSEL_GPIO);

	setPinDir (DIG1, SALIDA);
	setPinDir (DIG2, SALIDA);
	setPinDir (DIG3, SALIDA);
	setPinDir (DIG4, SALIDA);
	setPinDir (DIG5, SALIDA);
	setPinDir (DIG6, SALIDA);
	setPinDir (SEG_A, SALIDA);
	setPinDir (SEG_B, SALIDA);
	setPinDir (SEG_C, SALIDA);
	setPinDir (SEG_D, SALIDA);
	setPinDir (SEG_E, SALIDA);
	setPinDir (SEG_F, SALIDA);
	setPinDir (SEG_G, SALIDA);
	setPinDir (SEG_DP, SALIDA);
}
