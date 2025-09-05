#include <ch554.h>
#include <gpio.h>
#include <stdio.h>   // sprintf
#include <system.h>  // mcu_config()
#include <time.h>    // millis(), delay()

#define LED P32

void main()
{
    // Set MCU Frequency
    mcu_config();
    delay(5);

    timer_init();

    PIN_input_PU(LED);
    while (1)
    {
        PIN_toggle(LED);
        delay(900);
        PIN_toggle(LED);
        delay(100);
    }
}
