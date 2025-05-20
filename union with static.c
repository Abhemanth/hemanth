#include <stdio.h>    
union StaticUnion {
    int x;
};
static union StaticUnion s = { 10 };    // Rule 8.10
void main(void)
{
    printf(" %d\n", s.x);// printing the value
}