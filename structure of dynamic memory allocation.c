#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct S {
    char *n;
    int a;
};
void main() {
    struct S *p = (struct S *)malloc(sizeof(struct S));// allocating memory for variable
    p->n = (char *)malloc(20 * sizeof(char));
    strcpy(p->n, "Hemanth");//assining values
    p->a = 25;
    printf("Name: %s Age: %d\n", p->n, p->a);//printing the values
    free(p->n);//deallocating
    free(p);
}
/*Name: Hemanth Age: 25*/