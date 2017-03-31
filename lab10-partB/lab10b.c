#include <stdio.h>
#include "LPC17xx.H"                         /* LPC17xx definitions           */
#include "Serial.h"

uint8_t *s;  // UART0 transmission buffer address
uint8_t value_rx;  // latest receive byte
uint8_t tx_finish_flag=0; //transmission finish flag

//strings 
uint8_t answer1[] = "A) Nanjing\n";
uint8_t answer2[] = "B) Tianjing\n";
uint8_t answer3[] = "C) Beijing\n";
uint8_t answer4[] = "D) Wanjing\n";
			
uint8_t correctAnswer[] = "\nGood work.";
uint8_t wrongAnswer[] = "\nSorry, try again.";
			
uint8_t question[] = "What is the capiral city of China? \n";
	

void UART0_IRQHandler(void)
{
	uint32_t intsrc, tmp;
	if((LPC_UART0 -> IIR) == 0x060010)//Receive
	{
		
	}
	if((LPC_UART0 -> IIR) == 0x060100)//transmit
	{
		
		if (tmp == 0)
		{
			tx_finish_flag = 1;
		}
		else
		{
			
		}
	}
	/* 1. Determine the interrupt source whether THR or RBR
				In case of receving, receive data available
        In case of transmission, once it ends change transmission finish flag to 1, if used	*/
}





/* 2. Store the question, correctanswer and wronganswer into individual array*/

void send_Array(uint8_t array[])
{
		uint8_t i = 0;
		//s = array;
		do
		{
			LPC_UART0->THR = *array;
			i++;
		}while(!tx_finish_flag);
		return;
}

/*----------------------------------------------------------------------------
  Main Program
 *----------------------------------------------------------------------------*/


int main (void){
	
	uint8_t choice;
  SER_Init();
	send_Array(question);

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

