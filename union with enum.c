#include <stdio.h>                      
enum Color { RED, GREEN, BLUE };// Rule 10.1
union EnumUnion {
    enum Color c;// Rule 9.2
};
void main(void)
{
    union EnumUnion d;
    d.c = GREEN;// assining the green as 1
    printf("Enum: %d\n", d.c);         
}