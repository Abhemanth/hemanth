// struct_lib.h
#ifndef STRUCT_LIB_H
#define STRUCT_LIB_H
#include<stdio.h>
typedef struct {
    int id;
    char name[20];
} Student;

void print_student(Student s) {
    printf("ID: %d, Name: %s\n", s.id, s.name);
}

#endif
