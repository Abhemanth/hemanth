#include <stdio.h>
int setBit(int num, int position) {
    return num | (1 << position);
}
void main() {
    int number = 10;  
    int pos = 2;      
    int modified = setBit(number, pos);
    printf("Original number: %d\n", number);
    printf("Modified number after setting bit %d: %d\n", pos, modified);
}
