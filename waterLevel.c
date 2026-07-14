#include "pico/stdlib.h"
#include <stdio.h>
#include "hardware/gpio.h"
#include "hardware/timer.h"
#include "waterLevel.h"
#include "hardware/adc.h"

void c43_init() {
    // Initialize ADC for the sensor
    adc_init();
    adc_gpio_init(WATERLVL_SENSOR_PIN);
    adc_select_input(1); // Use ADC channel 0
}

float c43_read_level() {
    // Read raw ADC value
    uint16_t raw = adc_read();
    // Convert to voltage (3.3V reference, 12-bit ADC)
    float voltage = raw * (3.3f / (1 << 12));
    // // Map voltage to water level (assuming 0-100% scale)
    float level=((voltage / 3.3f) * 100.0f);
    if(level >=100.f){
        level=100.f;
    }
    return level;
}