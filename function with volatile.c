#include <stdio.h>
volatile int sensorvalue = 0; // Rule 8.9, sensorvalue is volatile it can vary at any time due to internal interpts or user can chane the value
void readSensor() // Rule 8.2
{
    printf("Sensor %d\n", sensorvalue);// printin the values after the function call.
}
void main() // Rule 5.1
{
    Sensorvalue(); // Rule 17.7, callin the function
}
