#include <stdio.h>
struct Flags
{
    int flag1 : 1; // Rule 6.1, 1 bit memory for the flag 1 and 2 varables in the structure
    int flag2 : 1; // Rule 6.1
};
void checkFlags(struct Flags f) // Rule 8.2, Rule 17.8
{
    if (f.flag1) // Rule 14.4
    {
        printf("Flag1 is set\n");
    }
    if (f.flag2) // Rule 14.4
    {
        printf("Flag2 is set\n");
    }
}
void main() // Rule 5.1
{
    struct Flags f = {1, 0}; // Rule 9.1, assigning values inside a structure
    checkFlags(f); // Rule 17.7, calling function.
}
