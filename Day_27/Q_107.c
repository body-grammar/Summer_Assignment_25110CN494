#include <stdio.h>

int main() {
    // Write a program to create a salary management system

    // Declaration of variables
    char name[50];
    float basicSalary, bonus, deduction, netSalary;

    // Taking input from the user
    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Bonus: ");
    scanf("%f", &bonus);

    printf("Enter Deduction: ");
    scanf("%f", &deduction);

    // Calculating net salary
    netSalary = basicSalary + bonus - deduction;

    // Printing the salary slip
    printf("\n----- Salary Slip -----\n");
    printf("Employee Name: %s\n", name);
    printf("Basic Salary: %f\n", basicSalary);
    printf("Bonus: %f\n", bonus);
    printf("Deduction: %f\n", deduction);
    printf("Net Salary: %f\n", netSalary);

    return 0;
}