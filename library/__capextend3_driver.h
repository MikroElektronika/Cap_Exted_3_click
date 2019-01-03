/*
    __capextend3_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __capextend3_driver.h
@brief    CapExtend3 Driver
@mainpage CapExtend3 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   CAPEXTEND3
@brief      CapExtend3 Click Driver
@{

| Global Library Prefix | **CAPEXTEND3** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **Jan 2018.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _CAPEXTEND3_H_
#define _CAPEXTEND3_H_

/** 
 * @macro T_CAPEXTEND3_P
 * @brief Driver Abstract type 
 */
#define T_CAPEXTEND3_P    const uint8_t*

/** @defgroup CAPEXTEND3_COMPILE Compilation Config */              /** @{ */

//  #define   __CAPEXTEND3_DRV_SPI__                            /**<     @macro __CAPEXTEND3_DRV_SPI__  @brief SPI driver selector */
//  #define   __CAPEXTEND3_DRV_I2C__                            /**<     @macro __CAPEXTEND3_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __CAPEXTEND3_DRV_UART__                           /**<     @macro __CAPEXTEND3_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup CAPEXTEND3_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup CAPEXTEND3_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup CAPEXTEND3_INIT Driver Initialization */              /** @{ */

#ifdef   __CAPEXTEND3_DRV_SPI__
void capextend3_spiDriverInit(T_CAPEXTEND3_P gpioObj, T_CAPEXTEND3_P spiObj);
#endif
#ifdef   __CAPEXTEND3_DRV_I2C__
void capextend3_i2cDriverInit(T_CAPEXTEND3_P gpioObj, T_CAPEXTEND3_P i2cObj, uint8_t slave);
#endif
#ifdef   __CAPEXTEND3_DRV_UART__
void capextend3_uartDriverInit(T_CAPEXTEND3_P gpioObj, T_CAPEXTEND3_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void capextend3_gpioDriverInit(T_CAPEXTEND3_P gpioObj);
                                                                       /** @} */
/** @defgroup CAPEXTEND3_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Function reads state of AN pin
 *
 * @return  state of AN pin       ( 1 ) - button 0 is off ( 0 ) - button 0 is on
 */
uint8_t capextend3_Touch_0();
/**
 * @brief Function reads state of RST pin
 *
 * @return  state of RST pin       ( 1 ) - button 1 is off ( 0 ) - button 1 is on
 */
uint8_t capextend3_Touch_1();

/**
 * @brief Function reads state of CS pin
 *
 * @return  state of CS pin       ( 1 ) - button 2 is off ( 0 ) - button 2 is on
 */
uint8_t capextend3_Touch_2();

/**
 * @brief Function reads state of INT pin
 *
 * @return  state of INT pin       ( 1 ) - button 3 is off ( 0 ) - button 3 is on
 */
uint8_t capextend3_Touch_3();

/**
 * @brief Function reads state of PWM pin
 *
 * @return  state of PWM pin       ( 1 ) - button 4 is off ( 0 ) - button 4 is on
 */
uint8_t capextend3_Touch_4();






                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_CapExtend3_STM.c
    @example Click_CapExtend3_TIVA.c
    @example Click_CapExtend3_CEC.c
    @example Click_CapExtend3_KINETIS.c
    @example Click_CapExtend3_MSP.c
    @example Click_CapExtend3_PIC.c
    @example Click_CapExtend3_PIC32.c
    @example Click_CapExtend3_DSPIC.c
    @example Click_CapExtend3_AVR.c
    @example Click_CapExtend3_FT90x.c
    @example Click_CapExtend3_STM.mbas
    @example Click_CapExtend3_TIVA.mbas
    @example Click_CapExtend3_CEC.mbas
    @example Click_CapExtend3_KINETIS.mbas
    @example Click_CapExtend3_MSP.mbas
    @example Click_CapExtend3_PIC.mbas
    @example Click_CapExtend3_PIC32.mbas
    @example Click_CapExtend3_DSPIC.mbas
    @example Click_CapExtend3_AVR.mbas
    @example Click_CapExtend3_FT90x.mbas
    @example Click_CapExtend3_STM.mpas
    @example Click_CapExtend3_TIVA.mpas
    @example Click_CapExtend3_CEC.mpas
    @example Click_CapExtend3_KINETIS.mpas
    @example Click_CapExtend3_MSP.mpas
    @example Click_CapExtend3_PIC.mpas
    @example Click_CapExtend3_PIC32.mpas
    @example Click_CapExtend3_DSPIC.mpas
    @example Click_CapExtend3_AVR.mpas
    @example Click_CapExtend3_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __capextend3_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */