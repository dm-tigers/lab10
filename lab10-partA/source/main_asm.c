/*----------------------------------------------------------------------------
 * Name:    Blinky.c
 * Purpose: LED Flasher
 * Note(s): possible defines set in "options for target - C/C++ - Define"
 *            __USE_LCD   - enable Output on LCD
 *----------------------------------------------------------------------------
 * This file is part of the uVision/ARM development tools.
 * This software may only be used under the terms of a valid, current,
 * end user licence from KEIL for a compatible version of KEIL software
 * development tools. Nothing else gives you the right to use this software.
 *
 * This software is supplied "AS IS" without warranties of any kind.
 *
 * Copyright (c) 2008-2011 Keil - An ARM Company. All rights reserved.
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include "LPC17xx.H"                         /* LPC17xx definitions           */
#include "Serial.h"

extern uint32_t mystery(uint32_t); /* mystery assembler routine */
/*----------------------------------------------------------------------------
  Main Program
 *----------------------------------------------------------------------------*/
int main (void) {
    static const char str[] = "Hello, World!";

    const int len = sizeof(str) / sizeof(str[0]);
    char      newstr[len];
    int       i;
    SER_Init();
    for (i = 0; i < len; i++)
        newstr[i] = mystery(str[i]);

    printf("%s\n", newstr);

    return 0;
  }


