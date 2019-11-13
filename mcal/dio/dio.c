/*
 * dio.c
 *
 *  Created on: Jul 8, 2019
 *      Author: Muhammad.Elzeiny
 */

#include "../../utils/Bit_Math.h"
#include "../../utils/STD_Types.h"
/*TODO: include the header file that contains register definitions */
#include "../../mcal/mcu_hw.h"
#include "dio.h"

STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    STD_levelType ret;
    Dio_PortType PortId = ChannelId / 8;
    Dio_ChannelType ChannelPos = ChannelId % 8;

    /*TODO: Return the Input Channel Value */
    switch(PortId)
    {
    case Dio_Port_A :

        break;
    case Dio_Port_B :
        break;
    case Dio_Port_C :
        break;
    case Dio_Port_D :
        break;
    }
    return ret;

}
void Dio_WriteChannel(Dio_ChannelType ChannelId, STD_levelType Level)
{
    Dio_PortType PortId = ChannelId / 8;
    Dio_ChannelType ChannelPos = ChannelId % 8;

    volatile PORT_RegType* PORT_Addr;
    /*TODO: Write the input value in the corresponding ChannelId */
    switch (PortId)
    {
    case Dio_Port_A:
        PORT_Addr = &PORTA_REG;
        break;
    case Dio_Port_B:
        PORT_Addr = &PORTB_REG;
        break;
    case Dio_Port_C:
        PORT_Addr = &PORTC_REG;
        break;
    case Dio_Port_D:
        /*TODO: Assign PORTD address to PORT_Addr variable */
        PORT_Addr = &PORTD_REG;
        break;
    case Dio_Port_E:
        PORT_Addr = &PORTE_REG;
        break;
    case Dio_Port_F:
        PORT_Addr = &PORTF_REG;
        break;
    }


    switch(Level)
    {
    case STD_high :
        SET_BIT(PORT_Addr->GPIODATA,ChannelPos);
        break;
    case STD_low :
        CLR_BIT(PORT_Addr->GPIODATA,ChannelPos);

        break;
        }
}
uint8 Dio_ReadPort(Dio_PortType PortId )
{
    uint8 ret;

    /*TODO: Return the Port Value*/
    switch(PortId)
    {
    case Dio_Port_A :

        break;
    case Dio_Port_B :

        break;
    case Dio_Port_C :

        break;
    case Dio_Port_D :

        break;
    }
    return ret;
}
void Dio_WritePort( Dio_PortType PortId, uint8 value)
{
    /*TODO: Write the input value in the corresponding PortId */
    switch(PortId)
    {
    case Dio_Port_A :

        break;
    case Dio_Port_B :

        break;
    case Dio_Port_C :

        break;
    case Dio_Port_D :

        break;
    }
}
void Dio_FlipChannel( Dio_ChannelType ChannelId)
{
    /* TODO: toggle the corresponding ChannelId */

}
void Dio_FlipPort(Dio_PortType PortId)
{
    /*TODO: toggle the port value */
    switch(PortId)
    {
    case Dio_Port_A :

        break;
    case Dio_Port_B :

        break;
    case Dio_Port_C :

        break;
    case Dio_Port_D :

        break;
    }
}



