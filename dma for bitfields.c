#include <stdio.h>
#include <stdlib.h>
struct Flags {
    int flag1 : 1; // 1 bit for flag 1
    int flag2 : 2; // 2 bit for flag 2
    int flag3 : 3; // 3 bit for flag 3
};
void main() {
    struct Flags *p = (struct Flags *)malloc(sizeof(struct Flags));  // Rule 17.8  allocating the memory
    p->flag1 = 1; // 1 takes 1 bit
    p->flag2 = 3; // 2 takes 2 bit
    p->flag3 = 5; // 3 takes 3 bit
    printf("flag1 = %u\n", p->flag1);// printing the values
    printf("flag2 = %u\n", p->flag2);
    printf("flag3 = %u\n", p->flag3);
    free(p);
}
