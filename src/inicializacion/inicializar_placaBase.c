#include "includes_todos.h"

void InicializarPlacaBase()
{
	inic_Teclado ();
	inic_Relay_Buzz ();
	inic_RGB ();
}

void inic_Teclado (void)
{
	setPinSel (KEY0, PINSEL_GPIO);
	setPinSel (KEY1, PINSEL_GPIO);
	setPinSel (KEY2, PINSEL_GPIO);
	setPinSel (KEY3, PINSEL_GPIO);

	setPinDir (KEY0, ENTRADA);
	setPinDir (KEY1, ENTRADA);
	setPinDir (KEY2, ENTRADA);
	setPinDir (KEY3, ENTRADA);

	setPinMode (KEY0, PINMODE_PULLUP);
	setPinMode (KEY1, PINMODE_PULLUP);
	setPinMode (KEY2, PINMODE_PULLUP);
	setPinMode (KEY3, PINMODE_PULLUP);
}

void inic_Relay_Buzz (void)
{
	setPinSel (RELAY1, PINSEL_GPIO);
	setPinSel (RELAY2, PINSEL_GPIO);
	setPinSel (RELAY3, PINSEL_GPIO);
	setPinSel (RELAY4, PINSEL_GPIO);

	setPinSel (BUZZ, PINSEL_GPIO);

	setPinDir (RELAY1, SALIDA);
	setPinDir (RELAY2, SALIDA);
	setPinDir (RELAY3, SALIDA);
	setPinDir (RELAY4, SALIDA);

	setPinDir (BUZZ, SALIDA);
}

void inic_RGB (void)
{
	setPinSel (RGBR, PINSEL_GPIO);
	setPinSel (RGBG, PINSEL_GPIO);
	setPinSel (RGBB, PINSEL_GPIO);

	setPinDir (RGBR, SALIDA);
	setPinDir (RGBG, SALIDA);
	setPinDir (RGBB, SALIDA);
}
