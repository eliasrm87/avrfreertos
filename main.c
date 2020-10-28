#include <avr/io.h>
#include "FreeRTOS.h"
#include "task.h"

#define LED_DDR  DDRB
#define LED_PORT PORTB
#define LED      PB5

void taskBlink( void *pvParameters );

int main( void )
{
    LED_DDR  |= ( 1 << LED );
    LED_PORT &= ~( 1 << LED );
    
    xTaskCreate(
                taskBlink
                , ( const portCHAR * ) "taskBlink"
                , 128
                , NULL
                , 1
                , NULL );
    
    vTaskStartScheduler();
    
    while ( 1 ) ;
}

void taskBlink( void *pvParameters )
{
    for ( ;; )
    {
        LED_PORT |= ( 1 << LED );
        vTaskDelay( 100 / portTICK_PERIOD_MS );
        LED_PORT &= ~( 1 << LED );
        vTaskDelay( 1000 / portTICK_PERIOD_MS );
    }
}

void vApplicationIdleHook( void ) {
    while ( 1 ) ;
}
