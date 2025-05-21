#include <stdio.h>
void counterFunction(void) // Rule 8.2
{
    static int count = 0; // Rule 8.10, static variable
    count++;
    printf("Count: %d\n", count);// printing the value
}
void main() // Rule 5.1
{
    counterFunction(); // Rule 17.7, calling the function two times to understand the life of a variable is through out the function
    counterFunction(); // Rule 17.7
}
