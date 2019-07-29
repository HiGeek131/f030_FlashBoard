#include "encoder.h"

char encoder_sta(void)
{
    if (HAL_GPIO_ReadPin(GPIOA, Encoder_A_Pin))
    {
        HAL_Delay(20);
        if(HAL_GPIO_ReadPin(GPIOA, Encoder_A_Pin))
        {
            HAL_GPIO_ReadPin(GPIOA, Encoder_B_Pin) ? return 1 : return 0;
        }
        
    }
}

char encoder_key(void)
{
    HAL_GPIO_ReadPin(GPIOA, Encoder_key_Pin) ? return 1 : return 0;
}
