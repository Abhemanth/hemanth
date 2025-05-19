#include <stdio.h>
void printDecimal(int n) {
    printf("Decimal: %d\n", n);
}
void printHex(int n) {
    char hex[20];
    int i = 0;
    if (n == 0) {
        printf("Hexadecimal: 0\n");
        return;
    }
    while (n > 0) {
        int rem = n % 16;
        if (rem < 10)
            hex[i++] = '0' + rem;
        else
            hex[i++] = 'A' + (rem - 10);
        n /= 16;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--) {
        putchar(hex[j]);
    }
    putchar('\n');
}

// Function pointer-based printer
void printWithFormat(int num, void (*printFunc)(int)) {
    printFunc(num);
}

int main() {
    int value = 100;
    printWithFormat(value, printDecimal);
    printWithFormat(value, printHex);
    return 0;
}
