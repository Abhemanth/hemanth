#include <stdio.h>
enum Mode { AUTO, MANUAL }; // Rule 8.5
void main(void) // Rule 5.1
{
    enum Mode *m = (enum Mode *)malloc(sizeof(enum Mode));  // Rule 11.5, allocatin the memory at run time
    *m = MANUAL; // assigning the enum array to the variable m
    printf("Mode is: %d\n", *m);// printing the status
    free(m); //releasing the memory after the usage 
}
