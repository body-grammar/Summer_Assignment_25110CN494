#include <stdio.h>

// Function to print sum of two numbers
int sumTwo(int x, int y) {
    return x+y;
}

int main() {
    // Write a program to write function to find the sum of two numbers

    // Declaration of variables
    int x, y;

    // Taking input from the user
    printf("Enter any two numbers: ");
    scanf("%d %d", &x, &y);

    // Printing the result of the two numbers
    printf("The sum of %d and %d is %d.\n", x, y, sumTwo(x, y));

    return 0;
}