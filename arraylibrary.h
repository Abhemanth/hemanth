#ifndef ARRAY_LIB_H
#define ARRAY_LIB_H

void print_array(int *arr, int size) {
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int sum_array(int *arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

#endif
