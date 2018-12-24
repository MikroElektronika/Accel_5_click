#line 1 "D:/Clicks_git/Accel_5_Click/SW/example/c/ARM/STM/Click_Accel5_STM.c"
#line 1 "d:/clicks_git/accel_5_click/sw/example/c/arm/stm/click_accel5_types.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"





typedef signed char int8_t;
typedef signed int int16_t;
typedef signed long int int32_t;
typedef signed long long int64_t;


typedef unsigned char uint8_t;
typedef unsigned int uint16_t;
typedef unsigned long int uint32_t;
typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef signed int int_least16_t;
typedef signed long int int_least32_t;
typedef signed long long int_least64_t;


typedef unsigned char uint_least8_t;
typedef unsigned int uint_least16_t;
typedef unsigned long int uint_least32_t;
typedef unsigned long long uint_least64_t;



typedef signed long int int_fast8_t;
typedef signed long int int_fast16_t;
typedef signed long int int_fast32_t;
typedef signed long long int_fast64_t;


typedef unsigned long int uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long long uint_fast64_t;


typedef signed long int intptr_t;
typedef unsigned long int uintptr_t;


typedef signed long long intmax_t;
typedef unsigned long long uintmax_t;
#line 1 "d:/clicks_git/accel_5_click/sw/example/c/arm/stm/click_accel5_config.h"
#line 1 "d:/clicks_git/accel_5_click/sw/example/c/arm/stm/click_accel5_types.h"
#line 19 "d:/clicks_git/accel_5_click/sw/example/c/arm/stm/click_accel5_config.h"
const uint32_t _ACCEL5_I2C_CFG[ 1 ] =
{
 100000
};
#line 1 "d:/clicks_git/accel_5_click/sw/library/__accel5_driver.h"
#line 1 "c:/users/public/documents/mikroelektronika/mikroc pro for arm/include/stdint.h"
#line 57 "d:/clicks_git/accel_5_click/sw/library/__accel5_driver.h"
extern const uint8_t _ACCEL5_CHIP_ID;


extern const uint8_t _ACCEL5_REG_CHIP_ID ;
extern const uint8_t _ACCEL5_REG_ERR_REG ;
extern const uint8_t _ACCEL5_REG_STATUS ;
extern const uint8_t _ACCEL5_REG_ACC_X_LSB ;
extern const uint8_t _ACCEL5_REG_ACC_X_MSB ;
extern const uint8_t _ACCEL5_REG_ACC_Y_LSB ;
extern const uint8_t _ACCEL5_REG_ACC_Y_MSB ;
extern const uint8_t _ACCEL5_REG_ACC_Z_LSB ;
extern const uint8_t _ACCEL5_REG_ACC_Z_MSB ;
extern const uint8_t _ACCEL5_REG_SENSOR_TIME_0 ;
extern const uint8_t _ACCEL5_REG_SENSOR_TIME_1 ;
extern const uint8_t _ACCEL5_REG_SENSOR_TIME_2 ;
extern const uint8_t _ACCEL5_REG_EVENT ;
extern const uint8_t _ACCEL5_REG_INT_STATUS_0 ;
extern const uint8_t _ACCEL5_REG_INT_STATUS_1 ;
extern const uint8_t _ACCEL5_REG_INT_STATUS_2 ;
extern const uint8_t _ACCEL5_REG_TEMPERATURE ;
extern const uint8_t _ACCEL5_REG_FIFO_LENGTH_0 ;
extern const uint8_t _ACCEL5_REG_FIFO_LENGTH_1 ;
extern const uint8_t _ACCEL5_REG_FIFO_DATA ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_0 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_1 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_2 ;
extern const uint8_t _ACCEL5_REG_STEP_STATUS ;
extern const uint8_t _ACCEL5_REG_ACC_CONGIG_0 ;
extern const uint8_t _ACCEL5_REG_ACC_CONGIG_1 ;
extern const uint8_t _ACCEL5_REG_ACC_CONGIG_2 ;
extern const uint8_t _ACCEL5_REG_INT_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_INT_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_INT1_MAP ;
extern const uint8_t _ACCEL5_REG_INT2_MAP ;
extern const uint8_t _ACCEL5_REG_INT12_MAP ;
extern const uint8_t _ACCEL5_REG_INT12_IO_CTRL ;
extern const uint8_t _ACCEL5_REG_FIFO_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_FIFO_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_FIFO_CONFIG_2 ;
extern const uint8_t _ACCEL5_REG_FIFO_PWR_CONFIG ;
extern const uint8_t _ACCEL5_REG_AUTO_LOW_POW_0 ;
extern const uint8_t _ACCEL5_REG_AUTO_LOW_POW_1 ;
extern const uint8_t _ACCEL5_REG_AUTO_WAKEUP_0 ;
extern const uint8_t _ACCEL5_REG_AUTO_WAKEUP_1 ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_2 ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_3 ;
extern const uint8_t _ACCEL5_REG_WAKEUP_CONFIG_4 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_2 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_3 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_4 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_5 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_6 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_7 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_8 ;
extern const uint8_t _ACCEL5_REG_ORIENTCH_CONFIG_9 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_2 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_3 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_31 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_4 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_5 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_6 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_7 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_8 ;
extern const uint8_t _ACCEL5_REG_GEN1_INT_CONFIG_9 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_2 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_3 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_31 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_4 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_5 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_6 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_7 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_8 ;
extern const uint8_t _ACCEL5_REG_GEN2_INT_CONFIG_9 ;
extern const uint8_t _ACCEL5_REG_ACTCH_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_ACTCH_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_TAP_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_TAP_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_0 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_1 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_2 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_3 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_4 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_5 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_6 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_7 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_8 ;
extern const uint8_t _ACCEL5_REG_STEP_CNT_CONFIG_9 ;
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
extern const uint8_t _ACCEL5_REG_IF_CONFIG ;
extern const uint8_t _ACCEL5_REG_SELF_TEST ;
extern const uint8_t _ACCEL5_REG_CMD ;


extern const uint8_t _ACCEL5_ERROR_CMD;


extern const uint8_t _ACCEL5_STATUS_DATA_RDY_START ;
extern const uint8_t _ACCEL5_STATUS_RDY_CMD ;
extern const uint8_t _ACCEL5_STATUS_NORMAL_MODE ;
extern const uint8_t _ACCEL5_STATUS_LOW_POWER_MODE ;
extern const uint8_t _ACCEL5_STATUS_SLEEP_MODE ;
extern const uint8_t _ACCEL5_STATUS_INT_ACTIVE_TRIGGERED ;
extern const uint8_t _ACCEL5_STATUS_INT_ACTIVE_NOT_TRIGGERED ;


extern const uint8_t _ACCEL5_EVENT_POR_DETECTED;


extern const uint8_t _ACCEL5_INT_STATUS_0_DATA_RDY_STATUS ;
extern const uint8_t _ACCEL5_INT_STATUS_0_FIFO_WATERMARK ;
extern const uint8_t _ACCEL5_INT_STATUS_0_FIFO_FULL ;
extern const uint8_t _ACCEL5_INT_STATUS_0_IENG_OVERRUN_STATUS ;
extern const uint8_t _ACCEL5_INT_STATUS_0_GEN2_INT_STATUS ;
extern const uint8_t _ACCEL5_INT_STATUS_0_GEN1_INT_STATUS ;
extern const uint8_t _ACCEL5_INT_STATUS_0_ORIENTCH_INT_STATUS ;
extern const uint8_t _ACCEL5_INT_STATUS_0_WAKEUP_INT_STATUS ;


extern const uint8_t _ACCEL5_INT_STATUS_1_IENG_OVERRUN_STATUS;
extern const uint8_t _ACCEL5_INT_STATUS_1_DOUBLE_TAP ;
extern const uint8_t _ACCEL5_INT_STATUS_1_SINGLE_TAP ;
extern const uint8_t _ACCEL5_INT_STATUS_1_STEP_NO_SET ;
extern const uint8_t _ACCEL5_INT_STATUS_1_STEP_SET ;
extern const uint8_t _ACCEL5_INT_STATUS_1_STEP_DETECT ;
extern const uint8_t _ACCEL5_INT_STATUS_1_STEP_NO_USED ;


extern const uint8_t _ACCEL5_INT_STATUS_2_IENG_OVERRUN_STATUS;
extern const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_Z_INIT_STATUS;
extern const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_Y_INIT_STATUS;
extern const uint8_t _ACCEL5_INT_STATUS_2_ACTCH_X_INIT_STATUS;


extern const uint8_t _ACCEL5_STEP_STATUS_WALKING ;
extern const uint8_t _ACCEL5_STEP_STATUS_RUNNING ;
extern const uint8_t _ACCEL5_STEP_STATUS_NO_WALK_RUN;


extern const uint8_t _ACCEL5_CFG_0_FILT1_BW_LOW_0_2X_ODR ;
extern const uint8_t _ACCEL5_CFG_0_FILT1_BW_HIGH_0_4X_ODR;
extern const uint8_t _ACCEL5_CFG_0_SLEEP_MODE ;
extern const uint8_t _ACCEL5_CFG_0_LOW_POWER_MODE ;
extern const uint8_t _ACCEL5_CFG_0_NORMAL_MODE ;


extern const uint8_t _ACCEL5_CFG_1_ACC_RANGE_2g ;
extern const uint8_t _ACCEL5_CFG_1_ACC_RANGE_4g ;
extern const uint8_t _ACCEL5_CFG_1_ACC_RANGE_8g ;
extern const uint8_t _ACCEL5_CFG_1_ACC_RANGE_16g ;
extern const uint8_t _ACCEL5_CFG_1_OSR_LOW_POWER ;
extern const uint8_t _ACCEL5_CFG_1_OSR_HIGH_POWER;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_5 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_4 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_3 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_2 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5_1 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_12p5 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_25 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_50 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_100 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_200 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_400 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800_1 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800_2 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800_3 ;
extern const uint8_t _ACCEL5_CFG_1_ODR_800_4 ;


extern const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_1 ;
extern const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_2 ;
extern const uint8_t _ACCEL5_CFG_2_DATA_SCR_ACC_FILT_LP;


extern const uint8_t _ACCEL5_INT_CFG_0_DATA_RDY ;
extern const uint8_t _ACCEL5_INT_CFG_0_FIFO_WATERMARK ;
extern const uint8_t _ACCEL5_INT_CFG_0_FIFO_FULL ;
extern const uint8_t _ACCEL5_INT_CFG_0_GEN2_INT_STATUS;
extern const uint8_t _ACCEL5_INT_CFG_0_GEN1_INT_STATUS;
extern const uint8_t _ACCEL5_INT_CFG_0_ORIENTCH_INT ;


extern const uint8_t _ACCEL5_INT_CFG_1_LATCH_MODE_NOLATCH ;
extern const uint8_t _ACCEL5_INT_CFG_1_LATCH_MODE_LATCHING;
extern const uint8_t _ACCEL5_INT_CFG_1_ACTCH_INT_ENABLE ;
extern const uint8_t _ACCEL5_INT_CFG_1_DOUBLE_TAP_ENABLE ;
extern const uint8_t _ACCEL5_INT_CFG_1_SINGLE_TAP_ENABLE ;
extern const uint8_t _ACCEL5_INT_CFG_1_STEP_INT_ENABLE ;


extern const uint8_t _ACCEL5_INT1_MAP_DATA_RDY_STATUS ;
extern const uint8_t _ACCEL5_INT1_MAP_FIFO_WATERMARK ;
extern const uint8_t _ACCEL5_INT1_MAP_FIFO_FULL ;
extern const uint8_t _ACCEL5_INT1_MAP_IENG_OVERRUN_STATUS ;
extern const uint8_t _ACCEL5_INT1_MAP_GEN2_INT_STATUS ;
extern const uint8_t _ACCEL5_INT1_MAP_GEN1_INT_STATUS ;
extern const uint8_t _ACCEL5_INT1_MAP_ORIENTCH_INT_STATUS ;
extern const uint8_t _ACCEL5_INT1_MAP_WAKEUP_INT_STATUS ;


extern const uint8_t _ACCEL5_INT2_MAP_DATA_RDY_STATUS ;
extern const uint8_t _ACCEL5_INT2_MAP_FIFO_WATERMARK ;
extern const uint8_t _ACCEL5_INT2_MAP_FIFO_FULL ;
extern const uint8_t _ACCEL5_INT2_MAP_IENG_OVERRUN_STATUS ;
extern const uint8_t _ACCEL5_INT2_MAP_GEN2_INT_STATUS ;
extern const uint8_t _ACCEL5_INT2_MAP_GEN1_INT_STATUS ;
extern const uint8_t _ACCEL5_INT2_MAP_ORIENTCH_INT_STATUS ;
extern const uint8_t _ACCEL5_INT2_MAP_WAKEUP_INT_STATUS ;


extern const uint8_t _ACCEL5_INT12_MAP_ACTCH_INT2;
extern const uint8_t _ACCEL5_INT12_MAP_TAP_INT2 ;
extern const uint8_t _ACCEL5_INT12_MAP_STEP_INT2 ;
extern const uint8_t _ACCEL5_INT12_MAP_ACTCH_INT1;
extern const uint8_t _ACCEL5_INT12_MAP_TAP_INT1 ;
extern const uint8_t _ACCEL5_INT12_MAP_STEP_INT1 ;


const uint8_t _ACCEL5_INT12_CTRL_INT2_OPEN_DRAIN ;
const uint8_t _ACCEL5_INT12_CTRL_INT1_OPEN_DRAIN ;
const uint8_t _ACCEL5_INT12_CTRL_INT2_HIGH_ACTIVE;
const uint8_t _ACCEL5_INT12_CTRL_INT1_HIGH_ACTIVE;


extern const uint8_t _ACCEL5_FIFO_CFG0_Z_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_FIFO_CFG0_Y_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_FIFO_CFG0_X_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_FIFO_CFG0_8bit_ENABLE ;
extern const uint8_t _ACCEL5_FIFO_CFG0_DATA_SRC_ENABLE ;
extern const uint8_t _ACCEL5_FIFO_CFG0_TIME_ENABLE ;
extern const uint8_t _ACCEL5_FIFO_CFG0_STOP_NO_FULL_ENABLE;
extern const uint8_t _ACCEL5_FIFO_CFG0_AUTO_FLUSH_ENABLE ;


extern const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_0 ;
extern const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_1 ;
extern const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_2 ;
extern const uint8_t _ACCEL5_FIFO_AUTO_IP_TIMEOUT_3 ;
extern const uint8_t _ACCEL5_FIFO_AUTO_TRIG_GEN1_INT;
extern const uint8_t _ACCEL5_FIFO_AUTO_TRIG_DATA_RDY;


extern const uint8_t _ACCEL5_WAKEUP_TIMEOUT_ENABLE;
extern const uint8_t _ACCEL5_WAKEUP_ENABLE ;


extern const uint8_t _ACCEL5_WAKEUP_Z_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_WAKEUP_Y_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_WAKEUP_X_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_WAKEUP_NUMBER_OF_SIMPLE;
extern const uint8_t _ACCEL5_WAKEUP_REFU_MANUAL ;
extern const uint8_t _ACCEL5_WAKEUP_REFU_ONETIME ;
extern const uint8_t _ACCEL5_WAKEUP_REFU_EVERYTIME ;


extern const uint8_t _ACCEL5_ORIENT_Z_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ORIENT_Y_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ORIENT_X_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ORIENT_DATA_SRC_ENABLE ;
extern const uint8_t _ACCEL5_ORIENT_REFU_MANUAL ;
extern const uint8_t _ACCEL5_ORIENT_REFU_ONETIME_2 ;
extern const uint8_t _ACCEL5_ORIENT_REFU_ONETIME_IP ;
extern const uint8_t _ACCEL5_ORIENT_STABILITY_INACTIVE ;
extern const uint8_t _ACCEL5_ORIENT_STABILITY_ENABLED_1;
extern const uint8_t _ACCEL5_ORIENT_STABILITY_ENABLED_2;


extern const uint8_t _ACCEL5_GEN1_CFG0_ACT_Z_ENABLE ;
extern const uint8_t _ACCEL5_GEN1_CFG0_ACT_Y_ENABLE ;
extern const uint8_t _ACCEL5_GEN1_CFG0_ACT_X_ENABLE ;
extern const uint8_t _ACCEL5_GEN1_CFG0_DATA_ENABLE ;
extern const uint8_t _ACCEL5_GEN1_CFG0_REFU_MANUAL ;
extern const uint8_t _ACCEL5_GEN1_CFG0_REFU_ONETIME ;
extern const uint8_t _ACCEL5_GEN1_CFG0_REFU_EVERYTIME;
extern const uint8_t _ACCEL5_GEN1_CFG0_HYST_24mg ;
extern const uint8_t _ACCEL5_GEN1_CFG0_HYST_48mg ;
extern const uint8_t _ACCEL5_GEN1_CFG0_HYST_96mg ;
extern const uint8_t _ACCEL5_GEN1_CFG0_HYST_NO_ACTIVE;


extern const uint8_t _ACCEL5_GEN1_CFG1_CRITERION_SEL_ACTIVE ;
extern const uint8_t _ACCEL5_GEN1_CFG1_CRITERION_SEL_INACTIVE;
extern const uint8_t _ACCEL5_GEN1_CFG1_COMB_SEL_AND ;
extern const uint8_t _ACCEL5_GEN1_CFG1_COMB_SEL_OR ;


extern const uint8_t _ACCEL5_GEN2_CFG0_ACT_Z_ENABLE ;
extern const uint8_t _ACCEL5_GEN2_CFG0_ACT_Y_ENABLE ;
extern const uint8_t _ACCEL5_GEN2_CFG0_ACT_X_ENABLE ;
extern const uint8_t _ACCEL5_GEN2_CFG0_DATA_ENABLE ;
extern const uint8_t _ACCEL5_GEN2_CFG0_REFU_MANUAL ;
extern const uint8_t _ACCEL5_GEN2_CFG0_REFU_ONETIME ;
extern const uint8_t _ACCEL5_GEN2_CFG0_REFU_EVERYTIME;
extern const uint8_t _ACCEL5_GEN2_CFG0_HYST_24mg ;
extern const uint8_t _ACCEL5_GEN2_CFG0_HYST_48mg ;
extern const uint8_t _ACCEL5_GEN2_CFG0_HYST_96mg ;
extern const uint8_t _ACCEL5_GEN2_CFG0_HYST_NO_ACTIVE;


extern const uint8_t _ACCEL5_GEN2_CFG1_CRITERION_SEL_ACTIVE ;
extern const uint8_t _ACCEL5_GEN2_CFG1_CRITERION_SEL_INACTIVE;
extern const uint8_t _ACCEL5_GEN2_CFG1_COMB_SEL_AND ;
extern const uint8_t _ACCEL5_GEN2_CFG1_COMB_SEL_OR ;


extern const uint8_t _ACCEL5_ACTCH_CFG0_Z_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_Y_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_X_AXIS_ENABLE ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_DATA_ENABLE ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_32 ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_64 ;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_128;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_256;
extern const uint8_t _ACCEL5_ACTCH_CFG0_NPTS_POINT_512;


extern const uint8_t _ACCEL5_TAP_CFG0_USE_Z_AXIS ;
extern const uint8_t _ACCEL5_TAP_CFG0_USE_Y_AXIS ;
extern const uint8_t _ACCEL5_TAP_CFG0_USE_X_AXIS ;
extern const uint8_t _ACCEL5_TAP_CFG0_TAP_SEL_HIGH;
extern const uint8_t _ACCEL5_TAP_CFG0_TAP_SEL_LOW ;


extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_4 ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_8 ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_12;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_DT_SAMPLE_16;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_60 ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_80 ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_100 ;
extern const uint8_t _ACCEL5_TAP_CFG1_QUIET_SAMPLE_120 ;
extern const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_6 ;
extern const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_9 ;
extern const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_12 ;
extern const uint8_t _ACCEL5_TAP_CFG1_TICS_TH_SAMPLE_18 ;


extern const uint8_t _ACCEL5_IF_CONFIG_SPI_4_WIRE;
extern const uint8_t _ACCEL5_IF_CONFIG_SPI_3_WIRE;


extern const uint8_t _ACCEL5_TEST_SIGN_ENABLE ;
extern const uint8_t _ACCEL5_TEST_Z_AXIS_ENABLE;
extern const uint8_t _ACCEL5_TEST_Y_AXIS_ENABLE;
extern const uint8_t _ACCEL5_TEST_X_AXIS_ENABLE;


extern const uint8_t _ACCEL5_CMD_FIFO_FLUSH ;
extern const uint8_t _ACCEL5_CMD_STEP_CNT_CLEAR;
extern const uint8_t _ACCEL5_CMD_SOFTWARE_RESET;


extern const uint8_t _ACCEL5_X_AXIS;
extern const uint8_t _ACCEL5_Y_AXIS;
extern const uint8_t _ACCEL5_Z_AXIS;
#line 447 "d:/clicks_git/accel_5_click/sw/library/__accel5_driver.h"
void accel5_i2cDriverInit( const uint8_t*  gpioObj,  const uint8_t*  i2cObj, uint8_t slave);
#line 454 "d:/clicks_git/accel_5_click/sw/library/__accel5_driver.h"
void accel5_gpioDriverInit( const uint8_t*  gpioObj);



void accel5_writeByte(uint8_t reg, uint8_t _data);

uint8_t accel5_readByte(uint8_t reg);

uint16_t accel5_readData(uint8_t reg);

int16_t accel5_getAxis(uint8_t axis);

uint32_t accel5_sensorTime();

float accel5_getTemperature();

uint8_t accel5_init(uint8_t mode, uint8_t range);

void accel5_softReset();

uint8_t accel5_tapDetect();
#line 30 "D:/Clicks_git/Accel_5_Click/SW/example/c/ARM/STM/Click_Accel5_STM.c"
int16_t X_axisData;
int16_t Y_axisData;
int16_t Z_axisData;
char demoText[50] = {0};

void systemInit()
{
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
 mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_INPUT );
 mikrobus_i2cInit( _MIKROBUS1, &_ACCEL5_I2C_CFG[0] );
 mikrobus_logInit( _LOG_USBUART_A, 9600 );
 mikrobus_logWrite(" --- System Init --- ", _LOG_LINE );
 Delay_ms( 100 );
}

void applicationInit()
{
 accel5_i2cDriverInit( ( const uint8_t* )&_MIKROBUS1_GPIO, ( const uint8_t* )&_MIKROBUS1_I2C, 0x15 );

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
