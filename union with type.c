#include <stdio.h>// Rule 20.1
typedef union {
    int x;
    float y;
} Number;// Rule 8.5
void main(void)
{
    Number n;// number as a data type
    n.x = 10;
    printf("Typedef Union: %d\n", n.x); //printing the value
}