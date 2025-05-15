#include <stdio.h>
#include <stdlib.h>
struct S {
    char n[50];   // name
    int a;        // age
    float m;      // marks
};
int main() {
    struct S s[2] = {
        {"hemanth", 20, 85.5},
        {"sushanth", 22, 91.0}
    };
    FILE *f;
    f = fopen("data.txt", "w");//opens the file for write
    if (f == NULL) {
        printf("File can't be opened.\n");
        return 1;
    }
    for (int i = 0; i < 2; i++) {
        fwrite(&s[i], sizeof(struct S), 1, f);//write the data
    }
    fclose(f);//close the file
    f = fopen("data.txt", "r");//opens the file for read
    if (f == NULL) {
        printf("File can't be opened.\n");
        return 1;
    }
    struct S temp;
    printf("\nStudent Records from file:\n");
    while (fread(&temp, sizeof(struct S), 1, f)) {
        printf("Name: %s, Age: %d, Marks: %f\n", temp.n, temp.a, temp.m);//print the data in the file
    }
    fclose(f);//close the file
}
/*Student Records from file:
Name: hemanth, Age: 20, Marks: 85.500000
Name: sushanth, Age: 22, Marks: 91.000000*/
