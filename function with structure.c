#include <stdio.h>
struct Point // Rule 8.1, declaring the structure
{
    int x;
    int y;
};
void printPoint(struct Point* pt) // Rule 8.2
{
    printf("Point: (%d, %d)\n", pt->x, pt->y);// printing the values using structure pointers
}
void main() // Rule 5.1
{
    struct Point p = {5, 7};// assingning the values inside the structure
    printPoint(&p); // Rule 17.7, calling the function with address of struct as arguments
}
