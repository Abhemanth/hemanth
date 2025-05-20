#include <stdio.h>
union VolatileUnion {
    volatile int x;// Rule 8.12
};
void main(void)
{
    union VolatileUnion v;
    v.x = 100;// changing the value
    printf(" %d\n", v.x);
}