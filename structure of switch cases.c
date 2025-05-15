#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[20];
    float marks;
};
void main() {
    struct Student s;
    int choice;
    printf("1. Enter Student Details\n");
    printf("2. Display Student Details\n");
    printf("3. Exit\n");
    while (1) {// 1 for to enter the detiles of the student, 2 for to desplay the details of the student, 3 for to exit the loop.
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &s.id);
                printf("Enter Name: ");
                scanf("%s", s.name);
                printf("Enter Marks: ");
                scanf("%f", &s.marks);
                break;
            case 2:
                printf("\n--- Student Info ---\n");
                printf("ID: %d\n", s.id);
                printf("Name: %s\n", s.name);
                printf("Marks: %.2f\n", s.marks);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
/*1. Enter Student Details
2. Display Student Details
3. Exit

Enter your choice: 1
Enter ID: 19456
Enter Name: hemanth
Enter Marks: 93

Enter your choice: 2

--- Student Info ---
ID: 19456
Name: hemanth
Marks: 93.00

Enter your choice: 3
Exiting program.*/