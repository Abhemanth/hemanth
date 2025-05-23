#include <stdio.h>
#include <stdlib.h>
void main() {
    const int *p = (int *)malloc(sizeof(int));  // Pointer to const int
    // *p = 10;  //  Not allowed! p points to const int
    *((int *)p) = 10;  // Assign by casting
    printf("Value = %d\n", *p);
    free((void *)p);
}
