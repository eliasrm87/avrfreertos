#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <avr/io.h>
#include <avr/interrupt.h>

/* Scheduler include files. */
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

/* this is from avr/time.h, but it is not released into the main stream currently */
#include "time.h"

/* serial interface include file. */
#include "serial.h"

/*-----------------------------------------------------------*/
/* Optionally, create reference to the handle for the serial port. */
extern xComPortHandle xSerialPort;

static void TaskBlinkGreenLED(void *pvParameters); // Main Arduino Uno 328p (Green) LED Blink
/*-----------------------------------------------------------*/

/* Main program loop */
int main(void) __attribute__ ((OS_main));

int main(void)
{
    // turn on the serial port for debugging or for other USART reasons.
    xSerialPort = xSerialPortInitMinimal( USART0, 115200, portSERIAL_BUFFER_TX, portSERIAL_BUFFER_RX); //  serial port: WantedBaud, TxQueueLength, RxQueueLength (8n1)

    avrSerialxPrint_P(&xSerialPort, PSTR("\r\n\n\nHello World!\r\n")); // Ok, so we're alive...

    xTaskCreate(
                TaskBlinkGreenLED
                ,  (const char *)"GreenLED" // Main Arduino Uno 328p (Green) LED Blink
                ,  256                                // Tested 9 free @ 208
                ,  NULL
                ,  3
                ,  NULL ); // */


        avrSerialxPrintf_P(&xSerialPort, PSTR("Free Heap Size: %u\r\n"), xPortGetFreeHeapSize() ); // needs heap_1,  heap_2 or heap_4 for this function to succeed.
        avrSerialxPrintf_P(&xSerialPort, PSTR("Minimum Free Heap Size: %u\r\n"), xPortGetMinimumEverFreeHeapSize() ); // needs heap_4 for this function to succeed.
        vTaskStartScheduler();

        avrSerialxPrint_P(&xSerialPort, PSTR("\r\n\n\nGoodbye... no space for idle task!\r\n")); // Doh, so we're dead...

}

/*-----------------------------------------------------------*/

static void TaskBlinkGreenLED(void *pvParameters) // Main Green LED Flash
{
    (void) pvParameters;
    TickType_t xLastWakeTime;
        /* The xLastWakeTime variable needs to be initialised with the current tick
        count.  Note that this is the only time we access this variable.  From this
        point on xLastWakeTime is managed automatically by the vTaskDelayUntil()
        API function. */
        xLastWakeTime = xTaskGetTickCount();

        DDRB |= _BV(DDB5);

    for(;;)
    {
        PORTB |=  _BV(PORTB5);       // main (red PB5) LED on. Arduino LED on
        vTaskDelayUntil( &xLastWakeTime, ( 100 / portTICK_PERIOD_MS ) );

        PORTB &= ~_BV(PORTB5);       // main (red PB5) LED off. Arduino LED off
        vTaskDelayUntil( &xLastWakeTime, ( 2000 / portTICK_PERIOD_MS )  );

        xSerialxPrintf_P(&xSerialPort, PSTR("Current Timestamp: %lu xTaskGetTickCount(): %u\r\n"), time(NULL), xTaskGetTickCount());
        xSerialxPrintf_P(&xSerialPort, PSTR("Minimum Free Heap Size: %u\r\n"), xPortGetMinimumEverFreeHeapSize() ); // needs heap_4 for this function to succeed.
    }
}

/*---------------------------------------------------------------------------*/
 
