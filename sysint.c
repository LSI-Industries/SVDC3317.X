#include "p24FJ256GA106.h" // include processor files - each processor file is guarded.  
#include "sysint.h"

void sysint(void){
    
   // SR = 0x0000;
    
    //CORCONbits.IPL3 = 0;
    //CORCONbits.PSV = 0;
    
    INTCON1bits.ADDRERR = 0;
    INTCON1bits.MATHERR = 0;
    INTCON1bits.NSTDIS = 0;
    INTCON1bits.OSCFAIL = 0;
    INTCON1bits.STKERR = 0;
    
    INTCON2 = 0x0000;
    INTCON2bits.INT0EP = 0;//External Interrupt 0 Edge Detect Polarity Select bit, 1 = Interrupt on negative edge, 0 = Interrupt on positive edge
    IFS0 = 0x0000; // clear flags
    IFS0bits.INT0IF = 0; // External Interrupt 0 Flag Status bit
    IFS1 = 0x0000; // clear flags
    IFS2 = 0x0000; // clear flags
    IFS3 = 0x0000; // clear flags
    IFS4 = 0x0000; // clear flags    
    IFS5 = 0x0000; // clear flags
    IEC0 = 0x0000; // disable int
    IEC0bits.INT0IE = 0; // External Interrupt 0 Enable bit, 1 = Interrupt request enabled, 0 = Interrupt request not enabled
    IEC1 = 0x0000; // disable int
    IEC2 = 0x0000; // disable int
    IEC3 = 0x0000; // disable int
    IEC4 = 0x0000; // disable int
    IEC5 = 0x0000; // disable int
    IPC0 = 0x0000;
    //IPC0bits.INT0IP = 0b111; // int is priority 7 (highest)
    IPC4bits.CNIP = 7;//Input Change Notification Interrupt Priority bits
    IEC1bits.CNIE = 1; // change notification int
    IFS1bits.CNIF = 0; // clear the CN flag
  

    CNEN1 = 0x0000;
    CNEN2 = 0x0000;
    CNEN3 = 0x0000;
    CNEN4 = 0x0000;
    CNEN5 = 0x0000;
  
    //CNEN4bits.CN58IE = 1;// RE0, enable int Estimote beacon GPIO
    //CNEN4bits.CN59IE = 1;// RE1, enable int Estimote beacon GPIO
    
    //CNPD4bits.CN58PDE = 1;
    //CNPD4bits.CN59PDE = 1;
    //CNPU4bits.CN58PUE = 1; // pull up
    //CNPU4bits.CN59PUE = 1; // pull up
    
    

    
    
    
AD1CON1 = 0x0000;
AD1CON2 = 0x0000;
AD1CON3=0x0000;
AD1CHS = 0x0000;
AD1PCFGL = 0xFFFF;
AD1PCFGH = 0x0000;
AD1CSSL = 0x0000;

ODCE = 0b000000000000; // open drain off

TRISEbits.TRISE0 = 1; // input
TRISEbits.TRISE1 = 1; // input
TRISEbits.TRISE2 = 1; // input
TRISEbits.TRISE3 = 1; // input
TRISEbits.TRISE4 = 1; // input
TRISEbits.TRISE5 = 1; // input
TRISEbits.TRISE6 = 1; // input
TRISEbits.TRISE7 = 1; // input

LATEbits.LATE0 = 0; // clear register
LATEbits.LATE1 = 0; // clear register
LATEbits.LATE2 = 0; // clear register
LATEbits.LATE3 = 0; // clear register
LATEbits.LATE4 = 0; // clear register
LATEbits.LATE5 = 0; // clear register
LATEbits.LATE6 = 0; // clear register
LATEbits.LATE7 = 0; // clear register



/*
    ODCA = 0b000000000000;
    TRISAbits.TRISA0=0;
    TRISAbits.TRISA1=0;
    TRISAbits.TRISA2=0;
    TRISAbits.TRISA3=0;
    TRISAbits.TRISA4=0;
    TRISAbits.TRISA5=0;
    TRISAbits.TRISA6=0;
    TRISAbits.TRISA7=0;
    TRISAbits.TRISA9=0;
    TRISAbits.TRISA10=0;
    TRISAbits.TRISA14=0;
    TRISAbits.TRISA15=0;

    PORTAbits.RA0 = 0;
    PORTAbits.RA1 = 0;
    PORTAbits.RA2 = 0;
    PORTAbits.RA3 = 0;
    PORTAbits.RA4 = 0;
    PORTAbits.RA5 = 0;
    PORTAbits.RA6 = 0;
    PORTAbits.RA7 = 0;
    PORTAbits.RA9 = 0;
    PORTAbits.RA10 = 0;
    PORTAbits.RA14 = 0;
    PORTAbits.RA15 = 0;

    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
    LATAbits.LATA0=0;
     */
   // ODCB = 0b0000000000000000;
    TRISBbits.TRISB0 =0;
    TRISBbits.TRISB1 =0;
    TRISBbits.TRISB2=0;
    TRISBbits.TRISB3=0;
    TRISBbits.TRISB4=0;
    TRISBbits.TRISB5=0;
    TRISBbits.TRISB6=0;
    TRISBbits.TRISB7=0;
    TRISBbits.TRISB8=0;
    TRISBbits.TRISB10=0;
    TRISBbits.TRISB11=0;
    TRISBbits.TRISB12=0;
    TRISBbits.TRISB13=0;
    TRISBbits.TRISB14=0;
    TRISBbits.TRISB15=0;
    
    PORTBbits.RB0 = 0;
    PORTBbits.RB1 = 0;
    PORTBbits.RB2 = 0;
    PORTBbits.RB3 = 0;
    PORTBbits.RB4 = 0;
    PORTBbits.RB5 = 0;
    PORTBbits.RB6 = 0;
    PORTBbits.RB7 = 0;
    PORTBbits.RB9 = 0;
    PORTBbits.RB10 = 0;
    PORTBbits.RB14 = 0;
    PORTBbits.RB15 = 0;
    LATB = 0b0000000000000000;
        
        
        
        
// set port F all outputs
TRISFbits.TRISF0=0;
TRISFbits.TRISF1=0;
TRISFbits.TRISF2=0;
TRISFbits.TRISF3=0;
TRISFbits.TRISF4=0;
TRISFbits.TRISF5=0;
TRISFbits.TRISF6=1; // ASCK1/RPI45/INT0/CN72/RF6 set to input for INT0
/*
TRISFbits.TRISF7=0;
TRISFbits.TRISF8=0;
TRISFbits.TRISF12=0;
TRISFbits.TRISF13=0;
*/
PORTF = 0b00000000000; // clear port F

}
