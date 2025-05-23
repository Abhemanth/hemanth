#include <stdio.h>
void main() {
    const volatile int sensor_value = 100;  // Rule 8.7 (Advisory), Rule 8.9 (Advisory), value can be change due to internal interepts
    printf("Sensor = %d\n", sensor_value);  // prints the sensor values
}
