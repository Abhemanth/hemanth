#include "arraylibrary.h"
#include <stdio.h>


int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);

    print_array(a, size);
    printf("\nSum = %d\n", sum_array(a, size));

    return 0;
}

