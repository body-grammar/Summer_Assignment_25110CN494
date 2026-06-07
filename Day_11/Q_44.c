#include <stdio.h>

// Recursive function to find the factorial of the number
int fac(int x) {
    if(x == 0 || x == 1) {
        return 1;
    }

    return x*fac(x-1);
}

int main() {
    // Write a program to write a function to find the factorial

    // Declaration of the variable
    int n;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Printing the result using the function
    printf("Factorial of %d is %d\n", n, fac(n));

    return 0;
}