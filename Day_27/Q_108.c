#include <stdio.h>

int main() {
    // Write a program to create marksheet generation system

    // Declaration of variables
    char name[50];
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    // Taking input from the user
    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Calculating marks and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    // Calculating grade
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    // Printing the marksheet of the student
    printf("\n MARKSHEET \n");
    printf("Name: %s\n", name);
    printf("Subject 1: %d\n", m1);
    printf("Subject 2: %d\n", m2);
    printf("Subject 3: %d\n", m3);
    printf("Subject 4: %d\n", m4);
    printf("Subject 5: %d\n", m5);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}