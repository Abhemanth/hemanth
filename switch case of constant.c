#include <stdio.h>
void main() {
    const int x = 3;              // Rule 8.7 [Advisory] , constant variable

    switch (x) {                  // Rule 15.2 [Required], switch case
        case 1:
            printf("Case 1\n");   // prints that matches the value of x
            break;                // Rule 15.3 [Required] 
        case 2:
            printf("Case 2\n");
            break; 
        case 3:
            printf("Case 3\n");  // This will run
            break; 
        default:
            printf("Default case\n"); // default statement
    }
}
