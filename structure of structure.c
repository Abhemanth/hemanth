#include <stdio.h>
//inner structure
struct Address {
    char city[20];
    int pincode;
};
//outer structure
struct Student {
    char name[30];
    int age;
    struct Address addr;//nested another structure
};
void main() {
    struct Student s;
    strcpy(s.name, "Hemanth");
    s.age = 21;
    strcpy(s.addr.city, "pileru");
    s.addr.pincode = 517214;
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("City: %s\n", s.addr.city);
    printf("Pincode: %d\n", s.addr.pincode);
}
/*Name: Hemanth
Age: 21
City: pileru
Pincode: 517214*/