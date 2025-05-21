#include <stdio.h>
void greet(void) // Rule 8.2
{
    printf("function pointer!\n");// printing function pointers.
}
void execute(void (*func)(void))// assigning the address of another function
{
    func(); // Rule 17.7, calling the function using pointers
}
void main(void) // Rule 5.1
{
    execute(greet); // Rule 17.7, calling the function
}
