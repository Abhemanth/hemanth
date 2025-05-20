#include <stdio.h>                     
union FuncUnion {
    int (*f)(int);// Rule 9.2
};
int square(int x)
{
    return x * x;
}
void main(void)
{
    union FuncUnion u;
    u.f = square;// callin the function
    printf("Square %d\n", u.f(4)); // printing the value   
}