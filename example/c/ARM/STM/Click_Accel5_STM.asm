_systemInit:
;Click_Accel5_STM.c,35 :: 		void systemInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Accel5_STM.c,37 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_INT_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #7
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Accel5_STM.c,38 :: 		mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_PWM_PIN, _GPIO_INPUT );
MOVS	R2, #1
MOVS	R1, #6
MOVS	R0, #0
BL	_mikrobus_gpioInit+0
;Click_Accel5_STM.c,39 :: 		mikrobus_i2cInit( _MIKROBUS1, &_ACCEL5_I2C_CFG[0] );
MOVW	R0, #lo_addr(__ACCEL5_I2C_CFG+0)
MOVT	R0, #hi_addr(__ACCEL5_I2C_CFG+0)
MOV	R1, R0
MOVS	R0, #0
BL	_mikrobus_i2cInit+0
;Click_Accel5_STM.c,40 :: 		mikrobus_logInit( _LOG_USBUART_A, 9600 );
MOVW	R1, #9600
MOVS	R0, #32
BL	_mikrobus_logInit+0
;Click_Accel5_STM.c,41 :: 		mikrobus_logWrite(" --- System Init --- ", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr1_Click_Accel5_STM+0)
MOVT	R0, #hi_addr(?lstr1_Click_Accel5_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Accel5_STM.c,42 :: 		Delay_ms( 100 );
MOVW	R7, #20351
MOVT	R7, #18
NOP
NOP
L_systemInit0:
SUBS	R7, R7, #1
BNE	L_systemInit0
NOP
NOP
NOP
;Click_Accel5_STM.c,43 :: 		}
L_end_systemInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _systemInit
_applicationInit:
;Click_Accel5_STM.c,45 :: 		void applicationInit()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Accel5_STM.c,47 :: 		accel5_i2cDriverInit( (T_ACCEL5_P)&_MIKROBUS1_GPIO, (T_ACCEL5_P)&_MIKROBUS1_I2C, 0x15 );
MOVS	R2, #21
MOVW	R1, #lo_addr(__MIKROBUS1_I2C+0)
MOVT	R1, #hi_addr(__MIKROBUS1_I2C+0)
MOVW	R0, #lo_addr(__MIKROBUS1_GPIO+0)
MOVT	R0, #hi_addr(__MIKROBUS1_GPIO+0)
BL	_accel5_i2cDriverInit+0
;Click_Accel5_STM.c,49 :: 		accel5_softReset();
BL	_accel5_softReset+0
;Click_Accel5_STM.c,50 :: 		accel5_init(_ACCEL5_CFG_0_NORMAL_MODE, _ACCEL5_CFG_1_ACC_RANGE_4g);
MOVS	R1, __ACCEL5_CFG_1_ACC_RANGE_4g
MOVS	R0, __ACCEL5_CFG_0_NORMAL_MODE
BL	_accel5_init+0
;Click_Accel5_STM.c,51 :: 		Delay_100ms();
BL	_Delay_100ms+0
;Click_Accel5_STM.c,52 :: 		}
L_end_applicationInit:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationInit
_applicationTask:
;Click_Accel5_STM.c,54 :: 		void applicationTask()
SUB	SP, SP, #4
STR	LR, [SP, #0]
;Click_Accel5_STM.c,57 :: 		X_axisData = accel5_getAxis( _ACCEL5_X_AXIS );
MOVS	R0, __ACCEL5_X_AXIS
BL	_accel5_getAxis+0
MOVW	R1, #lo_addr(_X_axisData+0)
MOVT	R1, #hi_addr(_X_axisData+0)
STRH	R0, [R1, #0]
;Click_Accel5_STM.c,58 :: 		mikrobus_logWrite(" X axis : ", _LOG_TEXT );
MOVW	R0, #lo_addr(?lstr2_Click_Accel5_STM+0)
MOVT	R0, #hi_addr(?lstr2_Click_Accel5_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Accel5_STM.c,59 :: 		IntToStr(X_axisData, demoText);
MOVW	R0, #lo_addr(_X_axisData+0)
MOVT	R0, #hi_addr(_X_axisData+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Accel5_STM.c,60 :: 		mikrobus_logWrite(demoText, _LOG_LINE );
MOVS	R1, #2
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Accel5_STM.c,62 :: 		Y_axisData = accel5_getAxis( _ACCEL5_Y_AXIS );
MOVS	R0, __ACCEL5_Y_AXIS
BL	_accel5_getAxis+0
MOVW	R1, #lo_addr(_Y_axisData+0)
MOVT	R1, #hi_addr(_Y_axisData+0)
STRH	R0, [R1, #0]
;Click_Accel5_STM.c,63 :: 		mikrobus_logWrite(" Y axis : ", _LOG_TEXT );
MOVW	R0, #lo_addr(?lstr3_Click_Accel5_STM+0)
MOVT	R0, #hi_addr(?lstr3_Click_Accel5_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Accel5_STM.c,64 :: 		IntToStr(Y_axisData, demoText);
MOVW	R0, #lo_addr(_Y_axisData+0)
MOVT	R0, #hi_addr(_Y_axisData+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Accel5_STM.c,65 :: 		mikrobus_logWrite(demoText, _LOG_LINE );
MOVS	R1, #2
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Accel5_STM.c,67 :: 		Z_axisData = accel5_getAxis( _ACCEL5_Z_AXIS );
MOVS	R0, __ACCEL5_Z_AXIS
BL	_accel5_getAxis+0
MOVW	R1, #lo_addr(_Z_axisData+0)
MOVT	R1, #hi_addr(_Z_axisData+0)
STRH	R0, [R1, #0]
;Click_Accel5_STM.c,68 :: 		mikrobus_logWrite(" Z axis : ", _LOG_TEXT );
MOVW	R0, #lo_addr(?lstr4_Click_Accel5_STM+0)
MOVT	R0, #hi_addr(?lstr4_Click_Accel5_STM+0)
MOVS	R1, #1
BL	_mikrobus_logWrite+0
;Click_Accel5_STM.c,69 :: 		IntToStr(Z_axisData, demoText);
MOVW	R0, #lo_addr(_Z_axisData+0)
MOVT	R0, #hi_addr(_Z_axisData+0)
LDRSH	R0, [R0, #0]
MOVW	R1, #lo_addr(_demoText+0)
MOVT	R1, #hi_addr(_demoText+0)
BL	_IntToStr+0
;Click_Accel5_STM.c,70 :: 		mikrobus_logWrite(demoText, _LOG_LINE );
MOVS	R1, #2
MOVW	R0, #lo_addr(_demoText+0)
MOVT	R0, #hi_addr(_demoText+0)
BL	_mikrobus_logWrite+0
;Click_Accel5_STM.c,72 :: 		mikrobus_logWrite( "  ", _LOG_LINE );
MOVW	R0, #lo_addr(?lstr5_Click_Accel5_STM+0)
MOVT	R0, #hi_addr(?lstr5_Click_Accel5_STM+0)
MOVS	R1, #2
BL	_mikrobus_logWrite+0
;Click_Accel5_STM.c,73 :: 		Delay_ms( 500 );
MOVW	R7, #36223
MOVT	R7, #91
NOP
NOP
L_applicationTask2:
SUBS	R7, R7, #1
BNE	L_applicationTask2
NOP
NOP
NOP
;Click_Accel5_STM.c,74 :: 		}
L_end_applicationTask:
LDR	LR, [SP, #0]
ADD	SP, SP, #4
BX	LR
; end of _applicationTask
_main:
;Click_Accel5_STM.c,76 :: 		void main()
;Click_Accel5_STM.c,78 :: 		systemInit();
BL	_systemInit+0
;Click_Accel5_STM.c,79 :: 		applicationInit();
BL	_applicationInit+0
;Click_Accel5_STM.c,81 :: 		while (1)
L_main4:
;Click_Accel5_STM.c,83 :: 		applicationTask();
BL	_applicationTask+0
;Click_Accel5_STM.c,84 :: 		}
IT	AL
BAL	L_main4
;Click_Accel5_STM.c,85 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
