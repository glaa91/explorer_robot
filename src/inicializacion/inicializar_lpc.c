#include "includes_todos.h"

void InicializarLPC ( void )
{
	//Configuro en primer lugar el PLL:
	//Estabiliza el oscilador interno del micro en 100MHz
	InitPLL();
}
