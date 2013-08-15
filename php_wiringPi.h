/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef PHP_WIRINGPI_H
#define PHP_WIRINGPI_H

extern zend_module_entry wiringPi_module_entry;
#define phpext_wiringPi_ptr &wiringPi_module_entry

#ifdef PHP_WIN32
# define PHP_WIRINGPI_API __declspec(dllexport)
#else
# define PHP_WIRINGPI_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(wiringPi);
PHP_MSHUTDOWN_FUNCTION(wiringPi);
PHP_RINIT_FUNCTION(wiringPi);
PHP_RSHUTDOWN_FUNCTION(wiringPi);
PHP_MINFO_FUNCTION(wiringPi);

ZEND_NAMED_FUNCTION(_wrap_drcSetupSerial);
ZEND_NAMED_FUNCTION(_wrap_max31855Setup);
ZEND_NAMED_FUNCTION(_wrap_max5322Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp23008Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp23016Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp23017Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp23s08Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp23s17Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp3002Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp3004Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp3422Setup);
ZEND_NAMED_FUNCTION(_wrap_mcp4802Setup);
ZEND_NAMED_FUNCTION(_wrap_pcf8574Setup);
ZEND_NAMED_FUNCTION(_wrap_pcf8591Setup);
ZEND_NAMED_FUNCTION(_wrap_sn3218Setup);
ZEND_NAMED_FUNCTION(_wrap_softPwmCreate);
ZEND_NAMED_FUNCTION(_wrap_softPwmWrite);
ZEND_NAMED_FUNCTION(_wrap_softToneCreate);
ZEND_NAMED_FUNCTION(_wrap_softToneWrite);
ZEND_NAMED_FUNCTION(_wrap_sr595Setup);
ZEND_NAMED_FUNCTION(_wrap_wiringPiI2CRead);
ZEND_NAMED_FUNCTION(_wrap_wiringPiI2CReadReg8);
ZEND_NAMED_FUNCTION(_wrap_wiringPiI2CReadReg16);
ZEND_NAMED_FUNCTION(_wrap_wiringPiI2CWrite);
ZEND_NAMED_FUNCTION(_wrap_wiringPiI2CWriteReg8);
ZEND_NAMED_FUNCTION(_wrap_wiringPiI2CWriteReg16);
ZEND_NAMED_FUNCTION(_wrap_wiringPiI2CSetupInterface);
ZEND_NAMED_FUNCTION(_wrap_wiringPiI2CSetup);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pinBase_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pinBase_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pinMax_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pinMax_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_fd_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_fd_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_data0_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_data0_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_data1_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_data1_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_data2_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_data2_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_data3_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_data3_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pinMode_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pinMode_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pullUpDnControl_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pullUpDnControl_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_digitalRead_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_digitalRead_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_digitalWrite_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_digitalWrite_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pwmWrite_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_pwmWrite_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_analogRead_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_analogRead_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_analogWrite_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_analogWrite_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_next_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodeStruct_next_get);
ZEND_NAMED_FUNCTION(_wrap_new_wiringPiNodeStruct);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodes_set);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNodes_get);
ZEND_NAMED_FUNCTION(_wrap_wiringPiFailure);
ZEND_NAMED_FUNCTION(_wrap_wiringPiFindNode);
ZEND_NAMED_FUNCTION(_wrap_wiringPiNewNode);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSetup);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSetupSys);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSetupGpio);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSetupPhys);
ZEND_NAMED_FUNCTION(_wrap_pinModeAlt);
ZEND_NAMED_FUNCTION(_wrap_pinMode);
ZEND_NAMED_FUNCTION(_wrap_pullUpDnControl);
ZEND_NAMED_FUNCTION(_wrap_digitalRead);
ZEND_NAMED_FUNCTION(_wrap_digitalWrite);
ZEND_NAMED_FUNCTION(_wrap_pwmWrite);
ZEND_NAMED_FUNCTION(_wrap_analogRead);
ZEND_NAMED_FUNCTION(_wrap_analogWrite);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSetupPiFace);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSetupPiFaceForGpioProg);
ZEND_NAMED_FUNCTION(_wrap_piBoardRev);
ZEND_NAMED_FUNCTION(_wrap_wpiPinToGpio);
ZEND_NAMED_FUNCTION(_wrap_physPinToGpio);
ZEND_NAMED_FUNCTION(_wrap_setPadDrive);
ZEND_NAMED_FUNCTION(_wrap_getAlt);
ZEND_NAMED_FUNCTION(_wrap_digitalWriteByte);
ZEND_NAMED_FUNCTION(_wrap_pwmSetMode);
ZEND_NAMED_FUNCTION(_wrap_pwmSetRange);
ZEND_NAMED_FUNCTION(_wrap_pwmSetClock);
ZEND_NAMED_FUNCTION(_wrap_gpioClockSet);
ZEND_NAMED_FUNCTION(_wrap_waitForInterrupt);
ZEND_NAMED_FUNCTION(_wrap_wiringPiISR);
ZEND_NAMED_FUNCTION(_wrap_piThreadCreate);
ZEND_NAMED_FUNCTION(_wrap_piLock);
ZEND_NAMED_FUNCTION(_wrap_piUnlock);
ZEND_NAMED_FUNCTION(_wrap_piHiPri);
ZEND_NAMED_FUNCTION(_wrap_delay);
ZEND_NAMED_FUNCTION(_wrap_delayMicroseconds);
ZEND_NAMED_FUNCTION(_wrap_millis);
ZEND_NAMED_FUNCTION(_wrap_micros);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSPIGetFd);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSPIDataRW);
ZEND_NAMED_FUNCTION(_wrap_wiringPiSPISetup);
ZEND_NAMED_FUNCTION(_wrap_serialOpen);
ZEND_NAMED_FUNCTION(_wrap_serialClose);
ZEND_NAMED_FUNCTION(_wrap_serialFlush);
ZEND_NAMED_FUNCTION(_wrap_serialPutchar);
ZEND_NAMED_FUNCTION(_wrap_serialPuts);
ZEND_NAMED_FUNCTION(_wrap_serialPrintf);
ZEND_NAMED_FUNCTION(_wrap_serialDataAvail);
ZEND_NAMED_FUNCTION(_wrap_serialGetchar);
ZEND_NAMED_FUNCTION(_wrap_shiftIn);
ZEND_NAMED_FUNCTION(_wrap_shiftOut);
#endif /* PHP_WIRINGPI_H */