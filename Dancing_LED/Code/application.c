/* 
 * File:   Dancing_LED.c
 * Author: Mohamed-Galal
 *
 * Created on April 25, 2024, 6:48 PM
 */

#include "application.h"
#define _XTAL_FREQ 4000

/*
 * 
 */
int main() 
{
    TRISC = 0x00;
    while(1)
    {
        LATC = 0x00;
        __delay_ms(1000);
        LATC |= (_LATC_LATC0_MASK | _LATC_LATC7_MASK);
        __delay_ms(1000);
        LATC |= (_LATC_LATC1_MASK | _LATC_LATC6_MASK);
        __delay_ms(1000);
        LATC |= (_LATC_LATC2_MASK | _LATC_LATC5_MASK);
        __delay_ms(1000);
        LATC |= (_LATC_LATC3_MASK | _LATC_LATC4_MASK);
        __delay_ms(1000);
    }
    
    return (EXIT_SUCCESS);
}

