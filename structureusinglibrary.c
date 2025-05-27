// main.c
#include <stdio.h>
#include <string.h>
#include "structurelibrary.h"

int main() {
    Student s;

    s.id = 101;
    strcpy(s.name, "Hemanth");

    print_student(s);

    return 0;
}
