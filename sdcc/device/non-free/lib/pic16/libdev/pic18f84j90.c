/*
 * This definitions of the PIC18F84J90 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <proton7@freemail.hu> 2012.
 *
 * This file is generated automatically by the cinc2h.pl, 2012-10-01 20:26:58 UTC.
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * but explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic18f84j90.h>

//==============================================================================

__at(0x0F60) __sfr RCSTA2;
__at(0x0F60) volatile __RCSTA2bits_t RCSTA2bits;

__at(0x0F61) __sfr TXSTA2;
__at(0x0F61) volatile __TXSTA2bits_t TXSTA2bits;

__at(0x0F62) __sfr TXREG2;

__at(0x0F63) __sfr RCREG2;

__at(0x0F64) __sfr SPBRG2;

__at(0x0F65) __sfr CCP2CON;
__at(0x0F65) volatile __CCP2CONbits_t CCP2CONbits;

__at(0x0F66) __sfr CCPR2;

__at(0x0F66) __sfr CCPR2L;

__at(0x0F67) __sfr CCPR2H;

__at(0x0F68) __sfr CCP1CON;
__at(0x0F68) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x0F69) __sfr CCPR1;

__at(0x0F69) __sfr CCPR1L;

__at(0x0F6A) __sfr CCPR1H;

__at(0x0F6B) __sfr LCDDATA5;
__at(0x0F6B) volatile __LCDDATA5bits_t LCDDATA5bits;

__at(0x0F6C) __sfr LCDDATA6;
__at(0x0F6C) volatile __LCDDATA6bits_t LCDDATA6bits;

__at(0x0F6D) __sfr LCDDATA7;
__at(0x0F6D) volatile __LCDDATA7bits_t LCDDATA7bits;

__at(0x0F6E) __sfr LCDDATA8;
__at(0x0F6E) volatile __LCDDATA8bits_t LCDDATA8bits;

__at(0x0F6F) __sfr LCDDATA9;
__at(0x0F6F) volatile __LCDDATA9bits_t LCDDATA9bits;

__at(0x0F70) __sfr LCDDATA10;
__at(0x0F70) volatile __LCDDATA10bits_t LCDDATA10bits;

__at(0x0F71) __sfr LCDDATA11;
__at(0x0F71) volatile __LCDDATA11bits_t LCDDATA11bits;

__at(0x0F72) __sfr LCDDATA12;
__at(0x0F72) volatile __LCDDATA12bits_t LCDDATA12bits;

__at(0x0F73) __sfr LCDDATA13;
__at(0x0F73) volatile __LCDDATA13bits_t LCDDATA13bits;

__at(0x0F74) __sfr LCDDATA14;
__at(0x0F74) volatile __LCDDATA14bits_t LCDDATA14bits;

__at(0x0F75) __sfr LCDDATA15;
__at(0x0F75) volatile __LCDDATA15bits_t LCDDATA15bits;

__at(0x0F76) __sfr LCDDATA16;
__at(0x0F76) volatile __LCDDATA16bits_t LCDDATA16bits;

__at(0x0F77) __sfr LCDDATA17;
__at(0x0F77) volatile __LCDDATA17bits_t LCDDATA17bits;

__at(0x0F78) __sfr LCDDATA18;
__at(0x0F78) volatile __LCDDATA18bits_t LCDDATA18bits;

__at(0x0F79) __sfr LCDDATA19;
__at(0x0F79) volatile __LCDDATA19bits_t LCDDATA19bits;

__at(0x0F7A) __sfr LCDDATA20;
__at(0x0F7A) volatile __LCDDATA20bits_t LCDDATA20bits;

__at(0x0F7B) __sfr LCDDATA21;
__at(0x0F7B) volatile __LCDDATA21bits_t LCDDATA21bits;

__at(0x0F7C) __sfr LCDDATA22;
__at(0x0F7C) volatile __LCDDATA22bits_t LCDDATA22bits;

__at(0x0F7D) __sfr LCDDATA23;
__at(0x0F7D) volatile __LCDDATA23bits_t LCDDATA23bits;

__at(0x0F7E) __sfr BAUDCON1;
__at(0x0F7E) volatile __BAUDCON1bits_t BAUDCON1bits;

__at(0x0F7F) __sfr SPBRGH1;

__at(0x0F80) __sfr PORTA;
__at(0x0F80) volatile __PORTAbits_t PORTAbits;

__at(0x0F81) __sfr PORTB;
__at(0x0F81) volatile __PORTBbits_t PORTBbits;

__at(0x0F82) __sfr PORTC;
__at(0x0F82) volatile __PORTCbits_t PORTCbits;

__at(0x0F83) __sfr PORTD;
__at(0x0F83) volatile __PORTDbits_t PORTDbits;

__at(0x0F84) __sfr PORTE;
__at(0x0F84) volatile __PORTEbits_t PORTEbits;

__at(0x0F85) __sfr PORTF;
__at(0x0F85) volatile __PORTFbits_t PORTFbits;

__at(0x0F86) __sfr PORTG;
__at(0x0F86) volatile __PORTGbits_t PORTGbits;

__at(0x0F87) __sfr PORTH;
__at(0x0F87) volatile __PORTHbits_t PORTHbits;

__at(0x0F88) __sfr PORTJ;
__at(0x0F88) volatile __PORTJbits_t PORTJbits;

__at(0x0F89) __sfr LATA;
__at(0x0F89) volatile __LATAbits_t LATAbits;

__at(0x0F8A) __sfr LATB;
__at(0x0F8A) volatile __LATBbits_t LATBbits;

__at(0x0F8B) __sfr LATC;
__at(0x0F8B) volatile __LATCbits_t LATCbits;

__at(0x0F8C) __sfr LATD;
__at(0x0F8C) volatile __LATDbits_t LATDbits;

__at(0x0F8D) __sfr LATE;
__at(0x0F8D) volatile __LATEbits_t LATEbits;

__at(0x0F8E) __sfr LATF;
__at(0x0F8E) volatile __LATFbits_t LATFbits;

__at(0x0F8F) __sfr LATG;
__at(0x0F8F) volatile __LATGbits_t LATGbits;

__at(0x0F90) __sfr LATH;
__at(0x0F90) volatile __LATHbits_t LATHbits;

__at(0x0F91) __sfr LATJ;
__at(0x0F91) volatile __LATJbits_t LATJbits;

__at(0x0F92) __sfr DDRA;
__at(0x0F92) volatile __DDRAbits_t DDRAbits;

__at(0x0F92) __sfr TRISA;
__at(0x0F92) volatile __TRISAbits_t TRISAbits;

__at(0x0F93) __sfr DDRB;
__at(0x0F93) volatile __DDRBbits_t DDRBbits;

__at(0x0F93) __sfr TRISB;
__at(0x0F93) volatile __TRISBbits_t TRISBbits;

__at(0x0F94) __sfr DDRC;
__at(0x0F94) volatile __DDRCbits_t DDRCbits;

__at(0x0F94) __sfr TRISC;
__at(0x0F94) volatile __TRISCbits_t TRISCbits;

__at(0x0F95) __sfr DDRD;
__at(0x0F95) volatile __DDRDbits_t DDRDbits;

__at(0x0F95) __sfr TRISD;
__at(0x0F95) volatile __TRISDbits_t TRISDbits;

__at(0x0F96) __sfr DDRE;
__at(0x0F96) volatile __DDREbits_t DDREbits;

__at(0x0F96) __sfr TRISE;
__at(0x0F96) volatile __TRISEbits_t TRISEbits;

__at(0x0F97) __sfr DDRF;
__at(0x0F97) volatile __DDRFbits_t DDRFbits;

__at(0x0F97) __sfr TRISF;
__at(0x0F97) volatile __TRISFbits_t TRISFbits;

__at(0x0F98) __sfr DDRG;
__at(0x0F98) volatile __DDRGbits_t DDRGbits;

__at(0x0F98) __sfr TRISG;
__at(0x0F98) volatile __TRISGbits_t TRISGbits;

__at(0x0F99) __sfr DDRH;
__at(0x0F99) volatile __DDRHbits_t DDRHbits;

__at(0x0F99) __sfr TRISH;
__at(0x0F99) volatile __TRISHbits_t TRISHbits;

__at(0x0F9A) __sfr DDRJ;
__at(0x0F9A) volatile __DDRJbits_t DDRJbits;

__at(0x0F9A) __sfr TRISJ;
__at(0x0F9A) volatile __TRISJbits_t TRISJbits;

__at(0x0F9B) __sfr OSCTUNE;
__at(0x0F9B) volatile __OSCTUNEbits_t OSCTUNEbits;

__at(0x0F9D) __sfr PIE1;
__at(0x0F9D) volatile __PIE1bits_t PIE1bits;

__at(0x0F9E) __sfr PIR1;
__at(0x0F9E) volatile __PIR1bits_t PIR1bits;

__at(0x0F9F) __sfr IPR1;
__at(0x0F9F) volatile __IPR1bits_t IPR1bits;

__at(0x0FA0) __sfr PIE2;
__at(0x0FA0) volatile __PIE2bits_t PIE2bits;

__at(0x0FA1) __sfr PIR2;
__at(0x0FA1) volatile __PIR2bits_t PIR2bits;

__at(0x0FA2) __sfr IPR2;
__at(0x0FA2) volatile __IPR2bits_t IPR2bits;

__at(0x0FA3) __sfr PIE3;
__at(0x0FA3) volatile __PIE3bits_t PIE3bits;

__at(0x0FA4) __sfr PIR3;
__at(0x0FA4) volatile __PIR3bits_t PIR3bits;

__at(0x0FA5) __sfr IPR3;
__at(0x0FA5) volatile __IPR3bits_t IPR3bits;

__at(0x0FA6) __sfr EECON1;
__at(0x0FA6) volatile __EECON1bits_t EECON1bits;

__at(0x0FA7) __sfr EECON2;

__at(0x0FA8) __sfr LCDCON;
__at(0x0FA8) volatile __LCDCONbits_t LCDCONbits;

__at(0x0FA9) __sfr LCDSE0;
__at(0x0FA9) volatile __LCDSE0bits_t LCDSE0bits;

__at(0x0FAA) __sfr LCDPS;
__at(0x0FAA) volatile __LCDPSbits_t LCDPSbits;

__at(0x0FAB) __sfr RCSTA;
__at(0x0FAB) volatile __RCSTAbits_t RCSTAbits;

__at(0x0FAB) __sfr RCSTA1;
__at(0x0FAB) volatile __RCSTA1bits_t RCSTA1bits;

__at(0x0FAC) __sfr TXSTA;
__at(0x0FAC) volatile __TXSTAbits_t TXSTAbits;

__at(0x0FAC) __sfr TXSTA1;
__at(0x0FAC) volatile __TXSTA1bits_t TXSTA1bits;

__at(0x0FAD) __sfr TXREG;

__at(0x0FAD) __sfr TXREG1;

__at(0x0FAE) __sfr RCREG;

__at(0x0FAE) __sfr RCREG1;

__at(0x0FAF) __sfr SPBRG;

__at(0x0FAF) __sfr SPBRG1;

__at(0x0FB1) __sfr T3CON;
__at(0x0FB1) volatile __T3CONbits_t T3CONbits;

__at(0x0FB2) __sfr TMR3;

__at(0x0FB2) __sfr TMR3L;

__at(0x0FB3) __sfr TMR3H;

__at(0x0FB4) __sfr CMCON;
__at(0x0FB4) volatile __CMCONbits_t CMCONbits;

__at(0x0FB5) __sfr CVRCON;
__at(0x0FB5) volatile __CVRCONbits_t CVRCONbits;

__at(0x0FB6) __sfr LCDSE1;
__at(0x0FB6) volatile __LCDSE1bits_t LCDSE1bits;

__at(0x0FB7) __sfr LCDSE2;
__at(0x0FB7) volatile __LCDSE2bits_t LCDSE2bits;

__at(0x0FB8) __sfr LCDSE3;
__at(0x0FB8) volatile __LCDSE3bits_t LCDSE3bits;

__at(0x0FB9) __sfr LCDSE4;
__at(0x0FB9) volatile __LCDSE4bits_t LCDSE4bits;

__at(0x0FBA) __sfr LCDSE5;
__at(0x0FBA) volatile __LCDSE5bits_t LCDSE5bits;

__at(0x0FBB) __sfr LCDDATA0;
__at(0x0FBB) volatile __LCDDATA0bits_t LCDDATA0bits;

__at(0x0FBC) __sfr LCDDATA1;
__at(0x0FBC) volatile __LCDDATA1bits_t LCDDATA1bits;

__at(0x0FBD) __sfr LCDDATA2;
__at(0x0FBD) volatile __LCDDATA2bits_t LCDDATA2bits;

__at(0x0FBE) __sfr LCDDATA3;
__at(0x0FBE) volatile __LCDDATA3bits_t LCDDATA3bits;

__at(0x0FBF) __sfr LCDDATA4;
__at(0x0FBF) volatile __LCDDATA4bits_t LCDDATA4bits;

__at(0x0FC0) __sfr ADCON2;
__at(0x0FC0) volatile __ADCON2bits_t ADCON2bits;

__at(0x0FC1) __sfr ADCON1;
__at(0x0FC1) volatile __ADCON1bits_t ADCON1bits;

__at(0x0FC2) __sfr ADCON0;
__at(0x0FC2) volatile __ADCON0bits_t ADCON0bits;

__at(0x0FC3) __sfr ADRES;

__at(0x0FC3) __sfr ADRESL;

__at(0x0FC4) __sfr ADRESH;

__at(0x0FC5) __sfr SSP1CON2;
__at(0x0FC5) volatile __SSP1CON2bits_t SSP1CON2bits;

__at(0x0FC5) __sfr SSPCON2;
__at(0x0FC5) volatile __SSPCON2bits_t SSPCON2bits;

__at(0x0FC6) __sfr SSP1CON1;
__at(0x0FC6) volatile __SSP1CON1bits_t SSP1CON1bits;

__at(0x0FC6) __sfr SSPCON1;
__at(0x0FC6) volatile __SSPCON1bits_t SSPCON1bits;

__at(0x0FC7) __sfr SSP1STAT;
__at(0x0FC7) volatile __SSP1STATbits_t SSP1STATbits;

__at(0x0FC7) __sfr SSPSTAT;
__at(0x0FC7) volatile __SSPSTATbits_t SSPSTATbits;

__at(0x0FC8) __sfr SSP1ADD;

__at(0x0FC8) __sfr SSPADD;

__at(0x0FC9) __sfr SSP1BUF;

__at(0x0FC9) __sfr SSPBUF;

__at(0x0FCA) __sfr T2CON;
__at(0x0FCA) volatile __T2CONbits_t T2CONbits;

__at(0x0FCB) __sfr PR2;

__at(0x0FCC) __sfr TMR2;

__at(0x0FCD) __sfr T1CON;
__at(0x0FCD) volatile __T1CONbits_t T1CONbits;

__at(0x0FCE) __sfr TMR1;

__at(0x0FCE) __sfr TMR1L;

__at(0x0FCF) __sfr TMR1H;

__at(0x0FD0) __sfr RCON;
__at(0x0FD0) volatile __RCONbits_t RCONbits;

__at(0x0FD1) __sfr WDTCON;
__at(0x0FD1) volatile __WDTCONbits_t WDTCONbits;

__at(0x0FD2) __sfr LCDREG;
__at(0x0FD2) volatile __LCDREGbits_t LCDREGbits;

__at(0x0FD3) __sfr OSCCON;
__at(0x0FD3) volatile __OSCCONbits_t OSCCONbits;

__at(0x0FD5) __sfr T0CON;
__at(0x0FD5) volatile __T0CONbits_t T0CONbits;

__at(0x0FD6) __sfr TMR0;

__at(0x0FD6) __sfr TMR0L;

__at(0x0FD7) __sfr TMR0H;

__at(0x0FD8) __sfr STATUS;
__at(0x0FD8) volatile __STATUSbits_t STATUSbits;

__at(0x0FD9) __sfr FSR2L;

__at(0x0FDA) __sfr FSR2H;

__at(0x0FDB) __sfr PLUSW2;

__at(0x0FDC) __sfr PREINC2;

__at(0x0FDD) __sfr POSTDEC2;

__at(0x0FDE) __sfr POSTINC2;

__at(0x0FDF) __sfr INDF2;

__at(0x0FE0) __sfr BSR;

__at(0x0FE1) __sfr FSR1L;

__at(0x0FE2) __sfr FSR1H;

__at(0x0FE3) __sfr PLUSW1;

__at(0x0FE4) __sfr PREINC1;

__at(0x0FE5) __sfr POSTDEC1;

__at(0x0FE6) __sfr POSTINC1;

__at(0x0FE7) __sfr INDF1;

__at(0x0FE8) __sfr WREG;

__at(0x0FE9) __sfr FSR0L;

__at(0x0FEA) __sfr FSR0H;

__at(0x0FEB) __sfr PLUSW0;

__at(0x0FEC) __sfr PREINC0;

__at(0x0FED) __sfr POSTDEC0;

__at(0x0FEE) __sfr POSTINC0;

__at(0x0FEF) __sfr INDF0;

__at(0x0FF0) __sfr INTCON3;
__at(0x0FF0) volatile __INTCON3bits_t INTCON3bits;

__at(0x0FF1) __sfr INTCON2;
__at(0x0FF1) volatile __INTCON2bits_t INTCON2bits;

__at(0x0FF2) __sfr INTCON;
__at(0x0FF2) volatile __INTCONbits_t INTCONbits;

__at(0x0FF3) __sfr PROD;

__at(0x0FF3) __sfr PRODL;

__at(0x0FF4) __sfr PRODH;

__at(0x0FF5) __sfr TABLAT;

__at(0x0FF6) __sfr TBLPTR;

__at(0x0FF6) __sfr TBLPTRL;

__at(0x0FF7) __sfr TBLPTRH;

__at(0x0FF8) __sfr TBLPTRU;

__at(0x0FF9) __sfr PC;

__at(0x0FF9) __sfr PCL;

__at(0x0FFA) __sfr PCLATH;

__at(0x0FFB) __sfr PCLATU;

__at(0x0FFC) __sfr STKPTR;
__at(0x0FFC) volatile __STKPTRbits_t STKPTRbits;

__at(0x0FFD) __sfr TOS;

__at(0x0FFD) __sfr TOSL;

__at(0x0FFE) __sfr TOSH;

__at(0x0FFF) __sfr TOSU;
