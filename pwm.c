#include "p24FJ256GA106.h"
#include "sysint.h"
#define FCY 16000000UL
#include <libpic30.h>

    int onTnew = 0; // storage for Ton new value
    int onTold= 0;// storage for Ton old value
    
void pwmint(void) {
    int timerVal = 0xFFFF;
    int dutyCycle = 0x7FFF;
    int periodVal = 0x7FFF;

    // Unlock Registers
    __builtin_write_OSCCONL(OSCCON & 0xBF);
    // Configure Input Functions (Table 9-1))
    // UART Settings
    // Assign U1RX To Pin RP11, RD0
    RPINR18bits.U1RXR = 11;
    // Assign U1CTS To Pin RP12, RD11
    RPINR18bits.U1CTSR = 12;
    // Configure Output Functions (Table 9-2)
    // Assign U1TX To Pin RP2, RD8
    RPOR1bits.RP2R = 3;
    // Assign U1RTS To Pin RP3, RD10
    RPOR1bits.RP3R = 4;

    // PWM 1 Output settings OC1 RP11 RD0
    RPOR5bits.RP11R = 18;

    // PWM 1 Output settings OC1 RP13 RB2
    //RPOR6bits.RP13R=18;

    // PWM 2 Output settings OC2 RP24 RD1
    RPOR12bits.RP24R = 19;

    // PWM 3 Output settings OC3 RP23 RD2
    RPOR11bits.RP23R = 20;

    // PWM 4 Output settings OC4 RP22 RD3
    RPOR11bits.RP22R = 21;

    // PWM 5 Output settings OC5 RP25 RD4
    RPOR12bits.RP25R = 22;


    // Lock Registers
    __builtin_write_OSCCONL(OSCCON | 0x40);

    //setup timer
    T2CONbits.TON = 0; // disable
    T2CONbits.TCS = 0; //Internal clock (FOSC/2)
    T2CONbits.TGATE = 0; //Gated time accumulation disabled
    T2CONbits.T32 = 0; //Timerx and Timery act as two 16-bit timers   
    T2CONbits.TSIDL = 0; //Continue module operation in Idle mode
    T2CONbits.TON = 1; // enable
    PR2 = 0x2FFF; // freq = 1.3 khz
    _T2IF = 0; // clear int flag
    _T2IE = 0; // disable int
    // setup the PWM
    OC1CON1 = 0; // clear
    OC1CON2 = 0; // clear
    OC1CON1bits.OCTSEL = 0b000; // 000 = Timer2
    OC1CON1bits.OCM = 0b110; // 110 = Edge-Aligned PWM mode on OCx
    OC1CON2bits.OCINV = 1; // Invert the PWM signal because of the NPN switch before driver
    OC1CON2bits.OC32 = 0;//Cascade module operation disabled
    OC1CON2bits.SYNCSEL = 0b01100;//01100 = Timer2
    OC1CON2bits.OCTRIG = 0;//Synchronize OCx with source designated by SYNCSELx bits
    // init PWM
    OC1R = 0; //
    OC1RS = 0; //
    /*
    OC2CON1=0b0000000000000110;// bit 12-10 timer 2, 000
    OC2CON2=0b0000000000000000;
    OC2CON2bits.OCINV = 1;
    //setup timer
    T2CONbits.TON = 1; // enable, prescale 1:1, internal clock
    T2CONbits.T32 = 0;
    PR2 = timerVal; // period for timer
    _T2IF = 0; // clear int flag
    _T2IE = 0;// disable int
    // init PWM
    OC2R =  dutyCycle; // initial PWM duty cycle
    OC2RS = periodVal;

    OC3CON1=0b0000010000000110;// bit 12-10 timer 3, 001
    OC3CON2=0b0000000000000000;
    OC3CON2bits.OCINV = 1;
    //setup timer
    T3CONbits.TON = 1; // enable, prescale 1:1, internal clock
    PR3 = 200-1; // period for timer
    _T3IF = 0; // clear int flag
    _T3IE = 0;// disable int
    // init PWM
    OC3R =  dutyCycle; // initial PWM duty cycle
    OC3RS = periodVal;

    OC4CON1=0b0000100000000110;// bit 12-10 timer 4, 010
    OC4CON2=0b0000000000000000;
    OC4CON2bits.OCINV = 1;
    //setup timer
    T4CONbits.TON = 1; // enable, prescale 1:1, internal clock
    T4CONbits.T32 = 0;
    PR4 = timerVal; // period for timer
    _T4IF = 0; // clear int flag
    _T4IE = 0;// disable int
    // init PWM
    OC4R =  dutyCycle; // initial PWM duty cycle
    OC4RS = periodVal;

    OC5CON1=0b0000110000000110;// bit 12-10 time 5, 011
    OC5CON2=0b0000000000000000;
    //setup timer
    T5CON = 0x8000; // enable, prescale 1:1, internal clock
    PR5 = timerVal; // period for timer
    _T5IF = 0; // clear int flag
    _T5IE = 0;// disable int
    // init PWM
    OC5R = dutyCycle; // initial PWM duty cycle
    OC5RS = periodVal;
     */
}

void pwm1Val(int tOn, int tOff) {
    // 0x2FFF = 12287d
    
    if (tOn == 0) {
        PORTBbits.RB3 = 0;
        OC1R = OC1RS = 0; // 
    }// 

    if (tOn == 1) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 0; // 0%
    }// 

    if (tOn == 2) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 1024*3; //25%
    }// 

    if (tOn == 3) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 1024*5; //41%
    }// 

    if (tOn == 4) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 1024*6; //50%
    }// 

    if (tOn == 5) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 1024*7; //58%
    }// 
    
        if (tOn == 6) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 1024*8; //67%
    }// 

    if (tOn == 7) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 1024*9; //75%
    }// 

    if (tOn == 8) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 1024*9; //
    }// 

    if (tOn == 9) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 1024*9; //
    }// 

    if (tOn == 10) {
        PORTBbits.RB3 = 1;
        OC1R = OC1RS = 12287; //100%
    }// 

    // first time on start up


}//void pwm1Val(int pwm1Value)