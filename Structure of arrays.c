#include <stdio.h>
void main() {
    // Separate arrays for each member
    char names[3][20] = { "hemanth", "naveen", "sushant" };//
    int ages[3] = { 20, 22, 19 };
    float marks[3] = { 85.5, 90.0, 78.2 };
    for (int i = 0; i < 3; i++) {
        printf("Student %d: Name = %s, Age = %d, Marks = %.2f\n",
               i + 1, names[i], ages[i], marks[i]);
    }
}
