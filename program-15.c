#include <stdio.h>
volatile int a = 0;
void main() {
    printf("Reading sharedVar multiple times:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", a);
    }
}
