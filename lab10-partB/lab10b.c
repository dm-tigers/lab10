#include <stdio.h>
#include "LPC17xx.H"                         /* LPC17xx definitions           */
#include "Serial.h"

#define SEND(x) LPC_UART0 -> THR = (x) //macro definition 
#define INTSRC0 (LPC_UART0 -> IIR)
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
			
uint8_t question[] = "What is the capital city of China? \n";
	

void UART0_IRQHandler(void)
{
	
	//uint32_t intsrc, tmp;

	if((INTSRC0 & 0x4) == 0x04)//Receive
	{
		LPC_UART0->RBR;
	}// if receive
	
	
	if((INTSRC0 & 0x02) == 0x2)//transmit
	{
		
		if(LPC_UART0->THR == 0)
		{
			tx_finish_flag = 1;
			return;
		}//if EOT
		else
		{
			return;
		}//o.w.
		

	}
	/* 1. Determine the interrupt source whether THR or RBR
				In case of receving, receive data available
        In case of transmission, once it ends change transmission finish flag to 1, if used	*/
}//interrupt handler





/* 2. Store the question, correctanswer and wronganswer into individual array*/


/*----------------------------------------------------------------------------
  Main Program
 *----------------------------------------------------------------------------*/


int main (void){
	
	uint8_t choice;
	uint8_t i = 0;
  SER_Init();
;
	//SEND(question[1]);
	//SEND(question[2]);
while(1)
{
		if(!tx_finish_flag)
			{SEND(question[i++]);}
		
/* - Transmit your question			
	 - Wait until transmission is finished , if using transmission finish flag change to 0
	 - Wait until some char is received
	 - Check if char received is 'c' or 'C' transmit correct answer string, else wrong answer string 
   - Again transmit your question
*/ 
				
    return 0;
}
}

