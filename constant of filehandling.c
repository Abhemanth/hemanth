#include <stdio.h>
void main() {
    const char *filename = "example.txt";  // Rule 8.7 (advisory), assigning file name to filename vairable
    FILE *fp = fopen(filename, "w");       // Rule 21.6 (Required) , opens the file
    fprintf(fp, "Hello, Hemanth");      // Prints the ""Hello, Hemanth" into the file
    fclose(fp);                            // Rule 21.9 (Required), closes the file
}
