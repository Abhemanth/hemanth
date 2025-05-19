#include <stdio.h>
void main() {
    int arr[] = {5, 10, 15, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int *ptr = arr;
    for (int i = 0; i < size; i++) {
        sum += *(ptr + i); 
    }
    printf("Sum of array elements: %d\n", sum);
}
