#include <stdio.h>
#include <stdlib.h>
void fillArray(int* arr, int size) // Rule 8.2
{
    for (int i = 0; i < size; i++) // Rule 14.4, for loop for assigning the values
    {
        arr[i] = i + 1;// it will assign 1,2,3,4,5.
    }
}
void main(void) // Rule 5.1
{
    int* p = (int*) malloc(5 * sizeof(int));// allocating the memory using dynamic memory allocation
    fillArray(p, 5); // Rule 17.7, calling the function
    for (int i = 0; i < 5; i++) // Rule 14.4
    {
        printf("%d ", p[i]);// here it will print the values which are assigned in the above function
    }
    free(p);// after using the variable we should free the memory.
    }
}
