/*=====================================================================================================*/
/*=====================================================================================================*/
#include "drivers\stm32f0_system.h"
#include "modules\module_serial.h"

#include "beanSproutM.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
void UART_RecvEven( void )
{
  uint8_t recvData = Serial_RecvByte();
  if(recvData == 0x0D)
    Serial_SendStr("\r\n");
  else
    Serial_SendByte(recvData);
}

void BSM_Init( void )
{
  SystemInit();
  HAL_InitTick();

  BSM_GPIO_Config();
  BSM_UART_Config(UART_RecvEven);
}
/*=====================================================================================================*/
/*=====================================================================================================*/
void BSM_Loop( void )
{
  while(1) {

  }
}
/*=====================================================================================================*/
/*=====================================================================================================*/