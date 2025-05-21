#include <stdio.h>
typedef int MyInt;// Rule 5.2, changing the data types of a variable using type def, int as myint, float as my float, char as my char
typedef float MyFloat;
typedef char MyChar;
void displayValues(MyInt i, MyFloat f, MyChar c) // Rule 8.2
{
    printf("Int: %d\n", i);// print the assigned values.
    printf("Float: %.2f\n", f);
    printf("Char: %c\n", c);
}
void main() // Rule 5.1
{
    MyInt x = 10;// assigning the values by usin new data type
    MyFloat y = 3.14f;
    MyChar z = 'H';
    displayValues(x, y, z); // Rule 17.7, calling the function
}
