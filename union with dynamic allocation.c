#include <stdio.h>                     
#include <stdlib.h>                     
union Dynamic {
    int *ptr;// Rule 9.2
};
void main(void)
{
    union Dynamic d;
    d.ptr = (int *)malloc(sizeof(int)); // allocating the memory dynamically
    if (d.ptr != NULL)// Rule 15.2
    {
        *(d.ptr) = 42;
        printf("%d\n", *(d.ptr));// printing the value
        free(d.ptr);                    
    }
}