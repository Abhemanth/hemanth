#include <stdio.h>// Rule 20.1
union SwitchUnion {
    int value;
};
void main(void)
{
    union SwitchUnion s;
    s.value = 2;
    switch (s.value)// Rule 15.0, switch case.
    {
        case 1:
            printf("Case 1\n");// case 1
            break;
        case 2:
            printf("Case 2\n");// case 2
            break;
        default:
            printf("Default\n");// case 3
            break;
    }
}