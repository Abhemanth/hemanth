#include <stdio.h>
int toggleBit(int num, int position) {
    return num ^ (1 << position);
}
void main() {
    int number = 10;
    int pos = 1;
    int modified = toggleBit(number, pos);
    printf("Original number: %d\n", number);
    printf("Modified number after toggling bit %d: %d\n", pos, modified);
}
