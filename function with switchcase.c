#include <stdio.h>
void process(int value) // Rule 8.2
{
    switch (value) // Rule 15.3 
    {
        case 1:
            printf("One\n");// if value 1 prints "one"
            break; // Rule 15.4
        case 2:
            printf("Two\n");// if value 2 prints "two"
            break; // Rule 15.4
        default:
            printf("Other\n");// if value other than 1 and 2 it prints "others"
            break; // Rule 15.4
    }
}
void main() // Rule 5.1
{
    process(2); // Rule 17.7, calling the function
}
