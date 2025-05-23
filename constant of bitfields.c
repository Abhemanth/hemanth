#include <stdio.h>
struct Flags {
    const int a : 1;  // Rule 8.7 (Advisory), assigned 1 bit to the variable constant a
};
void main() {
    struct Flags f = {1};
    // f.a = 0;  Error: cannot modify const
    printf("a = %u\n", f.a);
}
