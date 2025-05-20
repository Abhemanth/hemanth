#include <stdio.h>                              
void printArray(const int arr[], int size)// Rule 8.2
{
    for (int i = 0; i < size; i++)// for loop to print the values
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void main()
{
    int data[5] = {10, 20, 30, 40, 50};// Rule 9.1
    printArray(data, 5);// passing the arrays of elements
}