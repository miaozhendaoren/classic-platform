/*
* Configuration of module: Dio (Dio_Lcfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.0
*
* Generated by Arctic Studio (http://arccore.com) 
*           on Sat Jun 18 21:14:51 CEST 2011
*/


	
#include "Dio.h"
#include "Dio_Cfg.h"

const Dio_ChannelType DioChannelConfigData[] = { 
	DIO_CHANNEL_NAME_DI_PH0,
	DIO_CHANNEL_NAME_DI_PH1,
	DIO_CHANNEL_NAME_DI_PH2,
	DIO_CHANNEL_NAME_DI_PH3,
	DIO_CHANNEL_NAME_DI_PH4,
	DIO_CHANNEL_NAME_DI_PH5,
	DIO_CHANNEL_NAME_DI_PH6,
	DIO_CHANNEL_NAME_DI_PH7,
	DIO_CHANNEL_NAME_DO_PB0,
	DIO_CHANNEL_NAME_DO_PB1,
	DIO_CHANNEL_NAME_DO_PB2,
	DIO_CHANNEL_NAME_DO_PB3,
	DIO_CHANNEL_NAME_DO_PB4,
	DIO_CHANNEL_NAME_DO_PB5,
	DIO_CHANNEL_NAME_DO_PB6,
	DIO_CHANNEL_NAME_DO_PB7,
	DIO_CHANNEL_NAME_DI_PT0,
	DIO_CHANNEL_NAME_DI_PT1,
	DIO_CHANNEL_NAME_DO_PT2,
	DIO_CHANNEL_NAME_RedLED,
	DIO_END_OF_LIST
};

const Dio_PortType DioPortConfigData[] = { 
	DIO_PORT_NAME_DipSwitch,  
	DIO_PORT_NAME_LEDBar,  
	DIO_PORT_NAME_Timer,  
	DIO_PORT_NAME_PWMPort,  
	DIO_END_OF_LIST
};

const Dio_ChannelGroupType DioConfigData[] = { 
	{ 
	  .port = DIO_PORT_NAME_DipSwitch,
	  .mask = 255, 
	  .offset = 0, 
	},   
	{ 
	  .port = DIO_PORT_NAME_LEDBar,
	  .mask = 255, 
	  .offset = 0, 
	},  
	{ 
	  .port = DIO_END_OF_LIST, 
	  .offset = DIO_END_OF_LIST, 
	  .mask = DIO_END_OF_LIST, 
	}
};


uint32 Dio_GetPortConfigSize(void)
{
  return sizeof(DioConfigData);
}
