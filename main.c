#include "pico/stdlib.h"
#include <stdio.h>
#include "hardware/pwm.h"
#include "hardware/uart.h"
#include "hardware/adc.h"
#include "hardware/gpio.h"
#include "fan.h"
#include "ultrasonic.h"
#include "DS18B20.h"
#include "waterLevel.h"
#include "pump.h"
#include "buzzer.h"

#define DS18B20_PIN 15 //water temp pin




// #define aref_voltage 3.3 

int main() {
    stdio_init_all();
    //for testing
    c43_init();
    setupUltrasonicPins();
    uint gpio_pin = DS18B20_PIN;
    ds18b20_init(gpio_pin);
    Init_Fan();
    pump_init();
    init_buzzer();
    //test buzzer
    




    

    
    
    

    
    while (true) {
        // printf("\n %d cm", getCm()); 
        // sleep_ms(1000);
        //water level
        // float level = c43_read_level();
        // printf("Water Level: %.2f%%\n", level);
        // sleep_ms(1000);
        // gpio_put(25,1);
        //fan work
        // for (int i = 0; i <= 255; i++) {
        //     // Set PWM duty cycle 
        //     pwm_set_gpio_level(EN_PIN, i); 
        //     sleep_ms(10);
        // }
        //    // Gradually decrease brightness 
        // for (int i = 255; i >= 0; i--) { 
        //     // Set PWM duty cycle 
        //    pwm_set_gpio_level(EN_PIN, i); // Wait to see the brightness change 
        //    sleep_ms(10); 
        //    }

        //     pump_on();
        //  sleep_ms(5000);
        //   pump_off();
        //  sleep_ms(5000);

        // float temperature;
        // if (ds18b20_read_temp(gpio_pin, &temperature)) {
        //     printf("Temperature: %.2f°C\n", temperature);
        // } else {
        //     printf("Error reading temperature\n");
        // }
        // sleep_ms(1000);
    }


    
        
        
    
    // while (true) {
    //     // Keep fan running
    //     printf("\n %d cm", getCm(trigPin, echoPin)); 
    //     float level = c43_read_level();
    //     printf("Water Level: %.2f%%\n", level);
    //     sleep_ms(1000);
    // }

    return 0;
}
// int main() {
//     stdio_init_all();
//     c43_init();
//     setupUltrasonicPins(trigPin, echoPin);
//     //fans
//     void Init_Fan();
//     while (1) {
//         //fan
//         // Gradually increase speed
//         for (uint16_t duty = 0; duty <= 65535; duty += 5000) {
//             setup_pwm(EN_PIN, duty);
//             printf("incrreasing");
//             sleep_ms(100);
//         }

//         // Change direction
//         set_direction(false);
//         printf("Dir changed");
//         sleep_ms(1000);

//         // Gradually decrease speed
//         for (uint16_t duty = 65535; duty > 0; duty -= 5000) {
//             setup_pwm(EN_PIN, duty);
//             printf("dec speed");
//             sleep_ms(100);
//         }

//         // Change back to forward direction
//         set_direction(true);
//         sleep_ms(1000);
//         //end fan
//         printf("\n %d cm", getCm(trigPin, echoPin)); 
//         // float level = c43_read_level();
//         // printf("Water Level: %.2f%%\n", level);
//         sleep_ms(1000);
//     }

//     return 0;
// }

// //ultra sonic 


// // const uint trigPin = 20;
// // const uint echoPin = 21;
// // const uint test_LED=12;
// // int main()
// // {
// //     stdio_init_all();
// //     gpio_init(test_LED);
// //     gpio_set_dir(test_LED , GPIO_OUT);
// //     gpio_put(test_LED,0);
   

// //     setupUltrasonicPins(trigPin, echoPin);
// //     while (true) { 
// //         printf("\n %d cm", getCm(trigPin, echoPin)); 
// //         sleep_ms(100);
// //         if(getCm(trigPin, echoPin)<10){
// //              gpio_put(test_LED,1);
// //              sleep_ms(1000);
// //         }
// //         else{
// //             gpio_put(test_LED,0);
// //             sleep_ms(1000);
// //         }
// //     }
// // }