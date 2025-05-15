#include <stdio.h>
struct Sensor {
    int temp;
    int pressure;
};
volatile struct Sensor s;  // entire structure is volatile
void main() {
    s.temp = 25;       // compiler won't optimize this
    s.pressure = 1010; // neither this
    printf("Temp: %d, Pressure: %d\n", s.temp, s.pressure);
}
/*Temp: 25, Pressure: 1010*/