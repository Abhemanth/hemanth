#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main() {
    int x = 10, y = 20;
    printf("Before x = %d, y = %d\n", x, y);
    swap(&x, &y);// calling the function which can swap the variables
    printf("After x = %d, y = %d\n", x, y);
}
