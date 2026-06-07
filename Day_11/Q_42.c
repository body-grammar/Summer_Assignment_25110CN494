#include <stdio.h>

// Function to find maximum of the two numbers using a ternary operator
int findMax(int a, int b) {
    int x = (a>b) ? a : b;

    return x;
}

int main() {
    // Write a program to write function to find maximum

    // Declaration of variables
    int a, b;

    // Taking input from the user
    printf("Enter the value of a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    // Printing the result using the function
    printf("Maximum of the two given numbers is: %d\n", findMax(a, b));

    return 0;
}