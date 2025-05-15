#include <stdio.h>
enum I {A,B,C};//enum
struct S {
    char n[10];
    int a;
};
void main() {
    struct S x[2] = {
        {"hemanth",23},
        {"sushanth",16},
    };
    printf("Name: %s Age: %d\n", x[A].n, x[A].a);// A=0
    printf("Name: %s Age: %d\n", x[B].n, x[B].a);// B=1
}
/*Name: hemanth Age: 23
Name: sushanth Age: 16*/
