#include <stdio.h>
void decimalToBinary(int num) {
    int binary[32];      // Array to store binary digits
    int i = 0;
    if (num == 0) {
        printf("The Binary value is : 0\n");
        return;
    }
    while (num > 0) {
        binary[i] = num % 2;  //Get remainder (0 or 1)
        num = num / 2;        //Divide by 2
        i++;
    }
    printf("The Binary value is : ");
    for (int j = i - 1; j >= 0; j--) { //Print in reverse order
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main(void) {
    int number;
    printf("Input any decimal number : ");
    scanf("%d", &number);
    decimalToBinary(number);// call the function
    return 0;
}
/*Input any decimal number : 56
The Binary value is : 111000*/