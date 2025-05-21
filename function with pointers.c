#include <stdio.h>
void updateValue(int* ptr)
{
    *ptr += 10;// changing the values using pointers
}
void main(void) // Rule 5.1
{
    int a = 5;// assigning 5 to the variable of a.
    updateValue(&a); // Rule 17.7, passing the address of variable to the function as arguments
    printf("%d\n", a);// printing the value which is changed in function
}
