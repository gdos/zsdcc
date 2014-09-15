/*
 * This definitions of the PIC16C765 MCU.
 *
 * This file is part of the GNU PIC library for SDCC, originally
 * created by Molnar Karoly <molnarkaroly@users.sf.net> 2014.
 *
 * This file is generated automatically by the cinc2h.pl, 2014-09-15 14:38:43 UTC.
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

#include <pic16c765.h>

//==============================================================================

__at(0x0000) __sfr INDF;

__at(0x0001) __sfr TMR0;

__at(0x0002) __sfr PCL;

__at(0x0003) __sfr STATUS;
__at(0x0003) volatile __STATUSbits_t STATUSbits;

__at(0x0004) __sfr FSR;

__at(0x0005) __sfr PORTA;
__at(0x0005) volatile __PORTAbits_t PORTAbits;

__at(0x0006) __sfr PORTB;
__at(0x0006) volatile __PORTBbits_t PORTBbits;

__at(0x0007) __sfr PORTC;
__at(0x0007) volatile __PORTCbits_t PORTCbits;

__at(0x0008) __sfr PORTD;
__at(0x0008) volatile __PORTDbits_t PORTDbits;

__at(0x0009) __sfr PORTE;
__at(0x0009) volatile __PORTEbits_t PORTEbits;

__at(0x000A) __sfr PCLATH;

__at(0x000B) __sfr INTCON;
__at(0x000B) volatile __INTCONbits_t INTCONbits;

__at(0x000C) __sfr PIR1;
__at(0x000C) volatile __PIR1bits_t PIR1bits;

__at(0x000D) __sfr PIR2;
__at(0x000D) volatile __PIR2bits_t PIR2bits;

__at(0x000E) __sfr TMR1;

__at(0x000E) __sfr TMR1L;

__at(0x000F) __sfr TMR1H;

__at(0x0010) __sfr T1CON;
__at(0x0010) volatile __T1CONbits_t T1CONbits;

__at(0x0011) __sfr TMR2;

__at(0x0012) __sfr T2CON;
__at(0x0012) volatile __T2CONbits_t T2CONbits;

__at(0x0015) __sfr CCPR1;

__at(0x0015) __sfr CCPR1L;

__at(0x0016) __sfr CCPR1H;

__at(0x0017) __sfr CCP1CON;
__at(0x0017) volatile __CCP1CONbits_t CCP1CONbits;

__at(0x0018) __sfr RCSTA;
__at(0x0018) volatile __RCSTAbits_t RCSTAbits;

__at(0x0019) __sfr TXREG;

__at(0x001A) __sfr RCREG;

__at(0x001B) __sfr CCPR2;

__at(0x001B) __sfr CCPR2L;

__at(0x001C) __sfr CCPR2H;

__at(0x001D) __sfr CCP2CON;
__at(0x001D) volatile __CCP2CONbits_t CCP2CONbits;

__at(0x001E) __sfr ADRES;

__at(0x001F) __sfr ADCON0;
__at(0x001F) volatile __ADCON0bits_t ADCON0bits;

__at(0x0081) __sfr OPTION_REG;
__at(0x0081) volatile __OPTION_REGbits_t OPTION_REGbits;

__at(0x0085) __sfr TRISA;
__at(0x0085) volatile __TRISAbits_t TRISAbits;

__at(0x0086) __sfr TRISB;
__at(0x0086) volatile __TRISBbits_t TRISBbits;

__at(0x0087) __sfr TRISC;
__at(0x0087) volatile __TRISCbits_t TRISCbits;

__at(0x0088) __sfr TRISD;
__at(0x0088) volatile __TRISDbits_t TRISDbits;

__at(0x0089) __sfr TRISE;
__at(0x0089) volatile __TRISEbits_t TRISEbits;

__at(0x008C) __sfr PIE1;
__at(0x008C) volatile __PIE1bits_t PIE1bits;

__at(0x008D) __sfr PIE2;
__at(0x008D) volatile __PIE2bits_t PIE2bits;

__at(0x008E) __sfr PCON;
__at(0x008E) volatile __PCONbits_t PCONbits;

__at(0x0092) __sfr PR2;

__at(0x0098) __sfr TXSTA;
__at(0x0098) volatile __TXSTAbits_t TXSTAbits;

__at(0x0099) __sfr SPBRG;

__at(0x009F) __sfr ADCON1;
__at(0x009F) volatile __ADCON1bits_t ADCON1bits;

__at(0x0190) __sfr UIR;
__at(0x0190) volatile __UIRbits_t UIRbits;

__at(0x0191) __sfr UIE;
__at(0x0191) volatile __UIEbits_t UIEbits;

__at(0x0192) __sfr UEIR;
__at(0x0192) volatile __UEIRbits_t UEIRbits;

__at(0x0193) __sfr UEIE;
__at(0x0193) volatile __UEIEbits_t UEIEbits;

__at(0x0194) __sfr USTAT;
__at(0x0194) volatile __USTATbits_t USTATbits;

__at(0x0195) __sfr UCTRL;
__at(0x0195) volatile __UCTRLbits_t UCTRLbits;

__at(0x0196) __sfr UADDR;

__at(0x0197) __sfr USWSTAT;

__at(0x0198) __sfr UEP0;
__at(0x0198) volatile __UEP0bits_t UEP0bits;

__at(0x0199) __sfr UEP1;
__at(0x0199) volatile __UEP1bits_t UEP1bits;

__at(0x019A) __sfr UEP2;
__at(0x019A) volatile __UEP2bits_t UEP2bits;

__at(0x01A0) __sfr BD0OST;
__at(0x01A0) volatile __BD0OSTbits_t BD0OSTbits;

__at(0x01A1) __sfr BD0OBC;
__at(0x01A1) volatile __BD0OBCbits_t BD0OBCbits;

__at(0x01A2) __sfr BD0OAL;

__at(0x01A4) __sfr BD0IST;
__at(0x01A4) volatile __BD0ISTbits_t BD0ISTbits;

__at(0x01A5) __sfr BD0IBC;
__at(0x01A5) volatile __BD0IBCbits_t BD0IBCbits;

__at(0x01A6) __sfr BD0IAL;

__at(0x01A8) __sfr BD1OST;
__at(0x01A8) volatile __BD1OSTbits_t BD1OSTbits;

__at(0x01A9) __sfr BD1OBC;
__at(0x01A9) volatile __BD1OBCbits_t BD1OBCbits;

__at(0x01AA) __sfr BD1OAL;

__at(0x01AC) __sfr BD1IST;
__at(0x01AC) volatile __BD1ISTbits_t BD1ISTbits;

__at(0x01AD) __sfr BD1IBC;
__at(0x01AD) volatile __BD1IBCbits_t BD1IBCbits;

__at(0x01AE) __sfr BD1IAL;

__at(0x01B0) __sfr BD2OST;
__at(0x01B0) volatile __BD2OSTbits_t BD2OSTbits;

__at(0x01B1) __sfr BD2OBC;
__at(0x01B1) volatile __BD2OBCbits_t BD2OBCbits;

__at(0x01B2) __sfr BD2OAL;

__at(0x01B4) __sfr BD2IST;
__at(0x01B4) volatile __BD2ISTbits_t BD2ISTbits;

__at(0x01B5) __sfr BD2IBC;
__at(0x01B5) volatile __BD2IBCbits_t BD2IBCbits;

__at(0x01B6) __sfr BD2IAL;
