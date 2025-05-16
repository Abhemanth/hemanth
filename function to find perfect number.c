#include <stdio.h>
int isPerfect(int num) {// finding the divisors
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);// Return 1 if sum of divisors equals the number
}
void printPerfectNumbers(int low, int high) {
    printf("The perfect numbers between %d to %d are :\n", low, high);
    for (int i = low; i <= high; i++) {
        if (isPerfect(i)) {
            printf("%d  ", i);// printing the perfect number
        }
    }
}
void main(void) {
    int low, high;
    printf("Input lowest search limit of perfect numbers : ");
    scanf("%d", &low);//low limit
    printf("Input highest search limit of perfect numbers : ");
    scanf("%d", &high);//high limit
    printPerfectNumbers(low, high);// calling the function to print perfect number
}
/*Input lowest search limit of perfect numbers : 6
Input highest search limit of perfect numbers : 150
The perfect numbers between 6 to 150 are :
6  28*/