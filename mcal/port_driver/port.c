
/*
 * port.c
 *
 *  Created on: Jul 8, 2019
 *      Author: Mustafa Sayed
 */
#define MAX_NUM_OF_CH_IN_PORT       8

#include "../../utils/STD_Types.h"
#include "../../utils/Bit_Math.h"
#include "../../config/port_cfg.h"
#include "../mcu_hw.h"
#include "port_types.h"
#include "port.h"

extern Port_CfgType PortCfgArr[PORT_NUM_OF_ACTIVATED_CH];

void PORT_init(void)
{
    uint8 i;
    Port_IdType PortId;
    Port_ChIdType ChId;
    volatile PORT_RegType* PORT_Addr;

    for (i = 0; i < PORT_NUM_OF_ACTIVATED_CH; ++i)
    {
        PortId = i/ MAX_NUM_OF_CH_IN_PORT;
        ChId = i % MAX_NUM_OF_CH_IN_PORT;

        switch (PortId)
        {
        case Port_Id_A:
            PORT_Addr = &PORTA_REG;
            break;
        case Port_Id_B:
            PORT_Addr = &PORTB_REG;
            break;
        case Port_Id_C:
            PORT_Addr = &PORTC_REG;
            break;
        case Port_Id_D:
            /*TODO: Assign PORTD address to PORT_Addr variable */
            PORT_Addr = &PORTD_REG;
            break;
        case Port_Id_E:
            PORT_Addr = &PORTE_REG;
            break;
        case Port_Id_F:
            PORT_Addr = &PORTF_REG;
            break;
        }

        /*TODO: set channel direction */
        if(PortCfgArr[i].Dir == port_Dir_Input)
        {
            PORT_Addr->GPIODIR &=~(1<< ChId);
        }else if(PortCfgArr[i].Dir == port_Dir_Output)
        {
            PORT_Addr->GPIODIR |=(1<<ChId);
        }
        else
        {

        }

        /*TODO: set channel mode */
        switch(PortCfgArr[i].Mode)
        {
        case Port_Mode_DIO :
            PORT_Addr ->GPIOAFSEL &=~(1<<ChId);
            break;
        case Port_Mode_UART_Tx :
            break;
        case Port_Mode_UART_Rx :
            break;
        case Port_Mode_SSI_Clk :
            break;
        case  Port_Mode_SSI_Fss :
            break;
        case Port_Mode_SSI_Rx :
            break;
        case Port_Mode_SSI_Tx :
            break;
        case Port_Mode_I2C_Scl:
            break;
        case Port_Mode_I2C_Sda :
            break;
        case Port_Mode_PWM :
            break;
        case Port_Mode_CCP :
            break;
        case Port_Mode_AIN  :
            break;
        case Port_Mode_CAN_Rx :
            break;
        case Port_Mode_CAN_Tx :
            break;
        }

        /*TODO: set Internal Attachment configuration */
       switch(PortCfgArr[i].AttachedRes)
        {
        case  Port_InternalAttach_NA :
            break;
        case Port_InternalAttach_PullUpRes:
            PORT_Addr ->GPIOPUR|=1<<ChId;
            break;
        case Port_InternalAttach_PullDownRes :
            PORT_Addr ->GPIOPDR |=1<<ChId;
            break;
        case Port_InternalAttach_OpenDrain :
            PORT_Addr ->GPIOODR |=1<<ChId;
            break;
        }
        /*TODO: set Interrupt configuration */
        if(PortCfgArr[i].Interrupt == Port_IntDisable)
        {
            CLR_BIT(PORT_Addr->GPIOIM, ChId);
        }
        else
        {

        }

        /*TODO: set current strength configuration */
        switch(PortCfgArr[i].CurrentDrive)
        {
        case Port_CurrDrive_2mA:
            PORT_Addr ->GPIODR2R |=(1<<ChId);
            break;
        case Port_CurrDrive_4mA:
            PORT_Addr ->GPIODR4R |=(1<<ChId);
                   break;
        case Port_CurrDrive_8mA:
            PORT_Addr ->GPIODR8R |=(1<<ChId);
                   break;

        }

        /*Check if analog functionality is required*/
        if(PortCfgArr[i].Mode != Port_Mode_AIN )
        {
            /*TODO: enable digital and disable ADC  */
            SET_BIT(PORT_Addr->GPIODEN, ChId);
            CLR_BIT(PORT_Addr->GPIOAMSEL, ChId);
        }
        else
        {
            /*TODO: disable digital and enable ADC */
            CLR_BIT(PORT_Addr->GPIODEN, ChId);
            SET_BIT(PORT_Addr->GPIOAMSEL, ChId);

        }
    }
}
