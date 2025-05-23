#include <stdio.h>
typedef int Number;                         // Rule 8.5, creating the aliase name for the interger datatype
void main(void)                              // Rule 5.1,
{
    Number *p = (Number *)malloc(sizeof(Number));  // Rule 11.5  allocting a memory dynamically using number as a data type
    *p = 50;// assigning values to the created memory location
    printf("Value: %d\n", *p);// printing the value
    free(p); //freeing the memory which is used
}
