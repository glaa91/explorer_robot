#ifndef REGS_H_
#define REGS_H_

	#define		__R					volatile const
	#define		__W					volatile
	#define		__RW				volatile

	typedef 	unsigned int 		uint32_t;
	typedef 	unsigned short 		uint16_t;
	typedef 	unsigned char 		uint8_t;

	//!< GPIO - PORT0
	/*	*						*
		*************************
		*		FIODIR			*	0x2009C000
		*************************
		*		RESERVED		*	0x2009C004
		*************************
		*		RESERVED		*	0x2009C008
		*************************
		*		RESERVED		*	0x2009C00C
		*************************
		*		FIOMASK			*	0x2009C010
		*************************
		*		FIOPIN			*	0x2009C014
		*************************
		*		FIOSET			*	0x2009C018
		*************************
		*		FIOCLR			*	0x2009C01C
		*************************
		*						*
		*						*
	*/
	#define		FIO0DIR		( * ( (__RW uint32_t * ) 0x2009C000UL ) )
	#define		FIO0MASK	( * ( (__RW uint32_t * ) 0x2009C010UL ) )
	#define		FIO0PIN		( * ( (__RW uint32_t * ) 0x2009C014UL ) )
	#define		FIO0SET		( * ( (__RW uint32_t * ) 0x2009C018UL ) )
	#define		FIO0CLR		( * ( (__W uint32_t * ) 0x2009C01CUL ) )

    #define    GPIO   ( (uint32_t  * ) 0x2009C000UL ) //0x2009C000UL : Direccion de inicio del GPIO0


	//!< ////////////////Registros PINSEL//////////////////////////////
	//!< 00	GPIO (reset value)		01	funcion 1
	//!< 11	funcion 3				10	funcion 2
	//Registros generales:
	//0x4002C000UL : Direccion de inicio de los registros PINSEL
	#define		PINSEL		( ( uint32_t  * ) 0x4002C000UL )
	#define		PINSEL0		( * ( (__RW uint32_t * ) 0x4002C000UL ) ) //!< P0[15:0]
	#define		PINSEL1		( * ( (__RW uint32_t * ) 0x4002C004UL ) ) //!< P0[31:16]

	//!< ----------- Estados de PINSEL:	p.108
	#define		PINSEL_GPIO			0
	#define		PINSEL_FUNC1		1
	#define		PINSEL_FUNC2		2
	#define		PINSEL_FUNC3		3

	//!< //////////////////Registros PINMODE ///////////////////////////
    #define		PINMODE		( ( uint32_t  * ) 0x4002C040UL )
    #define     PINMODE_OD  ( ( uint32_t  * ) 0x4002C068UL)
	#define		PINMODE0	( * ( (__RW uint32_t * ) 0x4002C040UL ) )	//!< P0[15:0]
	#define		PINMODE1	( * ( (__RW uint32_t * ) 0x4002C044UL ) )	//!< P0[31:16]

	//!< ----------- Estados de PINMODE
	//!< 00	Pull Up resistor enable (reset value)		01	repeated mode enable
	//!< 11	Pull Down resistor enable					10	ni Pull Up ni Pull DOwn
	#define		PINMODE_PULLUP 		0
	#define		PINMODE_REPEAT 		1
	#define		PINMODE_NONE 		2
	#define		PINMODE_PULLDOWN 	3

	//!< ///////////////////   PCONP   //////////////////////////
	//!<  Power Control for Peripherals register (PCONP - 0x400F C0C4) [pag. 62 user manual LPC1769]
	//!< 0x400FC0C4UL : Direccion de inicio del registro de habilitación de dispositivos:
	#define 	PCONP	(* ( ( __RW uint32_t  * ) 0x400FC0C4UL ))


	//!< ///////////////////   PCLKSEL   //////////////////////////
	//!< Peripheral Clock Selection registers 0 and 1 (PCLKSEL0 -0x400F C1A8 and PCLKSEL1 - 0x400F C1AC) [pag. 56 user manual]
	//!< 0x400FC1A8UL : Direccion de inicio de los registros de seleccion de los CLKs de los dispositivos:
	#define		PCLKSEL		( ( __RW uint32_t  * ) 0x400FC1A8UL )
	//!< Registros PCLKSEL
	#define		PCLKSEL0	PCLKSEL[0]
	#define		PCLKSEL1	PCLKSEL[1]

	//0xE000E100UL : Direccion de inicio de los registros de habilitación (set) de interrupciones en el NVIC:
		#define		ISER		( ( uint32_t * ) 0xE000E100UL )
		//0xE000E180UL : Direccion de inicio de los registros de deshabilitacion (clear) de interrupciones en el NVIC:
		#define		ICER		( (  uint32_t * ) 0xE000E180UL )


		//Registros ISER: Para habilitar las Interupciones Se activan con 1 Escribiendo un 0 no hace nada
		#define		ISER0		ISER[0]
		#define		ISER1		ISER[1]
		#define		ISE_EINT3	ISER[0] |= (0x00000001 << 21)  //ISER0->bit21 pongo un 1 en el bit 21 para habilitar la INT EINT3
	    #define     ISE_EINT2	ISER[0] |= (0x00000001 << 20)  //ISER0->bit20 pongo un 1 en el bit 20 para habilitar la INT EINT2
	    #define     ISE_EINT1	ISER[0] |= (0x00000001 << 19)  //ISER0->bit19 pongo un 1 en el bit 19 para habilitar la INT EINT1
	    #define     ISE_EINT0	ISER[0] |= (0x00000001 << 18)  //ISER0->bit18 pongo un 1 en el bit 18 para habilitar la INT EINT1

		// Registro EXTMODE : Para seleccionar si la ISR Externa activa por flanco ó nivel
		#define		EXTMODE 		( (uint32_t  * ) 0x400FC148 )
		#define		EXTMODE3_F		EXTMODE[0] |= 0x00000001 << 3  // EINT3 por flanco
	    #define		EXTMODE2_F		EXTMODE[0] |= 0x00000001 << 2  // EINT2 por flanco
	    #define		EXTMODE1_F		EXTMODE[0] |= 0x00000001 << 1  // EINT1 por flanco
	    #define		EXTMODE0_F		EXTMODE[0] |= 0x00000001       // EINT0 por flanco

		// Registro EXTPOLAR : selecciona Polaridad del EXTMODE
		#define    EXTPOLAR        ( (uint32_t  * ) 0x400FC14C )
	    #define    EXTPOLAR3_P      EXTPOLAR[0] |= 0X00000001 << 3 // Flanco ó Nivel Positivo
	    #define    EXTPOLAR2_P      EXTPOLAR[0] |= 0X00000001 << 2 // Flanco ó Nivel Positivo
	    #define    EXTPOLAR1_P      EXTPOLAR[0] |= 0X00000001 << 1 // Flanco ó Nivel Positivo
	    #define    EXTPOLAR0_P      EXTPOLAR[0] |= 0X00000001      // Flanco ó Nivel Positivo


		//Registros ICER: Para deshabilitar las Interupciones Se desactivan con 1 Escribiendo un 0 no hace nada
		//Registros ICER:

		#define		ICER0		ICER[0]
		#define		ICER1		ICER[1]
		#define		ICE_EINT3	ICER0 |= (0x00000001 << 21) // deshabilito a EINT3
	    #define		ICE_EINT2	ICER0 |= (0x00000001 << 20) // deshabilito a EINT2
	    #define		ICE_EINT1	ICER0 |= (0x00000001 << 19) // deshabilito a EINT1
	    #define		ICE_EINT0	ICER0 |= (0x00000001 << 18) // deshabilito a EINT0


		#define		EXTINT 		( (uint32_t  * ) 0x400FC140UL ) // Reg de Flags para limpiar la ISR

		#define		CLR_EINT3		EXTINT[0] |= 0x00000001 << 3 // bajo el flag de EINT3
	    #define		CLR_EINT2		EXTINT[0] |= 0x00000001 << 2 // bajo el flag de EINT2
	    #define		CLR_EINT1		EXTINT[0] |= 0x00000001 << 1 // bajo el flag de EINT1
	    #define		CLR_EINT0		EXTINT[0] |= 0x00000001      // bajo el flag de EINT0



	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	// Registros de GPIO para usarse como ISR		Pagina 123
	    // Configuración
	    #define      IO0IntEnR  ( (uint32_t  * ) 0x40028090UL )	// Puerto 0 como FLANCO ASCENDENTE
	    #define      IO2IntEnR  ( (uint32_t  * ) 0x400280B0UL )	// Puerto 2 como FLANCO ASCENDENTE
	    #define      IO0IntEnF  ( (uint32_t  * ) 0x40028094UL )	// Puerto 0 como FLANCO DESCENDENTE
	    #define      IO2IntEnF  ( (uint32_t  * ) 0x400280B4UL )	// Puerto 2 como FLANCO DESCENDENTE

	   // Estado
	    #define     IO0IntStatR  ( (uint32_t  * ) 0x40028084UL ) //ESTADO de los FLAGS de interr FLANCO ASCENDENTE bits Puerto 0
	    #define     IO2IntStatR  ( (uint32_t  * ) 0x400280A4UL ) //ESTADO de los FLAGS de interr FLANCO ASCENDENTE bits Puerto 0
	    #define     IO0IntStatF  ( (uint32_t  * ) 0x40028088UL ) //ESTADO de los FLAGS de interr FLANCO DESCENDENTE bits Puerto 0
	    #define     IO2IntStatF  ( (uint32_t  * ) 0x400280A8UL ) //ESTADO de los FLAGS de interr FLANCO DESCENDENTE bits Puerto 2
	    #define     IOIntStatus  ( (uint32_t  * ) 0x40028080UL ) //Estado de los flags de interr de bits Puerto 2 y Puerto 0

	  //Bajo flags de Interr por GPIO
	    #define     IO0IntClr  ( (uint32_t  * ) 0x4002808CUL ) //Bajo flags de Interr Puerto 0
		#define     IO2IntClr  ( (uint32_t  * ) 0x400280ACUL ) //Bajo flags de Interr Puerto 2

	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	//!< SYSTEM TICK COUNTER
	/*		*						*
			*************************
			*		STCTRL			*	0x
			*************************
			*		STRELOAD		*	0x
			*************************
			*		STCURR			*	0x
			*************************
			*		STCLAIB			*	0x
			*************************
			*						*
			*						*
		*/
	//**********************System Tick Counter***************************
	typedef struct{
		union {
			__RW uint32_t	_STCTRL;
			struct {
				__RW uint32_t	_ENABLE:1;
				__RW uint32_t	_TICKINT:1;
				__RW uint32_t	_CLKSOURCE:1;
				__RW uint32_t	_RESERVED_0:14;
				__RW uint32_t	_COUNTFLAG:1;
				__RW uint32_t	_RESERVED_1:14;
			};
		};
		__RW uint32_t 	_STRELOAD;
		__RW uint32_t 	_STCURR;
		__R uint32_t 	_STCALIB;
	} sysTick_t;

	#define 		SYSTICK			( ( sysTick_t  * ) 0xE000E010UL )
	#define STCTRL			SYSTICK->_STCTRL
		#define ENABLE			SYSTICK->_ENABLE
		#define TICKINT			SYSTICK->_TICKINT
		#define CLKSOURCE		SYSTICK->_CLKSOURCE
		#define COUNTFLAG		SYSTICK->_COUNTFLAG
	#define STRELOAD		SYSTICK->_STRELOAD
	#define STCURR			SYSTICK->_STCURR
	#define STCALIB			SYSTICK->_STCALIB

//	#define 		SYSTICK			( ( __RW uint32_t  * ) 0xE000E010UL )
//	#define			STCTRL			SYSTICK[0]
//	#define			STRELOAD		SYSTICK[1]
//	#define			STCURR			SYSTICK[2]
//	#define			STCALIB			SYSTICK[3]


#endif /* REGS_H_ */
