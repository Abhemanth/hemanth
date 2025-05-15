#include <stdio.h>
struct Operation {
    char op;
    int a, b;
};
void main() {
    struct Operation o = {'+', 10, 20};// according to o.op operand the operation will be performed
    switch (o.op) {
        case '+':
            printf("Sum = %d\n", o.a + o.b);
            break;
        case '-':
            printf("Difference = %d\n", o.a - o.b);
            break;
        case '*':
            printf("Product = %d\n", o.a * o.b);
            break;
        case '/':
            if (o.b != 0)
                printf("Quotient = %d\n", o.a / o.b);
            else
                printf("Division by zero error\n");
            break;
        default:
            printf("Invalid operation\n");
    }
}
//Sum = 30