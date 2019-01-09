![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# CapExtend3 Click

- **CIC Prefix**  : CAPEXTEND3
- **Author**      : MikroE Team
- **Verison**     : 1.0.0
- **Date**        : Jan 2018

---

### Software Support

We provide a library for the CapExtend3 Click on our [LibStock](https://libstock.mikroe.com/projects/view/2315/cap-extend-3-click) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**

Initializes GPIO driver and click driver functions witch detect touch on determined pins.
Fore more details check documentation.

Key functions :

- ``` uint8_t capextend3_Touch_0() ``` - Function reads state of AN pin.

**Examples Description**

The application is composed of three sections :

- System Initialization - Initializes AN, RST, CS, PWM, INT pin as INPUT.
- Application Initialization -  Initializes GPIO Driver.
- Application Task - (code snippet) - In depending witch button will be touched the USB UART
  will show number of button witch is touched.


```.c
void applicationTask()
{
   touch_1 = capextend3_Touch_1();
   touch_0 = capextend3_Touch_0();
   touch_3 = capextend3_Touch_3();
   touch_4 = capextend3_Touch_4();

   if( touch_0 == 0 )
      mikrobus_logWrite("Touch 0 ",_LOG_LINE);

   if( touch_1 == 0 )
      mikrobus_logWrite("Touch 1 ",_LOG_LINE);

   if( touch_3 == 0 )
      mikrobus_logWrite("Touch 3 ",_LOG_LINE);

   if( touch_4 == 0 )
      mikrobus_logWrite("Touch 4 ",_LOG_LINE);

   Delay_ms( 100 );
}
```

The full application code, and ready to use projects can be found on our 
[LibStock](https://libstock.mikroe.com/projects/view/2315/cap-extend-3-click) page.

Other mikroE Libraries used in the example:

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
---
