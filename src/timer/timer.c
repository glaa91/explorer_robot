
void inicTimer0(void){
	PCONP |= 1 << 1;	//
	PCLKSEL0 |= 1 << 2;	//	Clock del timer PCLK = CCLK
	T0PR = 100000000;
	T0CTCR = 0X00;		//Timer cuenta pulsos de PCLK y captura en falling edge de p1.26

}
