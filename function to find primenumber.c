#include <stdio.h>
int isPrime(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible by any number other than 1 and itself
        }
    }

    return 1; // Number is prime
}

void main(void) {
    int lower, upper;
    printf("Enter the lower limit: ");// entering the lower number
    scanf("%d", &lower);

    printf("Enter the upper limit: ");// entering the higher number
    scanf("%d", &upper);
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    for (int i = lower; i <= upper; i++) {
        if (isPrime(i)) {
            printf("%d ", i); // Print the prime number
        }
    }
}
/*Enter the lower limit: 50
Enter the upper limit: 260
Prime numbers between 50 and 260 are:
53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 211 223 227 229 233 239 241 251 257*/