#include <stdio.h>

int main() {
    // Write a program to create a menu-driven calculator

    int choice;

    do {

        int num1, num2;

        printf("\nCALCULATOR\n");
        printf("Options:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter you choice: ");
        scanf("%d", &choice);

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            printf("Sum of %d and %d is: %d", num1, num2, num1+num2);
            break;

        case 2:
            printf("Difference between %d and %d is: %d", num1, num2, num1-num2);
            break;
        
        case 3:
            printf("Product of %d and %d is: %d", num1, num2, num1*num2);
            break;

        case 4:
            printf("The quotient when %d is divided by %d is: %d", num1, num2, num1/num2);
            break;

        case 5:
            printf("The modulus when %d is divided by %d is: %d", num1, num2, num1%num2);
            break;

        case 6:
            printf("Exited...\n");
            break;
        
        default:
            break;
        }

    } while (choice != 6);

    return 0;
}