#include <stdio.h>

// Employee structure
struct Employee {
    char name[50];
    int id;
    int salary;
};

int main() {
    // Write a program to create a mini employee management system

    // Declaration of variables
    struct Employee students[100];
    int n = 0;
    int choice;
    int i_d, found;

    do {
        // Choices

        printf("\n Employee Management System \n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employees\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        // Adding Employees
        case 1:
            printf("Enter id: ");
            scanf("%d", &students[n].id);

            printf("Enter Name: ");
            scanf("%s", students[n].name);

            printf("Enter Salary: ");
            scanf("%d", &students[n].salary);

            n++;
            printf("Employee added successfully!\n");
            break;

        // Displaying Employees
        case 2:
            if(n==0) {
                printf("No Records Found!\n");
            } else {
                printf("\n Employee Record \n");

                for(int i = 0; i < n; i++) {
                    printf("\nID Number: %d\n", students[i].id);
                    printf("\nName: %s\n", students[i].name);
                    printf("\nSalary: %d\n", students[i].salary);
                }
            }
            break;

        // Searching Employees
        case 3:
            found = 0;

            printf("Enter ID to search: ");
            scanf("%d", &i_d);

            for(int i = 0; i < n; i++) {
                if(students[i].id == i_d) {
                    printf("\nEmployee Record Found!\n");
                    printf("ID: %d\n", students[i].id);
                    printf("Name: %s\n", students[i].name);
                    printf("Salary: %d\n", students[i].salary);
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("Employee not found!\n");
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