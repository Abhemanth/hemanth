#include <stdio.h>
void show() {
    static const int x = 100;  // Rule 8.7 (advisory) , static constant variable declaration
    printf("x = %d\n", x); // printin the value
}
void main() {
    show(); // calling the function
}
