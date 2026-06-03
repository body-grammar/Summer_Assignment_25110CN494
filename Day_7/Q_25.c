#include <stdio.h>

// Function to return the factorial of a number
int fac(int x) {
    if (x == 0 || x == 1) {
        return 1;
    }

    return x*fac(x-1);
}

int main() {
    // Write a program to recursive factorial

    // Declaration of variables
    int num;

    // Taking input from the user
    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Printing the factorial of a number
    printf("The factorial of %d is %d.\n", num, fac(num));

    return 0;
}