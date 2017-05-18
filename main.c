/*
 * File:   main.c
 * Author: 351289
 *
 * Created on March 1, 2017, 10:36 AM
 */
// PIC24FJ256GA106 Configuration Bit Settings

#include "mcc_generated_files/mcc.h"

#include "p24FJ256GA106.h"

#include "sysint.h"
#include <xc.h>
#define FCY 16000000UL
#include <libpic30.h>


    
int main(void) {
    SYSTEM_Initialize();
    //sysint();
    pwmint();


    while (1) {
        
    }// while loop
    return 0;
}
