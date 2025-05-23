#include <stdio.h>
enum Mode { // enum declaration
    AUTO = 10,
    MANUAL = 20
};
void main() {
    const enum Mode m = MANUAL;  // Rule 8.7  , constant enum
    printf("Mode: %d\n", m); //printing the enum value
}
