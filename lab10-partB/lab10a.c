#include <stdio.h>
#include "LPC17xx.H"                         /* LPC17xx definitions           */
#include "Serial.h"

/* 1. Store the Question, correct answer and wrong answer all as individual arrays 
      e.g. uint8_t questions[] = "......"                                     */
			
			
			
/* 2. write a void putstring() function to send a string to UART0 by calling the function of int SER_PutChar (int c) 

      void putstring(.....){



			}				                                                                 */
			
			
/*----------------------------------------------------------------------------
  Main Program
 *----------------------------------------------------------------------------*/
 
 int main (void) {
	
	  uint8_t choice;
    SER_Init();
    
	  while(1)
		{
			
/* 3.  - Send question array string to UART0, to print the question	
       - Store the input option(answer) in choice variable declared above
			 - If Input option is 'c' or 'C', Send correctanswer array string to UART0, 
			   to print the correctanswer, else send wronganswer array string to UART0
*/
			
			
		}   
    return 0;
}
		
