#include <stdio.h>
#define PI 3.14 // Rule 19.4, here the pi values is constant we cannot change the value.
void printArea(float r) // Rule 8.2
{
    float area = PI * r * r;
    printf("Area: %.2f\n", area);// printing the area of circle usin constant variable pi
}
void main() // Rule 5.1
{
    printArea(2.0f); // Rule 17.7// calling the function.
}
