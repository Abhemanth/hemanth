#include <stdio.h>
enum D { M, T, W };//enum
struct S {
    enum D d;// enum inside a structure
};
void main() {
    struct S x;
    x.d = T;
    printf("Value of enum in struct: %d\n", x.d);
}
/*Value of enum in struct: 1*/