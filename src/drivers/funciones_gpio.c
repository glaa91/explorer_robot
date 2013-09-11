#include "includes_todos.h"


void setPinSel( uint8_t port , uint8_t pin ,uint8_t sel)
{
	port = port * 2 + pin / 16;
	pin = ( pin % 16 ) * 2;
	PINSEL[ port ] = PINSEL[ port ] & ( ~ ( 0x03 << pin ) );
	PINSEL[ port ] = PINSEL[ port ] | ( sel << pin );
}

void setPinMode( uint8_t port , uint8_t pin ,uint8_t modo)
{
	port = port * 2 + pin / 16;
	pin = ( pin % 16 ) * 2;
	PINMODE[ port ] = PINMODE[ port ] & ( ~ ( 0x03 << pin ) );
	PINMODE[ port ] = PINMODE[ port ] | ( modo << pin );
}

void setPinDir( uint8_t port , uint8_t pin , uint8_t dir )
{
	port = port * 8;

	GPIO[ port ] = GPIO[ port ] & ( ~ ( 0x01 << pin ) );
	GPIO[ port ] = GPIO[ port ] | ( dir << pin );
}

void setPin( uint8_t port , uint8_t pin , uint8_t estado )
{
	port = port * 8 + 5;

	GPIO[ port ] = GPIO[ port ] & ( ~ ( 0x01 << pin ) );
	GPIO[ port ] = GPIO[ port ] | ( estado << pin );
}

uint8_t getPin( uint8_t port , uint8_t pin , uint8_t actividad )
{
	port = port * 8 + 5;

	return ( ( ( GPIO[ port ] >> pin ) & 0x01 ) == actividad ) ? 1 : 0;

}
