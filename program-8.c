#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
};
void main() {
    struct Person people[3] = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22}
    };
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i + 1);
        printf("  Name: %s\n", people[i].name);
        printf("  Age : %d\n\n", people[i].age);
    }
}
