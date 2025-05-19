#include <stdio.h>
void printArray(const int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int n = sizeof(myArray) / sizeof(myArray[0]);
    printArray(myArray, n);
}
