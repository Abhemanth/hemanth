#include <stdio.h>
struct Data {
    void *ptr;// void pointer inside a structure
};
void main() {
    int x = 10;
    struct Data d;
    d.ptr = &x;
    printf("Value: %d\n", *(int *)d.ptr);//type casting is required
}//output - Value: 10
