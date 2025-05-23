#include <stdio.h>
#include <stdlib.h>
void main() {
    char *data = (char *)malloc(100 * sizeof(char));  // Rule 11.5 , allocating a memory dynamically
    printf("Enter a message: ");
    fgets(data, 100, stdin);    // Rule 17.7 , giving values at run time
    FILE *f = fopen("output.txt", "w"); // opens the file
    fputs(data, f); // sending the data to the file
    fclose(f); // closing the file
    free(data); // deleting the data in data variable
}
