#include <stdio.h>
struct DeviceStatus {
    unsigned int powerOn : 1;//it will assign 1 byte for the value
    unsigned int batteryLow : 1;
    unsigned int signalStrength : 2;
};
void main() {
    struct DeviceStatus device = {1, 0, 2};
    printf("Power On: %u\n", device.powerOn);
    printf("Battery Low: %u\n", device.batteryLow);
    printf("Signal Strength: %u\n", device.signalStrength);
}
/*Power On: 1
Battery Low: 0
Signal Strength: 2*/