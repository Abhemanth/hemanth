#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
void main() {
    int choice;
    int x = 10, y = 5; 
    int (*funcPtr)(int, int); 
    printf("0-subtract, 1-add");
    scanf("%d", &choice);
    if (choice == 1) {
        funcPtr = add;
    } else{
        funcPtr = subtract;
    }
    int result = funcPtr(x, y);
    printf("Result: %d\n", result);
}
