/*
 * File:   avr-main.c
 * Author: dayel
 *
 * Created on 28 de abril de 2021, 05:16 PM
 */


#include <xc.h>
#include <util/delay.h>
#include <avr/io.h>
#define F_CPU 10000000UL

int main(void) {
   
    DDRB = 0X01;
    PORTB = 0b00000001;
    
    while (1) {
        PORTB=0b00000001;
        _delay_ms(2000);
        PORTB=0b00000001;
        _delay_ms(2000);
    }
}
