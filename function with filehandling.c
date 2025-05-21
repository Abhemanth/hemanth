#include <stdio.h>
void writeFile(void) // Rule 8.2
{
    FILE *f = fopen("output.txt", "w"); // opening the file
    if (f != NULL)// it will terminate if file is not open
    {
        fprintf(f, "hemanth"); // printing the strin that is hemanth
        fclose(f); // closeing the file
    }
}
void main(void) // Rule 5.1
{
    writeFile(); // Rule 17.7, calling the function
}
