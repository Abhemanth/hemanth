#include <stdio.h>

typedef struct {// creating a struct as S
    char n[50];
    int a;  
    float m;
} S;
void main() {
    S s[2];
    int i;
    for (i = 0; i < 2; i++) {
        printf("Enter name, age and marks for student %d: ", i + 1);
        scanf("%s %d %f", s[i].n, &s[i].a, &s[i].m);
    }
    printf("\nStudent Records:\n");
    for (i = 0; i < 2; i++) {
        printf("Name: %s, Age: %d, Marks: %.2f\n", s[i].n, s[i].a, s[i].m);
    }
}
/*Enter name, age and marks for student 1: hemanth
23
56
Enter name, age and marks for student 2: sushanth
16
66

Student Records:
Name: hemanth, Age: 23, Marks: 56.00
Name: sushanth, Age: 16, Marks: 66.00*/