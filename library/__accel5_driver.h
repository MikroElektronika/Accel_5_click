/*
    __accel5_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __accel5_driver.h
@brief    Accel5 Driver
@mainpage Accel5 Click
@{

@image html libstock_fb_view.jpg

@}

@defgroup   ACCEL5
@brief      Accel5 Click Driver
@{

| Global Library Prefix | **ACCEL5** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **maj 2018.**      |
| Developer             | **Katarina Perendic**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _ACCEL5_H_
#define _ACCEL5_H_

/** 
 * @macro T_ACCEL5_P
 * @brief Driver Abstract type 
 */
#define T_ACCEL5_P    const uint8_t*

/** @defgroup ACCEL5_COMPILE Compilation Config */              /** @{ */

//  #define   __ACCEL5_DRV_SPI__                            /**<     @macro __ACCEL5_DRV_SPI__  @brief SPI driver selector */
   #define   __ACCEL5_DRV_I2C__                            /**<     @macro __ACCEL5_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __ACCEL5_DRV_UART__                           /**<     @macro __ACCEL5_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup ACCEL5_VAR Variables */                           /** @{ */

extern const uint8_t _ACCEL5_CHIP_ID;

/* Register */
extern const uint8_t _ACCEL5_REG_CHIP_ID            ;
extern const uint8_t _ACCEL5_REG_ERR_REG            ;
extern const uint8_t _ACCEL5_REG_STATUS             ;
extern const uint8_t _ACCEL5_REG_ACC_X_LSB          ;
extern const uint8_t _ACCEL5_REG_ACC_X_MSB          ;
extern const uint8_t _ACCEL5_REG_ACC_Y_LSB          ;
extern const uint8_t _ACCEL5_REG_ACC_Y_MSB          ;
extern const uint8_t _ACCEL5_REG_ACC_Z_LSB          ;
extern const uint8_t _ACCEL5_REG_ACC_Z_MSB          ;
extern const uint8_t _ACCEL5_REG_SENSOR_TIME_0      ;
extern const uint8_t _ACCEL5_REG_SENSOR_TIME_1      ;
extern const uint8_t _ACCEL5_REG_SENSOR_TIME_2      ;
extern const uint8_t _ACCEL5_REG_EVENT              ;
extern const uint8_t _ACCEL5_REG_INT_STATUS_0       ;
extern const uint8_t _ACCEL5_REG_INT_STATUS_1       ;
extern const uint8_t _ACCEL5_REG_INT_STATUS_2       ;
extern const uint8_t _ACCEL5_REG_TEMPERATURE        ;
extern const uint8_t _ACCEL5_REG_FIFO_LENGTH_0      ;
extern const uint8_t _ACCEL5_REG_FIFO_LENGTH_1      ;
extern const uint8_t _ACCEL5_REG_FIFO_DATA          ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_0         ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_1         ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_2         ;
extern const uint8_t _ACCEL5_REG_STEP_STATUS        ;
extern const uint8_t _ACCEL5_REG_ACC_CONGIG_0       ;
extern const uint8_t _ACCEL5_REG_ACC_CONGIG_1       ;
extern const uint8_t _ACCEL5_REG_ACC_CONGIG_2       ;
extern const uint8_t _ACCEL5_REG_INT_CONFIG_0       ;
extern const uint8_t _ACCEL5_REG_INT_CONFIG_1       ;
extern const uint8_t _ACCEL5_REG_INT1_MAP           ;
extern const uint8_t _ACCEL5_REG_INT2_MAP           ;
extern const uint8_t _ACCEL5_REG_INT12_MAP          ;
extern const uint8_t _ACCEL5_REG_INT12_IO_CTRL      ;
extern const uint8_t _ACCEL5_REG_FIFO_CONFIG_0      ;
extern const uint8_t _ACCEL5_REG_FIFO_CONFIG_1      ;
extern const uint8_t _ACCEL5_REG_FIFO_CONFIG_2      ;
extern const uint8_t _ACCEL5_REG_FIFO_PWR_CONFIG    ;
extern const uint8_t _ACCEL5_REG_AUTO_LOW_POW_0     ;
extern const uint8_t _ACCEL5_REG_AUTO_LOW_POW_1     ;
extern const uint8_t _ACCEL5_REG_AUTO_WAKEUP_0      ;
extern const uint8_t _ACCEL5_REG_AUTO_WAKEUP_1      ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_0    ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_1    ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_2    ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_3    ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_4    ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_0  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_1  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_2  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_3  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_4  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_5  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_6  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_7  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_8  ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_9  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_0  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_1  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_2  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_3  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_31 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_4  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_5  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_6  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_7  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_8  ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_9  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_0  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_1  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_2  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_3  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_31 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_4  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_5  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_6  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_7  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_8  ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_9  ;
extern const uint8_t _ACCEL5_REG_ACTCH_CONFIG_0     ;
extern const uint8_t _ACCEL5_REG_ACTCH_CONFIG_1     ;
extern const uint8_t _ACCEL5_REG_TAP_CONFIG_0       ;
extern const uint8_t _ACCEL5_REG_TAP_CONFIG_1       ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_0  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_1  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_2  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_3  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_4  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_5  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_6  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_7  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_8  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_9  ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_10 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_11 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_12 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_13 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_14 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_15 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_16 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_17 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_18 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_19 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_20 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_21 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_22 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_23 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_24 ;
extern const uint8_t _ACCEL5_REG_IF_CONFIG          ;
extern const uint8_t _ACCEL5_REG_SELF_TEST          ;
extern const uint8_t _ACCEL5_REG_CMD                ;

/* Error status register */
extern const uint8_t _ACCEL5_ERROR_CMD;

/* Status register */
extern const uint8_t _ACCEL5_STATUS_DATA_RDY_START           ;
extern const uint8_t _ACCEL5_STATUS_RDY_CMD                  ;
extern const uint8_t _ACCEL5_STATUS_NORMAL_MODE              ;
extern const uint8_t _ACCEL5_STATUS_LOW_POWER_MODE           ;
extern const uint8_t _ACCEL5_STATUS_SLEEP_MODE               ;
extern const uint8_t _ACCEL5_STATUS_INT_ACTIVE_TRIGGERED     ;
extern const uint8_t _ACCEL5_STATUS_INT_ACTIVE_NOT_TRIGGERED ;

/* Sensor status flags (EVENT)*/
extern const uint8_t _ACCEL5_EVENT_POR_DETECTED;

/* Interrupt status 0*/
extern const uint8_t _ACCEL5_INT_STATUS_0_DATA_RDY_STATUS     ;
extern const uint8_t _ACCEL5_INT_STATUS_0_FIFO_WATERMARK      ;
extern const uint8_t _ACCEL5_INT_STATUS_0_FIFO_FULL           ;
extern const uint8_t _ACCEL5_INT_STATUS_0_IENG_OVERRUN_STATUS ;
extern const uint8_t _ACCEL5_INT_STATUS_0_GEN2_INT_STATUS     ;
extern const uint8_t _ACCEL5_INT_STATUS_0_GEN1_INT_STATUS     ;
extern const uint8_t _ACCEL5_INT_STATUS_0_ORIENTCH_INT_STATUS ;
extern const uint8_t _ACCEL5_INT_STATUS_0_WAKEUP_INT_STATUS   ;

/* Interrupt status 1*/
extern const uint8_t _ACCEL5_INT_STATUS_1_IENG_OVERRUN_STATUS;
extern const uint8_t _ACCEL5_INT_STATUS_1_DOUBLE_TAP         ;
extern const uint8_t _ACCEL5_INT_STATUS_1_SINGLE_TAP         ;
extern const uint8_t _ACCEL5_INT_STATUS_1_STEP_NO_SET        ;
extern const uint8_t _ACCEL5_INT_STATUS_1_STEP_SET           ;
extern const uint8_t _ACCEL5_INT_STATUS_1_STEP_DETECT        ;
extern const uint8_t _ACCEL5_INT_STATUS_1_STEP_NO_USED       ;

/* Interrupt status 2*/
extern const uint8_t _ACCEL5_INT_STATUS_2_IENG_OVERRUN_STATUS;
extern const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_Z_INIT_STATUS;
extern const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_Y_INIT_STATUS;
extern const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_X_INIT_STATUS;

/* Step status */
extern const uint8_t _ACCEL5_STEP_STATUS_WALKING    ;
extern const uint8_t _ACCEL5_STEP_STATUS_RUNNING    ;
extern const uint8_t _ACCEL5_STEP_STATUS_NO_WALK_RUN;

/* Accel config 0*/
extern const uint8_t _ACCEL5_CFG_0_FILT1_BW_LOW_0_2X_ODR ;
extern const uint8_t _ACCEL5_CFG_0_FILT1_BW_HIGH_0_4X_ODR;
extern const uint8_t _ACCEL5_CFG_0_SLEEP_MODE            ;
extern const uint8_t _ACCEL5_CFG_0_LOW_POWER_MODE        ;
extern const uint8_t _ACCEL5_CFG_0_NORMAL_MODE           ;

/* Accel config 1*/
extern const uint8_t _ACCEL5_CFG_1_ACC_RANGE_2g  ;
extern const uint8_t _ACCEL5_CFG_1_ACC_RANGE_4g  ;
extern const uint8_t _ACCEL5_CFG_1_ACC_RANGE_8g  ;
extern const uint8_t _ACCEL5_CFG_1_ACC_RANGE_16g ;
extern const uint8_t _ACCEL5_CFG_1_OSR_LOW_POWER ;
extern const uint8_t _ACCEL5_CFG_1_OSR_HIGH_POWER;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_5    ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_4    ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_3    ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_2    ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_1    ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5      ;
extern const uint8_t _ACCEL5_CFG_1_ODR_25        ;
extern const uint8_t _ACCEL5_CFG_1_ODR_50        ;
extern const uint8_t _ACCEL5_CFG_1_ODR_100       ;
extern const uint8_t _ACCEL5_CFG_1_ODR_200       ;
extern const uint8_t _ACCEL5_CFG_1_ODR_400       ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800       ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800_1     ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800_2     ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800_3     ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800_4     ;

/* Accel config 2 */
extern const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_1 ;
extern const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_2 ;
extern const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_LP;

/* Interrupt config 0 */
extern const uint8_t _ACCEL5_INT_CFG_0_DATA_RDY       ;
extern const uint8_t _ACCEL5_INT_CFG_0_FIFO_WATERMARK ;
extern const uint8_t _ACCEL5_INT_CFG_0_FIFO_FULL      ;
extern const uint8_t _ACCEL5_INT_CFG_0_GEN2_INT_STATUS;
extern const uint8_t _ACCEL5_INT_CFG_0_GEN1_INT_STATUS;
extern const uint8_t _ACCEL5_INT_CFG_0_ORIENTCH_INT   ;

/* Interrupt config 1 */
extern const uint8_t _ACCEL5_INT_CFG_1_LATCH_MODE_NOLATCH ;
extern const uint8_t _ACCEL5_INT_CFG_1_LATCH_MODE_LATCHING;
extern const uint8_t _ACCEL5_INT_CFG_1_ACTCH_INT_ENABLE   ;
extern const uint8_t _ACCEL5_INT_CFG_1_DOUBLE_TAP_ENABLE  ;
extern const uint8_t _ACCEL5_INT_CFG_1_SINGLE_TAP_ENABLE  ;
extern const uint8_t _ACCEL5_INT_CFG_1_STEP_INT_ENABLE    ;

/* Interrupt map 1 */
extern const uint8_t _ACCEL5_INT1_MAP_DATA_RDY_STATUS     ;
extern const uint8_t _ACCEL5_INT1_MAP_FIFO_WATERMARK      ;
extern const uint8_t _ACCEL5_INT1_MAP_FIFO_FULL           ;
extern const uint8_t _ACCEL5_INT1_MAP_IENG_OVERRUN_STATUS ;
extern const uint8_t _ACCEL5_INT1_MAP_GEN2_INT_STATUS     ;
extern const uint8_t _ACCEL5_INT1_MAP_GEN1_INT_STATUS     ;
extern const uint8_t _ACCEL5_INT1_MAP_ORIENTCH_INT_STATUS ;
extern const uint8_t _ACCEL5_INT1_MAP_WAKEUP_INT_STATUS   ;

/* Interrupt map 2 */
extern const uint8_t _ACCEL5_INT2_MAP_DATA_RDY_STATUS     ;
extern const uint8_t _ACCEL5_INT2_MAP_FIFO_WATERMARK      ;
extern const uint8_t _ACCEL5_INT2_MAP_FIFO_FULL           ;
extern const uint8_t _ACCEL5_INT2_MAP_IENG_OVERRUN_STATUS ;
extern const uint8_t _ACCEL5_INT2_MAP_GEN2_INT_STATUS     ;
extern const uint8_t _ACCEL5_INT2_MAP_GEN1_INT_STATUS     ;
extern const uint8_t _ACCEL5_INT2_MAP_ORIENTCH_INT_STATUS ;
extern const uint8_t _ACCEL5_INT2_MAP_WAKEUP_INT_STATUS   ;

/* Interrupt map 1/2 */
extern const uint8_t _ACCEL5_INT12_MAP_ACTCH_INT2;
extern const uint8_t _ACCEL5_INT12_MAP_TAP_INT2  ;
extern const uint8_t _ACCEL5_INT12_MAP_STEP_INT2 ;
extern const uint8_t _ACCEL5_INT12_MAP_ACTCH_INT1;
extern const uint8_t _ACCEL5_INT12_MAP_TAP_INT1  ;
extern const uint8_t _ACCEL5_INT12_MAP_STEP_INT1 ;

/* Interrupt IO CTRL 1/2 */
const uint8_t _ACCEL5_INT12_CTRL_INT2_OPEN_DRAIN ;
const uint8_t _ACCEL5_INT12_CTRL_INT1_OPEN_DRAIN ;
const uint8_t _ACCEL5_INT12_CTRL_INT2_HIGH_ACTIVE;
const uint8_t _ACCEL5_INT12_CTRL_INT1_HIGH_ACTIVE;

/* FIFO Config 0*/
extern const uint8_t _ACCEL5_FIFO_CFG0_Z_AXIS_ENABLE      ;
extern const uint8_t _ACCEL5_FIFO_CFG0_Y_AXIS_ENABLE      ;
extern const uint8_t _ACCEL5_FIFO_CFG0_X_AXIS_ENABLE      ;
extern const uint8_t _ACCEL5_FIFO_CFG0_8bit_ENABLE        ;
extern const uint8_t _ACCEL5_FIFO_CFG0_DATA_SRC_ENABLE    ;
extern const uint8_t _ACCEL5_FIFO_CFG0_TIME_ENABLE        ;
extern const uint8_t _ACCEL5_FIFO_CFG0_STOP_NO_FULL_ENABLE;
extern const uint8_t _ACCEL5_FIFO_CFG0_AUTO_FLUSH_ENABLE  ;

/* Auto Low Pow 1 register */
extern const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_0 ;
extern const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_1 ;
extern const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_2 ;
extern const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_3 ;
extern const uint8_t _ACCEL5_FIFO_AUTO_TRIG_GEN1_INT;
extern const uint8_t _ACCEL5_FIFO_AUTO_TRIG_DATA_RDY;

/* Auto wakeup */
extern const uint8_t _ACCEL5_WAKEUP_TIMEOUT_ENABLE;
extern const uint8_t _ACCEL5_WAKEUP_ENABLE        ;

/* Wakeup config 0 */
extern const uint8_t _ACCEL5_WAKEUP_Z_AXIS_ENABLE   ;
extern const uint8_t _ACCEL5_WAKEUP_Y_AXIS_ENABLE   ;
extern const uint8_t _ACCEL5_WAKEUP_X_AXIS_ENABLE   ;
extern const uint8_t _ACCEL5_WAKEUP_NUMBER_OF_SIMPLE;
extern const uint8_t _ACCEL5_WAKEUP_REFU_MANUAL     ;
extern const uint8_t _ACCEL5_WAKEUP_REFU_ONETIME    ;
extern const uint8_t _ACCEL5_WAKEUP_REFU_EVERYTIME  ;

/* Orient config 0*/
extern const uint8_t _ACCEL5_ORIENT_Z_AXIS_ENABLE      ;
extern const uint8_t _ACCEL5_ORIENT_Y_AXIS_ENABLE      ;
extern const uint8_t _ACCEL5_ORIENT_X_AXIS_ENABLE      ;
extern const uint8_t _ACCEL5_ORIENT_DATA_SRC_ENABLE    ;
extern const uint8_t _ACCEL5_ORIENT_REFU_MANUAL        ;
extern const uint8_t _ACCEL5_ORIENT_REFU_ONETIME_2     ;
extern const uint8_t _ACCEL5_ORIENT_REFU_ONETIME_IP    ;
extern const uint8_t _ACCEL5_ORIENT_STABILITY_INACTIVE ;
extern const uint8_t _ACCEL5_ORIENT_STABILITY_ENABLED_1;
extern const uint8_t _ACCEL5_ORIENT_STABILITY_ENABLED_2;

/* Generic interrupt 1 config 0 */
extern const uint8_t _ACCEL5_GEN1_CFG0_ACT_Z_ENABLE  ;
extern const uint8_t _ACCEL5_GEN1_CFG0_ACT_Y_ENABLE  ;
extern const uint8_t _ACCEL5_GEN1_CFG0_ACT_X_ENABLE  ;
extern const uint8_t _ACCEL5_GEN1_CFG0_DATA_ENABLE   ;
extern const uint8_t _ACCEL5_GEN1_CFG0_REFU_MANUAL   ;
extern const uint8_t _ACCEL5_GEN1_CFG0_REFU_ONETIME  ;
extern const uint8_t _ACCEL5_GEN1_CFG0_REFU_EVERYTIME;
extern const uint8_t _ACCEL5_GEN1_CFG0_HYST_24mg     ;
extern const uint8_t _ACCEL5_GEN1_CFG0_HYST_48mg     ;
extern const uint8_t _ACCEL5_GEN1_CFG0_HYST_96mg     ;
extern const uint8_t _ACCEL5_GEN1_CFG0_HYST_NO_ACTIVE;

/* Generic interrupt 1 config 1 */
extern const uint8_t _ACCEL5_GEN1_CFG1_CRITERION_SEL_ACTIVE  ;
extern const uint8_t _ACCEL5_GEN1_CFG1_CRITERION_SEL_INACTIVE;
extern const uint8_t _ACCEL5_GEN1_CFG1_COMB_SEL_AND          ;
extern const uint8_t _ACCEL5_GEN1_CFG1_COMB_SEL_OR           ;

/* Generic interrupt 2 consfig 1 */
extern const uint8_t _ACCEL5_GEN2_CFG0_ACT_Z_ENABLE  ;
extern const uint8_t _ACCEL5_GEN2_CFG0_ACT_Y_ENABLE  ;
extern const uint8_t _ACCEL5_GEN2_CFG0_ACT_X_ENABLE  ;
extern const uint8_t _ACCEL5_GEN2_CFG0_DATA_ENABLE   ;
extern const uint8_t _ACCEL5_GEN2_CFG0_REFU_MANUAL   ;
extern const uint8_t _ACCEL5_GEN2_CFG0_REFU_ONETIME  ;
extern const uint8_t _ACCEL5_GEN2_CFG0_REFU_EVERYTIME;
extern const uint8_t _ACCEL5_GEN2_CFG0_HYST_24mg     ;
extern const uint8_t _ACCEL5_GEN2_CFG0_HYST_48mg     ;
extern const uint8_t _ACCEL5_GEN2_CFG0_HYST_96mg     ;
extern const uint8_t _ACCEL5_GEN2_CFG0_HYST_NO_ACTIVE;

/* Generic interrupt 2 config 1*/
extern const uint8_t _ACCEL5_GEN2_CFG1_CRITERION_SEL_ACTIVE  ;
extern const uint8_t _ACCEL5_GEN2_CFG1_CRITERION_SEL_INACTIVE;
extern const uint8_t _ACCEL5_GEN2_CFG1_COMB_SEL_AND          ;
extern const uint8_t _ACCEL5_GEN2_CFG1_COMB_SEL_OR           ;

/* Activity interrupt config */
extern const uint8_t _ACCEL5_ACTCH_CFG0_Z_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_Y_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_X_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_DATA_ENABLE   ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_32 ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_64 ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_128;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_256;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_512;

/* Tap config 0*/
extern const uint8_t _ACCEL5_TAP_CFG0_USE_Z_AXIS  ;
extern const uint8_t _ACCEL5_TAP_CFG0_USE_Y_AXIS  ;
extern const uint8_t _ACCEL5_TAP_CFG0_USE_X_AXIS  ;
extern const uint8_t _ACCEL5_TAP_CFG0_TAP_SEL_HIGH;
extern const uint8_t _ACCEL5_TAP_CFG0_TAP_SEL_LOW ;

/* Tap config 1*/
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_4 ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_8 ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_12;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_16;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_60   ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_80   ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_100  ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_120  ;
extern const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_6  ;
extern const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_9  ;
extern const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_12 ;
extern const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_18 ;

/* If config */
extern const uint8_t _ACCEL5_IF_CONFIG_SPI_4_WIRE;
extern const uint8_t _ACCEL5_IF_CONFIG_SPI_3_WIRE;

/* self test */
extern const uint8_t _ACCEL5_TEST_SIGN_ENABLE  ;
extern const uint8_t _ACCEL5_TEST_Z_AXIS_ENABLE;
extern const uint8_t _ACCEL5_TEST_Y_AXIS_ENABLE;
extern const uint8_t _ACCEL5_TEST_X_AXIS_ENABLE;

/* Command register */
extern const uint8_t _ACCEL5_CMD_FIFO_FLUSH    ;
extern const uint8_t _ACCEL5_CMD_STEP_CNT_CLEAR;
extern const uint8_t _ACCEL5_CMD_SOFTWARE_RESET;

/* Axis */
extern const uint8_t _ACCEL5_X_AXIS;
extern const uint8_t _ACCEL5_Y_AXIS;
extern const uint8_t _ACCEL5_Z_AXIS;


                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup ACCEL5_INIT Driver Initialization */              /** @{ */

#ifdef   __ACCEL5_DRV_SPI__
void accel5_spiDriverInit(T_ACCEL5_P gpioObj, T_ACCEL5_P spiObj);
#endif
#ifdef   __ACCEL5_DRV_I2C__
void accel5_i2cDriverInit(T_ACCEL5_P gpioObj, T_ACCEL5_P i2cObj, uint8_t slave);
#endif
#ifdef   __ACCEL5_DRV_UART__
void accel5_uartDriverInit(T_ACCEL5_P gpioObj, T_ACCEL5_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void accel5_gpioDriverInit(T_ACCEL5_P gpioObj);
                                                                       /** @} */
/** @defgroup ACCEL5_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Functions for write one byte in register
 *
 * @param[in] reg    Register in which the data will be written
 * @param[in] _data  Data which be written in the register
 */
void accel5_writeByte(uint8_t reg, uint8_t _data);

/**
 * @brief Functions for read byte from register
 *
 * @param[in] reg    Register which will be read
 * @retval one byte data which is read from the register
 */
uint8_t accel5_readByte(uint8_t reg);

/**
 * @brief Functions for read data from register
 *
 * @param[in] reg     Register which will be read
 * @retval two byte data which is read from the register
 */
uint16_t accel5_readData(uint8_t reg);

/**
 * @brief Functions for read axis data
 *
 * @param[ in ] axis    Axis data which will be read
 * @retval Axis data
 */
int16_t accel5_getAxis(uint8_t axis);

/**
 * @brief Functions for initialize the chip
 *
 * @param[ in ] mode            Work mode
 * @param[ in ] range           Acceleration data range
 *
 * @retval Information whether the chip is successfully initialized or not.
 *
 * Functions initializes accelerometer g-range and mode.
   Initialization contains and enable data, single tap, double tap, step,
   actch and x / y / z axis.
 */
uint8_t accel5_init(uint8_t mode, uint8_t range);

/**
 * @brief Functions for initialize the chip
 *
 * @retval Sensor time
 *
 * The internal sensor time is calculated using the formula:
         Sensor time =  Time * 312.5us
      - Time   The value read from the three time sensor register
 */
uint32_t accel5_sensorTime();

/**
 * @brief Functions for read temperature
 *
 * @retval Temperature data in C
 */
float accel5_getTemperature();

/**
 * @brief Functions for software reset
 */
void accel5_softReset();


                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_Accel5_STM.c
    @example Click_Accel5_TIVA.c
    @example Click_Accel5_CEC.c
    @example Click_Accel5_KINETIS.c
    @example Click_Accel5_MSP.c
    @example Click_Accel5_PIC.c
    @example Click_Accel5_PIC32.c
    @example Click_Accel5_DSPIC.c
    @example Click_Accel5_AVR.c
    @example Click_Accel5_FT90x.c
    @example Click_Accel5_STM.mbas
    @example Click_Accel5_TIVA.mbas
    @example Click_Accel5_CEC.mbas
    @example Click_Accel5_KINETIS.mbas
    @example Click_Accel5_MSP.mbas
    @example Click_Accel5_PIC.mbas
    @example Click_Accel5_PIC32.mbas
    @example Click_Accel5_DSPIC.mbas
    @example Click_Accel5_AVR.mbas
    @example Click_Accel5_FT90x.mbas
    @example Click_Accel5_STM.mpas
    @example Click_Accel5_TIVA.mpas
    @example Click_Accel5_CEC.mpas
    @example Click_Accel5_KINETIS.mpas
    @example Click_Accel5_MSP.mpas
    @example Click_Accel5_PIC.mpas
    @example Click_Accel5_PIC32.mpas
    @example Click_Accel5_DSPIC.mpas
    @example Click_Accel5_AVR.mpas
    @example Click_Accel5_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __accel5_driver.h

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