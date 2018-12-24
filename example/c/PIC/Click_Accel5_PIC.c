/*
Example for Accel5 Click

    Date          : maj 2018.
    Author        : Katarina Perendic

Test configuration PIC :
    
    MCU             : P18F87K22
    Dev. Board      : EasyPIC PRO v7
    PIC Compiler ver : v7.2.0.0

---

Description :

The application is composed of three sections :

- System Initialization - Initializes I2C module
- Application Initialization - Initializes Driver init and settings accelerometer data range and mode
- Application Task - (code snippet) - Reads the accel X / Y / Z axis data, every 500 ms.

*/

#include "Click_Accel5_types.h"
#include "Click_Accel5_config.h"

int16_t X_axisData;
int16_t Y_axisData;
int16_t Z_axisData;
char demoText[50] = {0};

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_INPUT );
    mikrobus_i2cInit( _MIKROBUS1, &_ACCEL5_I2C_CFG[0] );
    mikrobus_logInit( _LOG_USBUART, 9600 );
    mikrobus_logWrite(" --- System Init --- ", _LOG_LINE );
    Delay_ms( 100 );
}

void applicationInit()
{
    accel5_i2cDriverInit( (T_ACCEL5_P)&_MIKROBUS1_GPIO, (T_ACCEL5_P)&_MIKROBUS1_I2C, 0x15 );
    
    accel5_softReset();
    accel5_init(_ACCEL5_CFG_0_NORMAL_MODE, _ACCEL5_CFG_1_ACC_RANGE_4g);
    Delay_100ms();
}

void applicationTask()
{
    X_axisData = accel5_getAxis( _ACCEL5_X_AXIS );
    mikrobus_logWrite(" X axis : ", _LOG_TEXT );
    IntToStr(X_axisData, demoText);
    mikrobus_logWrite(demoText, _LOG_LINE );

    Y_axisData = accel5_getAxis( _ACCEL5_Y_AXIS );
    mikrobus_logWrite(" Y axis : ", _LOG_TEXT );
    IntToStr(Y_axisData, demoText);
    mikrobus_logWrite(demoText, _LOG_LINE );

    Z_axisData = accel5_getAxis( _ACCEL5_Z_AXIS );
    mikrobus_logWrite(" Z axis : ", _LOG_TEXT );
    IntToStr(Z_axisData, demoText);
    mikrobus_logWrite(demoText, _LOG_LINE );
    
    mikrobus_logWrite( "  ", _LOG_LINE );
    Delay_ms( 500 );
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}