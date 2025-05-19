#include <stdio.h>
void main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    for (int i = 0; i < 5; i++) {
        printf("%d-%p\n", *(ptr + i), (ptr + i));
    }
}