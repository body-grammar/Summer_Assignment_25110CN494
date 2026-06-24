#include <stdio.h>

// Student structure
struct Student {
    char name[50];
    int rollno;
    int marks;
};

int main() {
    // Write a program to create student record management system

    // Declaration of variables
    struct Student students[100];
    int n = 0;
    int choice;
    int roll, found;

    do {
        // Choices

        printf("\n Student Management System \n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Students\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        // Adding Students
        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &students[n].rollno);

            printf("Enter Name: ");
            scanf("%s", students[n].name);

            printf("Enter Marks: ");
            scanf("%d", &students[n].marks);

            n++;
            printf("Student added successfully!\n");
            break;

        // Displaying Students
        case 2:
            if(n==0) {
                printf("No Records Found!\n");
            } else {
                printf("\n Student Record \n");

                for(int i = 0; i < n; i++) {
                    printf("\nRoll Number: %d\n", students[i].rollno);
                    printf("\nName: %s\n", students[i].name);
                    printf("\nMarks: %d\n", students[i].marks);
                }
            }
            break;

        // Searching Students
        case 3:
            found = 0;

            printf("Enter Roll Number to search: ");
            scanf("%d", &roll);

            for(int i = 0; i < n; i++) {
                if(students[i].rollno == roll) {
                    printf("\nStudent Record Found!\n");
                    printf("Roll Number: %d\n", students[i].rollno);
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %d\n", students[i].marks);
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("Student not found!\n");
            }
            break;

        // Exiting
        case 4: 
            printf("Exited...\n");
            break;

        // Invalid
        default:
            printf("Invalid!\n");
        }
    } while (choice != 4);

    return 0;
}