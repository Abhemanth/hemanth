// main.c
#include <stdio.h>
#include "functionlibraries.h"

int main() {
    int x = 5, y = 7;

    int result = add(x, y);
    printf("Sum of %d and %d is: %d\n", x, y, result);

    return 0;
}
