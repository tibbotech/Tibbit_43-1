 /*
 * Project: Tibbit #43-1
 * File:    main.c
 * Author:  Dmitry Tarasov
 * License: GPLv3
 * Copyright (c) 2021. Tibbo Technology Inc. 
 */

#include "ad7323.h"
#include "command.h"
#include "operate.h"
#include "mcc_generated_files/mcc.h"

void TMR1_Interrupt(void)
{
    if (!timerDivider) {
        timerDivider = timerDividerReloader;
        operateTMR();
    } else {
        timerDivider--;
    }
}

/*
                         Main application
 */
void main(void)
{
    // initialize the device
    SYSTEM_Initialize();

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Set TMR1
    TMR1_SetInterruptHandler(TMR1_Interrupt);

    operateInit();
    
    DEBUG_1_SetDigitalOutput();
    DEBUG_2_SetDigitalOutput();
    
    while (1)
    {
        if (operateGetMode() == OPERATE_DATA) {
            operateTMRMathSend();
        }
        
        // USART receive command operate
        cmdReceiveOperate();
        
        EUSART_TransmitOperate();
        
        // WatchDog clear
        CLRWDT();
    }
}
/**
 End of File
*/
