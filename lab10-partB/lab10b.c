#include <stdio.h>
#include "LPC17xx.H"                         /* LPC17xx definitions           */
#include "Serial.h"

uint8_t *s;  // UART0 transmission buffer address

uint8_t value_rx;  // latest receive byte

uint8_t tx_finish_flag=0; //transmission finish flag

void UART0_IRQHandler(void)
{
	uint32_t intsrc, tmp;

	/* 1. Determine the interrupt source whether THR or RBR
				In case of receving, receive data available
        In case of transmission, once it ends change transmission finish flag to 1, if used	*/
	





/* 2. Store the question, correctanswer and wronganswer into individual array*/

	
}

/*----------------------------------------------------------------------------
  Main Program
 *----------------------------------------------------------------------------*/


int main (void){
	
	uint8_t choice;
    SER_Init();
    
	  while(1)
		{
	

/* - Transmit your question			
	 - Wait until transmission is finished , if using transmission finish flag change to 0
	 - Wait until some char is received
	 - Check if char received is 'c' or 'C' transmit correct answer string, else wrong answer string 
   - Again transmit your question
		 

*/ 
			
		}	
    return 0;
}
