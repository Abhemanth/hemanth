#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int sub(int a, int b) {
    return a - b;
}
int mul(int a, int b) {
    return a * b;
}
int calculate(int x, int y, int (*operation)(int, int)) {
    return operation(x, y);
}
void main() {
    int a = 6, b = 3;
    printf("Addition %d\n", calculate(a, b, add));
    printf("Subtraction %d\n", calculate(a, b, sub));
    printf("Multiplication %d\n", calculate(a, b, mul));
}
