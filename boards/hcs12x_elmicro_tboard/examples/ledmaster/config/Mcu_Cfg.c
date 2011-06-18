/*
* Configuration of module: Mcu (Mcu_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.3
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Sat Jun 18 21:14:51 CEST 2011
*/


#ifndef MCU_CFG_C_
#define MCU_CFG_C_

#include "Mcu.h"


Mcu_RamSectorSettingConfigType Mcu_RamSectorSettingConfigData[] = {
};

Mcu_ClockSettingConfigType Mcu_ClockSettingConfigData[] =
{
  {
    .McuClockReferencePointFrequency = 16000000UL,
    .Pll1    = 1,
  	.Pll2    = 2,
  },
};


const Mcu_ConfigType McuConfigData[] = {
  {
	.McuClockSrcFailureNotification = 0,
	.McuRamSectors = MCU_NBR_OF_RAM_SECTIONS,
	.McuClockSettings = 1,
	.McuDefaultClockSettings = 0,
	.McuClockSettingConfig = &Mcu_ClockSettingConfigData[0],
	.McuRamSectorSettingConfig = &Mcu_RamSectorSettingConfigData[0],
  }
};

#endif /*MCU_CFG_C_*/
