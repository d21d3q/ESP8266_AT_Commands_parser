#include <stdio.h>
#include "esp8266.h"

evol ESP_t ESP;

int main(void) {
    /* dummy call to ESP_Init */
    ESP_Init(&ESP, 115200, NULL);
    return 0;
}
