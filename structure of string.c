#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];   // String inside structure
    int age;
};
void main() {
    struct Student s;
    // Copying string into the structure member
    strcpy(s.name, "Hemanth");
    s.age = 23;
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}
/*Name: Hemanth
Age: 23*/
