![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# Accel5 Click

- **CIC Prefix**  : ACCEL5
- **Author**      : Katarina Perendic
- **Verison**     : 1.0.0
- **Date**        : maj 2018.

---

### Software Support

We provide a library for the Accel5 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2425/accel-5-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

The library initializes and defines the I2C bus driver and drivers that offer a choice for writing data in register.
The library includes function for read X/Y/Z axis data, read sensor time and detect tap on the chip and function for read temperature data.
The user also has the function for initializes chip and software reset.

Key functions :

- ``` int16_t accel5_getAxis(uint8_t axis) ``` - Functions for read axis data
- ``` uint8_t accel5_init(uint8_t mode, uint8_t range) ``` -  Functions for initialize the chip
- ``` void accel5_writeByte(uint8_t reg, uint8_t _data) ``` - Functions for write one byte in register

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes I2C module
- Application Initialization - Initializes Driver init and settings accelerometer data range and mode
- Application Task - (code snippet) - Reads the accel X / Y / Z axis data, every 500 ms.


```.c
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
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2425/accel-5-click) page.

Other mikroE Libraries used in the example:

- I2C
- UART

**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
### Architectures Supported

#### mikroC

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroBasic

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

#### mikroPascal

| STM | KIN | CEC | MSP | TIVA | PIC | PIC32 | DSPIC | AVR | FT90x |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| x | x | x | x | x | x | x | x | x | x |

---
---
