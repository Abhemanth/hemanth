#include <stdio.h>
// Define structure
struct Car {
    char model[20];
    int year;
};
void show() {
    static struct Car c = {"Swift", 2020}; // static of structure
    printf("Model: %s, Year: %d\n", c.model, c.year);
    // Modify to show persistence
    c.year++;
}
void main() {
    show();  // Output: Swift, 2020
    show();  // Output: Swift, 2021 (because c is static)
}
/*Model: Swift, Year: 2020
Model: Swift, Year: 2021*/