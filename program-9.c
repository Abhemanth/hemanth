#include <stdio.h>
union Number {
    int i;
    float f;
};
void main() {
    union Number num;
    num.i = 10;
    printf("After assigning integer:\n");
    printf("  Integer: %d\n", num.i);
    num.f = 3.14;
    printf("\nAfter assigning float:\n");
    printf("  Float  : %.2f\n", num.f);
    printf("\nAccessing both members (for observation only):\n");
    printf("  Integer: %d\n", num.i);
    printf("  Float  : %.2f\n", num.f);
}
