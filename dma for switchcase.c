#include <stdio.h>
#include <stdlib.h>
void main() {
    int *num = (int *)malloc(sizeof(int));      // Rule 17.8  allocating the memory dynamically
    *num = 2; // assigning the values to the memory craeted
    switch (*num) {                             // Rule 16.1  , switch case to print what is the number we have given
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Other number\n");           // Rule 16.4  default statement
    }
    free(num); // freeing the memory
}
