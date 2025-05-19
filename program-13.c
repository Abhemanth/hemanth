#include <stdio.h>
void main() {
    const int constVar = 10;
    int nonConstVar = constVar;
    printf("Value of nonConstVar: %d\n", nonConstVar);
}
