#include <stdio.h>                      
union PointerData {
    int *p;                             // Rule 9.2
};
int main(void)
{
    int x = 10;
    union PointerData d;
    d.p = &x;                           // Rule 9.1
    printf("Pointer Value: %d\n", *(d.p));
    return 0;
}