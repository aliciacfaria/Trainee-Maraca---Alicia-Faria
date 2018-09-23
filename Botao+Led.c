/* 
 * File:   Botao+Led.c
 * Author: Alicia
 * 
 * ------------------
 * Ligar Led ao comando do Botão
 * ------------------
 *
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "BagulhaiDosLed.h"

/*
 * 
 */

void main (){
#define LED1 PORTDbits.RD0
#define LED2 PORTCbits.RC0
#define BOTAO1 PORTDbits.RD5
#define BOTAO2 PORTDbits.RD6

    
    TRISDbits.RD0 = 0;  //define pino d0 como output
    TRISCbits.RC0 = 0;
    TRISDbits.RD5 = 1;  //define pino d5 como input; botao ligado ao LED d0
    TRISDbits.RD6 = 1;  //botao ligado ao LED c0
    OSCCON = 0b01000111;
    
    while (1){
        if (BOTAO1 == 1){
            __delay_ms(100);
            LED1=~LED1;
            
        }
        if (BOTAO2 == 1){
            __delay_ms(100);
            LED2=~LED2;
            
        }
    }
}

