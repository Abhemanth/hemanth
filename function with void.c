#include <stdio.h>
void showMessage(void) // Rule 8.2
{
    printf("void function.\n");// It will print void function
}
void main() // Rule 5.1
{
    showMessage(); // Rule 17.7, e can pass any data type here.
}
