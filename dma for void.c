#include <stdio.h>
#include <stdlib.h>
void main() {
    void *ptr;
    ptr = malloc(sizeof(int));                  // Rule 11.5  Allocate memory for an int using void pointer
    *(int *)ptr = 123;                          // Rule 11.4  Cast void* to int* to assign a value
    printf("Value = %d\n", *(int *)ptr);        // Rule 11.4  Cast again to print the value
    free(ptr);
}
