#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int age;
    char course[50];
    float marks;
};

int main() {
    // Write a program to create a student record system using arrays and strings

    struct Student students[100];
    int count = 0;
    int choice;

    do {
        printf("\nSTUDENT RECORD SYSTEM\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Calculate Average Marks\n");
        printf("7. Find Topper\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the roll number: ");
            scanf("%d", &students[count].rollNo);

            printf("Enter the name of the student: ");
            scanf("%s", students[count].name);

            printf("Enter the age: ");
            scanf("%d", &students[count].age);

            printf("Enter the course: ");
            scanf("%s", students[count].course);

            printf("Enter the marks scored: ");
            scanf("%f", &students[count].marks);

            count++;
            break;

        case 2:
            printf("STUDENT RECORDS: \n");

            for(int i = 0; i < count; i++) {
                printf("Roll Number: %d\n", students[i].rollNo);
                printf("Name: %s\n", students[i].name);
                printf("Age: %d\n", students[i].age);
                printf("Course: %s\n", students[i].course);
                printf("Marks: %f\n", students[i].marks);
            }
            break;

        case 3: 
            int roll;

            printf("Enter the roll number to be searched: ");
            scanf("%d", &roll);

            int found = 0;

            for(int i = 0; i < count; i++) {
                if(students[i].rollNo == roll) {
                    printf("Name: %s\n", students[i].name);
                    printf("Age: %d\n", students[i].age);
                    printf("Course: %s\n", students[i].course);
                    printf("Marks: %f\n", students[i].marks);
                    found = 1;
                }
            }

            if(found == 0) {
                printf("Record not found\n");
            }

            break;

        case 4:
            printf("Enter the roll number to be updated: ");
            scanf("%d", &roll);

            found = 0;

            for(int i = 0; i < count; i++) {
                if(students[i].rollNo == roll) {
                    printf("Enter the roll number: ");
                    scanf("%d", &students[i].rollNo);

                    printf("Enter the name of the student: ");
                    scanf("%s", students[i].name);

                    printf("Enter the age: ");
                    scanf("%d", &students[i].age);

                    printf("Enter the course: ");
                    scanf("%s", students[i].course);

                    printf("Enter the marks scored: ");
                    scanf("%f", &students[i].marks);

                    found = 1;
                }
            }

            if(found == 0) {
                printf("Enter a valid roll number\n");
            }

            break;

        case 5: 
            found = -1;

            printf("Enter the roll number to delete: ");
            scanf("%d", &roll);

            for(int i = 0; i < count; i++) {
                if(students[i].rollNo == roll) {
                    found = i;
                    break;
                }
            }

            if(found == -1) {
                printf("Student not found!\n");
            } else {
                for(int i = found; i < count; i++) {
                    students[i] = students[i+1];
                }

                count--;

                printf("Student record deleted!\n");
            }

            break;

        case 6:
            int sum = 0;
            float avg;

            for(int i = 0; i < count; i++) {
                sum += students[i].marks;
            }

            avg = (float)(sum/count);

            printf("Average Marks: %f", avg);
            break;

        case 7:
            int max = 0;

            for(int i = 0; i < count; i++) {
                if(students[i].marks > students[max].marks) {
                    max = i;
                }
            }

            printf("The topper is: ", students[max].name);

            break;

        case 8: 
            printf("Exiting...\n");
            break;
        
        default:
            break;
        }
    } while (choice != 8);
}