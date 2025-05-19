#include <stdio.h>
int isBitSet(int num, int position) {
    if (num & (1 << position)) {
        return 1;
    } else {
        return 0;
    }
}
void main() {
    int number = 12;
    int pos = 1;    
    if (isBitSet(number, pos)) {
        printf("Bit %d is set in %d.\n", pos, number);
    } else {
        printf("Bit %d is not set in %d.\n", pos, number);
    }
}
