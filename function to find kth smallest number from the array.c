#include <stdio.h>
void sortArray(int arr[], int n) {// bubble sort
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {// swapping the eliments
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int kthSmallest(int arr[], int n, int k) {
    sortArray(arr, n);      // First, sort the array
    return arr[k - 1];      // kth smallest is at index k-1
}
void main(void) {
    int arr[100];
    int n, k;
    printf("Enter the number of elements in the array: ");// enter the size of array
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);// inserting elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");// value of k
    scanf("%d", &k);
    int result = kthSmallest(arr, n, k);
    printf("The %dth smallest element is: %d\n", k, result);
}
/*Enter 6 elements:
5
9
2
7
3
6
Enter the value of k: 5
The 5th smallest element is: 7*/