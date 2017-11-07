#include <stm32f4xx_hal.h>

int main(void)
{
	uint32_t i;
	HAL_Init();
	//LED init
	GPIO_InitTypeDef LED_Init;
	__HAL_RCC_GPIOD_CLK_ENABLE();
	LED_Init.Pin = GPIO_PIN_12 | GPIO_PIN_13 | GPIO_PIN_14 | GPIO_PIN_15; 
	LED_Init.Mode = GPIO_MODE_OUTPUT_PP;
	LED_Init.Pull = GPIO_NOPULL;
	LED_Init.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOD, &LED_Init);
	//Input init
	GPIO_InitTypeDef INPUT_Init;
	INPUT_Init.Pin = GPIO_PIN_0;
	INPUT_Init.Mode = GPIO_MODE_INPUT;
	INPUT_Init.Pull = GPIO_NOPULL;
	INPUT_Init.Speed = GPIO_SPEED_FREQ_LOW;
	HAL_GPIO_Init(GPIOD, &INPUT_Init);
	
	
	while(1)
	{
		if (HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_0) == 0)
		{
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,1);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,0);
			for(i=0; i<1000000; i++);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,1);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,0);
			for(i=0; i<1000000; i++);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,1);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,0);
			for(i=0; i<1000000; i++);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,1);
			for(i=0; i<1000000; i++);
		}
		else
		{
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,1);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,0);
			for(i=0; i<1000000; i++);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,1);
			for(i=0; i<1000000; i++);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,1);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,0);
			for(i=0; i<1000000; i++);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,1);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,0);
			HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,0);
			for(i=0; i<1000000; i++);
		}
		
		
	}
}

