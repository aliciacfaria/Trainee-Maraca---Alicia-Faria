/* 
 * File:   Botao+Piscar.c
 * Author: Alicia
 * 
 * ------------------
 * Aumentar a frequência ao apertar o botão
 * ------------------
 *
 * 
 */

#define LED_UM PORTDbits.RD0
#define LED_DOIS PORTCbits.RC0
#define BOTAO_UM PORTDbits.RD5
#define BOTAO_DOIS PORTDbits.RD6

#include <stdio.h>
#include <stdlib.h>
#include "conf.h"

/*
 * 
 */



    
    
    
int cont1=100;
int cont2=100;
    
 void main (){
     TRISDbits.RD0 = 0;  //define pino d0 como output
    TRISCbits.RC0 = 0;
    TRISDbits.RD5 = 1;  //define pino d5 como input; botao ligado ao LED d0
    TRISDbits.RD6 = 1;//botao ligado ao LED c0
    OSCCON = 0b01000111;
   
        LED_UM =1;
        LED_DOIS = 1;
        
        while (1){
        if (BOTAO_UM==1){
            cont1--;
            for(int x=0; ;x++){
            if(x%cont1==0) LED_UM=~LED_UM; }
        }
        
        if (BOTAO_DOIS==1){
            cont2--;
            for (int x=0; ;x++){
                if(x%cont2==0){
                    LED_DOIS=~LED_DOIS; 
                }
            }
            }
        }
}