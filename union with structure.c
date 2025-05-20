#include <stdio.h>                      
union MyUnion {
    struct {
        int a;
        int b;
    } s;                                // Rule 9.2
};
void main(void)
{
    union MyUnion d;
    d.s.a = 5;// assigining the value to the structure which is inside the union
    d.s.b = 10;
    printf("Struct in Union: %d, %d\n", d.s.a, d.s.b);// printing the values
    return 0;
}