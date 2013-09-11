#include "includes_todos.h"
//*************************PROTOTIPOS LPC*****************************

void setPinSel ( uint8_t  , uint8_t  ,uint8_t );
void setPinMode( uint8_t  , uint8_t  ,uint8_t );
void setPinDir( uint8_t  , uint8_t  , uint8_t  );
void setPin( uint8_t  , uint8_t  , uint8_t  );
uint8_t getPin( uint8_t  , uint8_t  , uint8_t );

void InitPLL(void);
void InicializarLPC (void);

#define PORT0     0
#define PORT1     1
#define PORT2     2
#define PORT3     3
#define PORT4     4

// macros para las Interrupciones Externas
#define     EINT0_PIN       PORT2,10
#define     EINT1_PIN       PORT2,11
#define     EINT2_PIN       PORT2,12
#define     EINT3_PIN       PORT2,13
