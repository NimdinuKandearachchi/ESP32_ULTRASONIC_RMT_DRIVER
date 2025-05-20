#include <stdio.h>
#include <stdint.h>
#include "string.h"

#include "esp_log.h"
#include "esp_system.h"
#include "esp_timer.h"
#include "driver/gpio.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/timers.h"

#include "ultrasonic_rmt_drv.h"


void app_main(void){
    if(ultrasonic_rmt_init(US_TRIG_PIN, US_ECHO_PIN, 400, 40) != ESP_OK){
        ESP_LOGE("E", "ULTRASONIC RMT ERROR !");
        while (1){
            vTaskDelay(100);
        }
    }
    printf("Initilize done \n");

    while(1){
        float dis = get_ultrasonic_distance();
        if(dis != -1)
            printf("distance : %0.2f cm\n", dis);

        vTaskDelay(pdMS_TO_TICKS(50));
    }
}