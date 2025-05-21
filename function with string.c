#include <stdio.h>
void printString(char* str) // Rule 8.2
{
    printf("String %s\n", str);// printing the string
}
void main() // Rule 5.1
{
    char* name = "hemanth";
    printString(name);//calling the function which can print string which is in the name.
}
