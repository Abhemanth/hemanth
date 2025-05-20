#include <stdio.h>              // Rule 20.1
#include <string.h>             // Rule 21.6
union Data {
    char str[20];               // Rule 9.2
};
int main()                  // Rule 5.1 
{
    union Data d;
    // Assign a string to the union member
    strcpy(d.str, "hemanth");   // Rule 21.6
    // Output the string
    printf("String: %s\n", d.str); // Rule 21.6
    return 0;                   // Rule 17.4
}

