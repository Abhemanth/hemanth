#include <stdio.h>                      // Rule 20.1
union PointerData {
    int *p;                             // Rule 9.2
};
void main(void)
{
    int x = 10;
    union PointerData d;
    d.p = &x;                           // Rule 9.1
    printf("Pointer Value: %d\n", *(d.p)); // Rule 21.6
}