/*
    __accel5_driver.c

-----------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

#include "__accel5_driver.h"
#include "__accel5_hal.c"

/* ------------------------------------------------------------------- MACROS */

const uint8_t _ACCEL5_CHIP_ID = 0x90;

/* Register */
const uint8_t _ACCEL5_REG_CHIP_ID             = 0x00;
const uint8_t _ACCEL5_REG_ERR_REG             = 0x02;
const uint8_t _ACCEL5_REG_STATUS              = 0x03;
const uint8_t _ACCEL5_REG_ACC_X_LSB           = 0x04;
const uint8_t _ACCEL5_REG_ACC_X_MSB           = 0x05;
const uint8_t _ACCEL5_REG_ACC_Y_LSB           = 0x06;
const uint8_t _ACCEL5_REG_ACC_Y_MSB           = 0x07;
const uint8_t _ACCEL5_REG_ACC_Z_LSB           = 0x08;
const uint8_t _ACCEL5_REG_ACC_Z_MSB           = 0x09;
const uint8_t _ACCEL5_REG_SENSOR_TIME_0       = 0x0A;
const uint8_t _ACCEL5_REG_SENSOR_TIME_1       = 0x0B;
const uint8_t _ACCEL5_REG_SENSOR_TIME_2       = 0x0C;
const uint8_t _ACCEL5_REG_EVENT               = 0x0D;
const uint8_t _ACCEL5_REG_INT_STATUS_0        = 0x0E;
const uint8_t _ACCEL5_REG_INT_STATUS_1        = 0x0F;
const uint8_t _ACCEL5_REG_INT_STATUS_2        = 0x10;
const uint8_t _ACCEL5_REG_TEMPERATURE         = 0x11;
const uint8_t _ACCEL5_REG_FIFO_LENGTH_0       = 0x12;
const uint8_t _ACCEL5_REG_FIFO_LENGTH_1       = 0x13;
const uint8_t _ACCEL5_REG_FIFO_DATA           = 0x14;
const uint8_t _ACCEL5_REG_STEP_CNT_0          = 0x15;
const uint8_t _ACCEL5_REG_STEP_CNT_1          = 0x16;
const uint8_t _ACCEL5_REG_STEP_CNT_2          = 0x17;
const uint8_t _ACCEL5_REG_STEP_STATUS         = 0x18;
const uint8_t _ACCEL5_REG_ACC_CONGIG_0        = 0x19;
const uint8_t _ACCEL5_REG_ACC_CONGIG_1        = 0x1A;
const uint8_t _ACCEL5_REG_ACC_CONGIG_2        = 0x1B;
const uint8_t _ACCEL5_REG_INT_CONFIG_0        = 0x1F;
const uint8_t _ACCEL5_REG_INT_CONFIG_1        = 0x20;
const uint8_t _ACCEL5_REG_INT1_MAP            = 0x21;
const uint8_t _ACCEL5_REG_INT2_MAP            = 0x22;
const uint8_t _ACCEL5_REG_INT12_MAP           = 0x23;
const uint8_t _ACCEL5_REG_INT12_IO_CTRL       = 0x24;
const uint8_t _ACCEL5_REG_FIFO_CONFIG_0       = 0x26;
const uint8_t _ACCEL5_REG_FIFO_CONFIG_1       = 0x27;
const uint8_t _ACCEL5_REG_FIFO_CONFIG_2       = 0x28;
const uint8_t _ACCEL5_REG_FIFO_PWR_CONFIG     = 0x29;
const uint8_t _ACCEL5_REG_AUTO_LOW_POW_0      = 0x2A;
const uint8_t _ACCEL5_REG_AUTO_LOW_POW_1      = 0x2B;
const uint8_t _ACCEL5_REG_AUTO_WAKEUP_0       = 0x2C;
const uint8_t _ACCEL5_REG_AUTO_WAKEUP_1       = 0x2D;
const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_0     = 0x2F;
const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_1     = 0x30;
const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_2     = 0x31;
const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_3     = 0x32;
const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_4     = 0x33;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_0   = 0x35;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_1   = 0x36;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_2   = 0x37;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_3   = 0x38;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_4   = 0x39;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_5   = 0x3A;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_6   = 0x3B;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_7   = 0x3C;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_8   = 0x3D;
const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_9   = 0x3E;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_0   = 0x3F;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_1   = 0x40;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_2   = 0x41;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_3   = 0x42;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_31  = 0x43;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_4   = 0x44;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_5   = 0x45;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_6   = 0x46;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_7   = 0x47;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_8   = 0x48;
const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_9   = 0x49;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_0   = 0x4A;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_1   = 0x4B;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_2   = 0x4C;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_3   = 0x4D;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_31  = 0x4E;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_4   = 0x4F;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_5   = 0x50;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_6   = 0x51;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_7   = 0x52;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_8   = 0x53;
const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_9   = 0x54;
const uint8_t _ACCEL5_REG_ACTCH_CONFIG_0      = 0x55;
const uint8_t _ACCEL5_REG_ACTCH_CONFIG_1      = 0x56;
const uint8_t _ACCEL5_REG_TAP_CONFIG_0        = 0x57;
const uint8_t _ACCEL5_REG_TAP_CONFIG_1        = 0x58;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_0   = 0x59;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_1   = 0x5A;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_2   = 0x5B;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_3   = 0x5C;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_4   = 0x5D;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_5   = 0x5E;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_6   = 0x5F;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_7   = 0x60;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_8   = 0x61;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_9   = 0x62;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_10   = 0x63;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_11   = 0x64;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_12   = 0x65;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_13   = 0x66;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_14   = 0x67;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_15   = 0x68;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_16   = 0x69;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_17   = 0x6A;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_18   = 0x6B;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_19   = 0x6C;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_20   = 0x6D;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_21   = 0x6E;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_22   = 0x6F;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_23   = 0x70;
const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_24   = 0x71;
const uint8_t _ACCEL5_REG_IF_CONFIG            = 0x7C;
const uint8_t _ACCEL5_REG_SELF_TEST            = 0x7D;
const uint8_t _ACCEL5_REG_CMD                  = 0x7E;

/* Error status register */
const uint8_t _ACCEL5_ERROR_CMD    = 0x02;

/* Status register */
const uint8_t _ACCEL5_STATUS_DATA_RDY_START            = 0x80;
const uint8_t _ACCEL5_STATUS_RDY_CMD                   = 0x10;
const uint8_t _ACCEL5_STATUS_NORMAL_MODE               = 0x04;
const uint8_t _ACCEL5_STATUS_LOW_POWER_MODE            = 0x02;
const uint8_t _ACCEL5_STATUS_SLEEP_MODE                = 0x04;
const uint8_t _ACCEL5_STATUS_INT_ACTIVE_TRIGGERED      = 0x01;
const uint8_t _ACCEL5_STATUS_INT_ACTIVE_NOT_TRIGGERED  = 0x00;

/* Sensor status flags (EVENT)*/
const uint8_t _ACCEL5_EVENT_POR_DETECTED = 0x01;

/* Interrupt status 0*/
const uint8_t _ACCEL5_INT_STATUS_0_DATA_RDY_STATUS      = 0x80;
const uint8_t _ACCEL5_INT_STATUS_0_FIFO_WATERMARK       = 0x40;
const uint8_t _ACCEL5_INT_STATUS_0_FIFO_FULL            = 0x20;
const uint8_t _ACCEL5_INT_STATUS_0_IENG_OVERRUN_STATUS  = 0x10;
const uint8_t _ACCEL5_INT_STATUS_0_GEN2_INT_STATUS      = 0x08;
const uint8_t _ACCEL5_INT_STATUS_0_GEN1_INT_STATUS      = 0x04;
const uint8_t _ACCEL5_INT_STATUS_0_ORIENTCH_INT_STATUS  = 0x02;
const uint8_t _ACCEL5_INT_STATUS_0_WAKEUP_INT_STATUS    = 0x01;

/* Interrupt status 1*/
const uint8_t _ACCEL5_INT_STATUS_1_IENG_OVERRUN_STATUS   = 0x10;
const uint8_t _ACCEL5_INT_STATUS_1_DOUBLE_TAP            = 0x08;
const uint8_t _ACCEL5_INT_STATUS_1_SINGLE_TAP            = 0x04;
const uint8_t _ACCEL5_INT_STATUS_1_STEP_NO_SET           = 0x00;
const uint8_t _ACCEL5_INT_STATUS_1_STEP_SET              = 0x01;
const uint8_t _ACCEL5_INT_STATUS_1_STEP_DETECT           = 0x02;
const uint8_t _ACCEL5_INT_STATUS_1_STEP_NO_USED          = 0x03;

/* Interrupt status 2*/
const uint8_t _ACCEL5_INT_STATUS_2_IENG_OVERRUN_STATUS   = 0x10;
const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_Z_INIT_STATUS   = 0x04;
const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_Y_INIT_STATUS   = 0x02;
const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_X_INIT_STATUS   = 0x01;

/* Step status */
const uint8_t _ACCEL5_STEP_STATUS_WALKING                = 0x01;
const uint8_t _ACCEL5_STEP_STATUS_RUNNING                = 0x02;
const uint8_t _ACCEL5_STEP_STATUS_NO_WALK_RUN            = 0x00;

/* Accel config 0*/
const uint8_t _ACCEL5_CFG_0_FILT1_BW_LOW_0_2X_ODR    = 0x80;
const uint8_t _ACCEL5_CFG_0_FILT1_BW_HIGH_0_4X_ODR   = 0x00;
const uint8_t _ACCEL5_CFG_0_SLEEP_MODE               = 0x00;
const uint8_t _ACCEL5_CFG_0_LOW_POWER_MODE           = 0x01;
const uint8_t _ACCEL5_CFG_0_NORMAL_MODE              = 0x02;

/* Accel config 1*/
const uint8_t _ACCEL5_CFG_1_ACC_RANGE_2g   = 0x00;
const uint8_t _ACCEL5_CFG_1_ACC_RANGE_4g   = 0x40;
const uint8_t _ACCEL5_CFG_1_ACC_RANGE_8g   = 0x80;
const uint8_t _ACCEL5_CFG_1_ACC_RANGE_16g  = 0xC0;
const uint8_t _ACCEL5_CFG_1_OSR_LOW_POWER  = 0x00;
const uint8_t _ACCEL5_CFG_1_OSR_HIGH_POWER = 0x30;
const uint8_t _ACCEL5_CFG_1_ODR_12p5_5     = 0x00;
const uint8_t _ACCEL5_CFG_1_ODR_12p5_4     = 0x01;
const uint8_t _ACCEL5_CFG_1_ODR_12p5_3     = 0x02;
const uint8_t _ACCEL5_CFG_1_ODR_12p5_2     = 0x03;
const uint8_t _ACCEL5_CFG_1_ODR_12p5_1     = 0x04;
const uint8_t _ACCEL5_CFG_1_ODR_12p5       = 0x05;
const uint8_t _ACCEL5_CFG_1_ODR_25         = 0x06;
const uint8_t _ACCEL5_CFG_1_ODR_50         = 0x07;
const uint8_t _ACCEL5_CFG_1_ODR_100        = 0x08;
const uint8_t _ACCEL5_CFG_1_ODR_200        = 0x09;
const uint8_t _ACCEL5_CFG_1_ODR_400        = 0x0A;
const uint8_t _ACCEL5_CFG_1_ODR_800        = 0x0B;
const uint8_t _ACCEL5_CFG_1_ODR_800_1      = 0x0C;
const uint8_t _ACCEL5_CFG_1_ODR_800_2      = 0x0D;
const uint8_t _ACCEL5_CFG_1_ODR_800_3      = 0x0E;
const uint8_t _ACCEL5_CFG_1_ODR_800_4      = 0x0F;

/* Accel config 2 */
const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_1      = 0x00;
const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_2      = 0x04;
const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_LP     = 0x08;

/* Interrupt config 0 */
const uint8_t _ACCEL5_INT_CFG_0_DATA_RDY             = 0x80;
const uint8_t _ACCEL5_INT_CFG_0_FIFO_WATERMARK       = 0x40;
const uint8_t _ACCEL5_INT_CFG_0_FIFO_FULL            = 0x20;
const uint8_t _ACCEL5_INT_CFG_0_GEN2_INT_STATUS      = 0x08;
const uint8_t _ACCEL5_INT_CFG_0_GEN1_INT_STATUS      = 0x04;
const uint8_t _ACCEL5_INT_CFG_0_ORIENTCH_INT         = 0x02;

/* Interrupt config 1 */
const uint8_t _ACCEL5_INT_CFG_1_LATCH_MODE_NOLATCH     = 0x00;
const uint8_t _ACCEL5_INT_CFG_1_LATCH_MODE_LATCHING    = 0x80;
const uint8_t _ACCEL5_INT_CFG_1_ACTCH_INT_ENABLE       = 0x10;
const uint8_t _ACCEL5_INT_CFG_1_DOUBLE_TAP_ENABLE      = 0x08;
const uint8_t _ACCEL5_INT_CFG_1_SINGLE_TAP_ENABLE      = 0x04;
const uint8_t _ACCEL5_INT_CFG_1_STEP_INT_ENABLE        = 0x01;

/* Interrupt map 1 */
const uint8_t _ACCEL5_INT1_MAP_DATA_RDY_STATUS      = 0x80;
const uint8_t _ACCEL5_INT1_MAP_FIFO_WATERMARK       = 0x40;
const uint8_t _ACCEL5_INT1_MAP_FIFO_FULL            = 0x20;
const uint8_t _ACCEL5_INT1_MAP_IENG_OVERRUN_STATUS  = 0x10;
const uint8_t _ACCEL5_INT1_MAP_GEN2_INT_STATUS      = 0x08;
const uint8_t _ACCEL5_INT1_MAP_GEN1_INT_STATUS      = 0x04;
const uint8_t _ACCEL5_INT1_MAP_ORIENTCH_INT_STATUS  = 0x02;
const uint8_t _ACCEL5_INT1_MAP_WAKEUP_INT_STATUS    = 0x01;

/* Interrupt map 2 */
const uint8_t _ACCEL5_INT2_MAP_DATA_RDY_STATUS      = 0x80;
const uint8_t _ACCEL5_INT2_MAP_FIFO_WATERMARK       = 0x40;
const uint8_t _ACCEL5_INT2_MAP_FIFO_FULL            = 0x20;
const uint8_t _ACCEL5_INT2_MAP_IENG_OVERRUN_STATUS  = 0x10;
const uint8_t _ACCEL5_INT2_MAP_GEN2_INT_STATUS      = 0x08;
const uint8_t _ACCEL5_INT2_MAP_GEN1_INT_STATUS      = 0x04;
const uint8_t _ACCEL5_INT2_MAP_ORIENTCH_INT_STATUS  = 0x02;
const uint8_t _ACCEL5_INT2_MAP_WAKEUP_INT_STATUS    = 0x01;

/* Interrupt map 1/2 */
const uint8_t _ACCEL5_INT12_MAP_ACTCH_INT2    = 0x80;
const uint8_t _ACCEL5_INT12_MAP_TAP_INT2      = 0x40;
const uint8_t _ACCEL5_INT12_MAP_STEP_INT2     = 0x10;
const uint8_t _ACCEL5_INT12_MAP_ACTCH_INT1    = 0x08;
const uint8_t _ACCEL5_INT12_MAP_TAP_INT1      = 0x04;
const uint8_t _ACCEL5_INT12_MAP_STEP_INT1     = 0x01;

/* Interrupt IO CTRL 1/2 */
const uint8_t _ACCEL5_INT12_CTRL_INT2_OPEN_DRAIN    = 0x40;
const uint8_t _ACCEL5_INT12_CTRL_INT1_OPEN_DRAIN    = 0x04;
const uint8_t _ACCEL5_INT12_CTRL_INT2_HIGH_ACTIVE   = 0x20;
const uint8_t _ACCEL5_INT12_CTRL_INT1_HIGH_ACTIVE   = 0x02;

/* FIFO Config 0*/
const uint8_t _ACCEL5_FIFO_CFG0_Z_AXIS_ENABLE       = 0x80;
const uint8_t _ACCEL5_FIFO_CFG0_Y_AXIS_ENABLE       = 0x40;
const uint8_t _ACCEL5_FIFO_CFG0_X_AXIS_ENABLE       = 0x20;
const uint8_t _ACCEL5_FIFO_CFG0_8bit_ENABLE         = 0x10;
const uint8_t _ACCEL5_FIFO_CFG0_DATA_SRC_ENABLE     = 0x08;
const uint8_t _ACCEL5_FIFO_CFG0_TIME_ENABLE         = 0x04;
const uint8_t _ACCEL5_FIFO_CFG0_STOP_NO_FULL_ENABLE = 0x02;
const uint8_t _ACCEL5_FIFO_CFG0_AUTO_FLUSH_ENABLE   = 0x01;

/* Auto Low Pow 1 register */
const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_0       = 0x00;
const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_1       = 0x04;
const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_2       = 0x08;
const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_3       = 0x0C;
const uint8_t _ACCEL5_FIFO_AUTO_TRIG_GEN1_INT      = 0x02;
const uint8_t _ACCEL5_FIFO_AUTO_TRIG_DATA_RDY      = 0x01;

/* Auto wakeup */
const uint8_t _ACCEL5_WAKEUP_TIMEOUT_ENABLE  = 0x04;
const uint8_t _ACCEL5_WAKEUP_ENABLE          = 0x02;

/* Wakeup config 0 */
const uint8_t _ACCEL5_WAKEUP_Z_AXIS_ENABLE       = 0x80;
const uint8_t _ACCEL5_WAKEUP_Y_AXIS_ENABLE       = 0x40;
const uint8_t _ACCEL5_WAKEUP_X_AXIS_ENABLE       = 0x20;
const uint8_t _ACCEL5_WAKEUP_NUMBER_OF_SIMPLE    = 0x10;
const uint8_t _ACCEL5_WAKEUP_REFU_MANUAL         = 0x00;
const uint8_t _ACCEL5_WAKEUP_REFU_ONETIME        = 0x01;
const uint8_t _ACCEL5_WAKEUP_REFU_EVERYTIME      = 0x02;

/* Orient config 0*/
const uint8_t _ACCEL5_ORIENT_Z_AXIS_ENABLE       = 0x80;
const uint8_t _ACCEL5_ORIENT_Y_AXIS_ENABLE       = 0x40;
const uint8_t _ACCEL5_ORIENT_X_AXIS_ENABLE       = 0x20;
const uint8_t _ACCEL5_ORIENT_DATA_SRC_ENABLE     = 0x10;
const uint8_t _ACCEL5_ORIENT_REFU_MANUAL         = 0x00;
const uint8_t _ACCEL5_ORIENT_REFU_ONETIME_2      = 0x04;
const uint8_t _ACCEL5_ORIENT_REFU_ONETIME_IP     = 0x08;
const uint8_t _ACCEL5_ORIENT_STABILITY_INACTIVE  = 0x00;
const uint8_t _ACCEL5_ORIENT_STABILITY_ENABLED_1 = 0x01;
const uint8_t _ACCEL5_ORIENT_STABILITY_ENABLED_2 = 0x02;

/* Generic interrupt 1 config 0 */
const uint8_t _ACCEL5_GEN1_CFG0_ACT_Z_ENABLE       = 0x80;
const uint8_t _ACCEL5_GEN1_CFG0_ACT_Y_ENABLE       = 0x40;
const uint8_t _ACCEL5_GEN1_CFG0_ACT_X_ENABLE       = 0x20;
const uint8_t _ACCEL5_GEN1_CFG0_DATA_ENABLE        = 0x10;
const uint8_t _ACCEL5_GEN1_CFG0_REFU_MANUAL        = 0x00;
const uint8_t _ACCEL5_GEN1_CFG0_REFU_ONETIME       = 0x04;
const uint8_t _ACCEL5_GEN1_CFG0_REFU_EVERYTIME     = 0x08;
const uint8_t _ACCEL5_GEN1_CFG0_HYST_24mg          = 0x01;
const uint8_t _ACCEL5_GEN1_CFG0_HYST_48mg          = 0x02;
const uint8_t _ACCEL5_GEN1_CFG0_HYST_96mg          = 0x03;
const uint8_t _ACCEL5_GEN1_CFG0_HYST_NO_ACTIVE     = 0x00;

/* Generic interrupt 1 config 1 */
const uint8_t _ACCEL5_GEN1_CFG1_CRITERION_SEL_ACTIVE       = 0x20;
const uint8_t _ACCEL5_GEN1_CFG1_CRITERION_SEL_INACTIVE     = 0x00;
const uint8_t _ACCEL5_GEN1_CFG1_COMB_SEL_AND               = 0x10;
const uint8_t _ACCEL5_GEN1_CFG1_COMB_SEL_OR                = 0x00;

/* Generic interrupt 2 consfig 1 */
const uint8_t _ACCEL5_GEN2_CFG0_ACT_Z_ENABLE       = 0x80;
const uint8_t _ACCEL5_GEN2_CFG0_ACT_Y_ENABLE       = 0x40;
const uint8_t _ACCEL5_GEN2_CFG0_ACT_X_ENABLE       = 0x20;
const uint8_t _ACCEL5_GEN2_CFG0_DATA_ENABLE        = 0x10;
const uint8_t _ACCEL5_GEN2_CFG0_REFU_MANUAL        = 0x00;
const uint8_t _ACCEL5_GEN2_CFG0_REFU_ONETIME       = 0x04;
const uint8_t _ACCEL5_GEN2_CFG0_REFU_EVERYTIME     = 0x08;
const uint8_t _ACCEL5_GEN2_CFG0_HYST_24mg          = 0x01;
const uint8_t _ACCEL5_GEN2_CFG0_HYST_48mg          = 0x02;
const uint8_t _ACCEL5_GEN2_CFG0_HYST_96mg          = 0x03;
const uint8_t _ACCEL5_GEN2_CFG0_HYST_NO_ACTIVE     = 0x00;

/* Generic interrupt 2 config 1*/
const uint8_t _ACCEL5_GEN2_CFG1_CRITERION_SEL_ACTIVE       = 0x20;
const uint8_t _ACCEL5_GEN2_CFG1_CRITERION_SEL_INACTIVE     = 0x00;
const uint8_t _ACCEL5_GEN2_CFG1_COMB_SEL_AND               = 0x10;
const uint8_t _ACCEL5_GEN2_CFG1_COMB_SEL_OR                = 0x00;

/* Activity interrupt config */
const uint8_t _ACCEL5_ACTCH_CFG0_Z_AXIS_ENABLE       = 0x80;
const uint8_t _ACCEL5_ACTCH_CFG0_Y_AXIS_ENABLE       = 0x40;
const uint8_t _ACCEL5_ACTCH_CFG0_X_AXIS_ENABLE       = 0x20;
const uint8_t _ACCEL5_ACTCH_CFG0_DATA_ENABLE         = 0x10;
const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_32       = 0x00;
const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_64       = 0x01;
const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_128      = 0x02;
const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_256      = 0x03;
const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_512      = 0x04;

/* Tap config 0*/
const uint8_t _ACCEL5_TAP_CFG0_USE_Z_AXIS    = 0x00;
const uint8_t _ACCEL5_TAP_CFG0_USE_Y_AXIS    = 0x01;
const uint8_t _ACCEL5_TAP_CFG0_USE_X_AXIS    = 0x02;
const uint8_t _ACCEL5_TAP_CFG0_TAP_SEL_HIGH  = 0x00;
const uint8_t _ACCEL5_TAP_CFG0_TAP_SEL_LOW   = 0x10;

/* Tap config 1*/
const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_4  = 0x00;
const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_8  = 0x10;
const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_12 = 0x20;
const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_16 = 0x30;
const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_60    = 0x00;
const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_80    = 0x04;
const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_100   = 0x08;
const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_120   = 0x0C;
const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_6   = 0x00;
const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_9   = 0x01;
const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_12  = 0x02;
const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_18  = 0x03;

/* If config */
const uint8_t _ACCEL5_IF_CONFIG_SPI_4_WIRE  = 0x00;
const uint8_t _ACCEL5_IF_CONFIG_SPI_3_WIRE  = 0x01;

/* self test */
const uint8_t _ACCEL5_TEST_SIGN_ENABLE    = 0x08;
const uint8_t _ACCEL5_TEST_Z_AXIS_ENABLE  = 0x04;
const uint8_t _ACCEL5_TEST_Y_AXIS_ENABLE  = 0x02;
const uint8_t _ACCEL5_TEST_X_AXIS_ENABLE  = 0x01;

/* Command register */
const uint8_t _ACCEL5_CMD_FIFO_FLUSH     = 0xB0;
const uint8_t _ACCEL5_CMD_STEP_CNT_CLEAR = 0xB1;
const uint8_t _ACCEL5_CMD_SOFTWARE_RESET = 0xB6;

/* Axis */
const uint8_t _ACCEL5_X_AXIS = 0x04;
const uint8_t _ACCEL5_Y_AXIS = 0x06;
const uint8_t _ACCEL5_Z_AXIS = 0x08;

/* Flags */
static const uint8_t DEVICE_ERROR = 0x01;
static const uint8_t DEVICE_OK = 0x00;

/* ---------------------------------------------------------------- VARIABLES */

#ifdef   __ACCEL5_DRV_I2C__
static uint8_t _slaveAddress;
#endif

/* -------------------------------------------- PRIVATE FUNCTION DECLARATIONS */



/* --------------------------------------------- PRIVATE FUNCTION DEFINITIONS */



/* --------------------------------------------------------- PUBLIC FUNCTIONS */

#ifdef   __ACCEL5_DRV_SPI__

void accel5_spiDriverInit(T_ACCEL5_P gpioObj, T_ACCEL5_P spiObj)
{
    hal_spiMap( (T_HAL_P)spiObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __ACCEL5_DRV_I2C__

void accel5_i2cDriverInit(T_ACCEL5_P gpioObj, T_ACCEL5_P i2cObj, uint8_t slave)
{
    _slaveAddress = slave;
    hal_i2cMap( (T_HAL_P)i2cObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif
#ifdef   __ACCEL5_DRV_UART__

void accel5_uartDriverInit(T_ACCEL5_P gpioObj, T_ACCEL5_P uartObj)
{
    hal_uartMap( (T_HAL_P)uartObj );
    hal_gpioMap( (T_HAL_P)gpioObj );
}

#endif

/* ----------------------------------------------------------- IMPLEMENTATION */

void accel5_writeByte(uint8_t reg, uint8_t _data)
{
    uint8_t writeReg[ 2 ];
    
    writeReg[ 0 ] = reg;
    writeReg[ 1 ] = _data;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 2, END_MODE_STOP );
}

uint8_t accel5_readByte(uint8_t reg)
{
    uint8_t writeReg[ 1 ];
    uint8_t readReg[ 1 ];
    
    writeReg[ 0 ] = reg;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_STOP);
    
    hal_i2cStart();
    hal_i2cRead(_slaveAddress, readReg, 1, END_MODE_STOP);

    return readReg[ 0 ];
}

uint16_t accel5_readData(uint8_t reg)
{
    uint8_t writeReg[ 1 ];
    uint8_t readReg[ 2 ];
    uint16_t readData;
    
    writeReg[ 0 ] = reg;
    
    hal_i2cStart();
    hal_i2cWrite(_slaveAddress, writeReg, 1, END_MODE_RESTART);
    hal_i2cRead(_slaveAddress, readReg, 2, END_MODE_STOP);
    
    readData = readReg[ 1 ];
    readData = readData << 8;
    readData = readData | readReg[ 0 ];
    
    return readData;
}

int16_t accel5_getAxis(uint8_t axis)
{
    uint16_t axisData;
    
    axisData = accel5_readData( axis );
    axisData = axisData & 0x0FFF;
    
    if (axisData > 2047)
    {
        axisData = axisData - 4096;
    }
    return axisData;
}

uint32_t accel5_sensorTime()
{
    uint32_t sTime;
    uint8_t readTime0;
    uint8_t readTime1;
    uint8_t readTime2;
    
    readTime0 = accel5_readByte(_ACCEL5_REG_SENSOR_TIME_0);
    readTime1 = accel5_readByte(_ACCEL5_REG_SENSOR_TIME_1);
    readTime2 = accel5_readByte(_ACCEL5_REG_SENSOR_TIME_2);
    
    sTime = readTime2;
    sTime = sTime << 8;
    sTime = sTime | readTime1;
    sTime = sTime << 8;
    sTime = sTime | readTime0;
    sTime = (uint32_t)sTime * 312.5;
    
    return sTime;
}

float accel5_getTemperature()
{
    int8_t readData;
    float temp;
    
    readData = accel5_readByte(_ACCEL5_REG_TEMPERATURE);
    if(readData > 0x80)
    {
        readData = readData - 256;
    }
    temp = (readData * 0.5) + 33.0;
    
    return temp;
}

uint8_t accel5_init(uint8_t mode, uint8_t range)
{
    uint8_t deviceID;
    
    deviceID = accel5_readByte(_ACCEL5_REG_CHIP_ID);
    if (deviceID != _ACCEL5_CHIP_ID)
    {
        return DEVICE_ERROR;
    }
    
    accel5_writeByte(_ACCEL5_REG_ACC_CONGIG_0, mode);
    accel5_writeByte(_ACCEL5_REG_ACC_CONGIG_1, range);
    accel5_writeByte(_ACCEL5_REG_ACC_CONGIG_2, _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_2);
    
    accel5_writeByte(_ACCEL5_REG_INT_CONFIG_0, _ACCEL5_INT_CFG_0_DATA_RDY | 
                                               _ACCEL5_INT_CFG_0_GEN1_INT_STATUS |
                                               _ACCEL5_INT_CFG_0_GEN1_INT_STATUS |
                                               _ACCEL5_INT_CFG_0_ORIENTCH_INT );
                                               
    accel5_writeByte(_ACCEL5_REG_INT_CONFIG_1, _ACCEL5_INT_CFG_1_STEP_INT_ENABLE |
                                               _ACCEL5_INT_CFG_1_SINGLE_TAP_ENABLE |
                                               _ACCEL5_INT_CFG_1_DOUBLE_TAP_ENABLE |
                                               _ACCEL5_INT_CFG_1_ACTCH_INT_ENABLE );
    
    accel5_writeByte(_ACCEL5_REG_INT12_MAP, _ACCEL5_INT12_MAP_TAP_INT1 );
                                            
    accel5_writeByte(_ACCEL5_REG_ORIENTCH_CONFIG_0, _ACCEL5_ORIENT_X_AXIS_ENABLE |
                                                    _ACCEL5_ORIENT_Y_AXIS_ENABLE |
                                                    _ACCEL5_ORIENT_Z_AXIS_ENABLE |
                                                    _ACCEL5_ORIENT_DATA_SRC_ENABLE |
                                                    _ACCEL5_ORIENT_STABILITY_ENABLED_1 );

    accel5_writeByte(_ACCEL5_REG_GEN1_INT_CONFIG_0, _ACCEL5_GEN1_CFG0_ACT_X_ENABLE |
                                                    _ACCEL5_GEN1_CFG0_ACT_Y_ENABLE |
                                                    _ACCEL5_GEN1_CFG0_ACT_Z_ENABLE |
                                                    _ACCEL5_GEN1_CFG0_DATA_ENABLE |
                                                    _ACCEL5_GEN1_CFG0_HYST_24mg |
                                                    _ACCEL5_GEN1_CFG0_REFU_EVERYTIME );
                                                   
    accel5_writeByte(_ACCEL5_REG_GEN2_INT_CONFIG_0, _ACCEL5_GEN2_CFG0_ACT_X_ENABLE |
                                                    _ACCEL5_GEN2_CFG0_ACT_Y_ENABLE |
                                                    _ACCEL5_GEN2_CFG0_ACT_Z_ENABLE |
                                                    _ACCEL5_GEN2_CFG0_DATA_ENABLE |
                                                    _ACCEL5_GEN2_CFG0_HYST_24mg |
                                                    _ACCEL5_GEN2_CFG0_REFU_EVERYTIME );

    accel5_writeByte(_ACCEL5_REG_ACTCH_CONFIG_1, _ACCEL5_ACTCH_CFG0_X_AXIS_ENABLE |
                                                 _ACCEL5_ACTCH_CFG0_Y_AXIS_ENABLE |
                                                 _ACCEL5_ACTCH_CFG0_Z_AXIS_ENABLE |
                                                 _ACCEL5_ACTCH_CFG0_DATA_ENABLE |
                                                 _ACCEL5_ACTCH_CFG0_NPTS_POINT_32 );

    accel5_writeByte(_ACCEL5_REG_TAP_CONFIG_0, _ACCEL5_TAP_CFG0_USE_X_AXIS |
                                               _ACCEL5_TAP_CFG0_USE_Y_AXIS |
                                               _ACCEL5_TAP_CFG0_USE_Z_AXIS );
                                               
    accel5_writeByte(_ACCEL5_REG_TAP_CONFIG_1, _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_4 |
                                               _ACCEL5_TAP_CFG1_QUIET_SAMPLE_60 |
                                               _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_6 );
    
    return DEVICE_OK;
}

void accel5_softReset()
{
    accel5_writeByte(_ACCEL5_REG_CMD, _ACCEL5_CMD_SOFTWARE_RESET);
}










/* -------------------------------------------------------------------------- */
/*
  __accel5_driver.c

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