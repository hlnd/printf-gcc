#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "nrf51.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "retarget.h"

int main(void)
{
    uint8_t i = 0;

    retarget_init();
    
    while (1)
    {
        printf("A real test: %d\r\n", i);
        i++;

        nrf_delay_ms(100);
    }
}

/**
 *@}
 **/
