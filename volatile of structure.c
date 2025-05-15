#include <stdio.h>
struct Device {
    volatile int status; // only this field is volatile
    int id;
};
int main() {
    struct Device d;
    d.status = 1;  // will not be optimized
    d.id = 1001;   // might be optimized
    printf("ID: %d, Status: %d\n", d.id, d.status);
    return 0;
}
//ID: 1001, Status: 1