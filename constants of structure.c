#include <stdio.h>
struct Student {
    char name[20];
    int marks;
};
void main() {
    const struct Student s = {"Alice", 90};
    // s.marks = 95;  //Error: cannot modify a const struct
    printf("%s - %d marks\n", s.name, s.marks);
}
/*Alice - 90 marks*/
