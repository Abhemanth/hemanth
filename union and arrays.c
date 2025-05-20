#include <stdio.h>                     
union Data {
    int arr[5];                         // Rule 9.2
};
int main(void)                          // Rule 8.4
{
    union Data d;                       // Rule 9.1
    for (int i = 0; i < 5; i++)         // Rule 14.2
    {
        d.arr[i] = i * 10;              // Rule 13.2
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", d.arr[i]);        // Rule 21.6
    }
}