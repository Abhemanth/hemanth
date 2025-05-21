#include <stdio.h>
enum Status { PASS, FAIL }; // Rule 5.2, declaring the enum
void checkStatus(enum Status s) // Rule 8.2
{
    if (s == PASS) // Rule 14.4
    {
        printf("Passed\n");// if s is pass it will print passed or it will print fail.
    }
    else
    {
        printf("Failed\n");
    }
}
void main() // Rule 5.1
{
    checkStatus(PASS); // Rule 17.7, calling the function
}
