/* 
 * File:   LigaOsLed.c
 * Author: Alicia
 * 
 * ------------------
 * Ligar os Leds do Microcontrolador
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
    TRISDbits.RD0 = 0;  //define pino d0 como output
    TRISCbits.RC0 = 0;
    OSCCON = 0b01000111;   //oscilador timer1, 500kHz de freq
   
    //bota as luz pra piscar
    while (1){
        PORTDbits.RD0 = 1;
        for (int x=0; x<=20; x++)__delay_ms(50);    //delayzinho de 1s
        PORTDbits.RD0 = 0;
        for (int x=0; x <= 20; x++)__delay_ms(50);
        PORTCbits.RC0 = 1;
        for (int x=0; x<= 20; x++)__delay_ms(50);
        PORTCbits.RC0 = 1;
        for (int x=0; x<= 20; x++)__delay_ms(50);
    }
}

