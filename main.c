#include <stm32f4xx.h>
#include <stm32f4xx_hal.h>


void configGPIO(void);


int main (void)
{
configGPIO();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}

void configGPIO()
{
	GPIO_InitTypeDef CAN1_Init;
	CAN1_Init.Pin = GPIO_PIN_5 | GPIO_PIN_13;
	CAN1_Init.Mode = GPIO_MODE_AF_PP;
	CAN1_Init.Speed = GPIO_SPEED_FAST;
	CAN1_Init.Pull = GPIO_PULLUP;
	CAN1_Init.Alternate = GPIO_AF9_CAN2;
	HAL_GPIO_Init(GPIOB, &CAN1_Init);
	
	GPIO_InitTypeDef CAN2_Init;
	CAN2_Init.Pin = GPIO_PIN_11 | GPIO_PIN_12;
	CAN2_Init.Mode = GPIO_MODE_AF_PP;
	CAN2_Init.Speed = GPIO_SPEED_FAST;
	CAN2_Init.Pull = GPIO_PULLUP;
	CAN2_Init.Alternate = GPIO_AF9_CAN1;
	HAL_GPIO_Init(GPIOA, &CAN2_Init);
	
	GPIO_InitTypeDef PressureSensor_Init;
	PressureSensor_Init.Pin = GPIO_PIN_1;
	PressureSensor_Init.Mode = GPIO_MODE_ANALOG;
	PressureSensor_Init.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOA, &PressureSensor_Init);
	
	GPIO_InitTypeDef FlowMeter_Init;
	FlowMeter_Init.Pin = GPIO_PIN_8;
	FlowMeter_Init.Mode = GPIO_MODE_INPUT;
	FlowMeter_Init.Pull = GPIO_NOPULL;
	HAL_GPIO_Init(GPIOA, &FlowMeter_Init);
	return;
}

void CAN_Init()
{
	return;
}