#include <stdio.h>

// Recursive Function to print Fibonacci series
int fib(int n) {
    if (n==1) {
        return 0;
    } else if (n==2) {
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

int main() {
    // Write a program to recursive fibonacci

    // Declaration of variables
    int num;

    // Taking input from the user
    printf("Enter a natural number: ");
    scanf("%d", &num);

    // Printing the fibonacci series
    printf("Fibonacci series upto %d terms is: \n", num);
    for(int i = 1; i <= num; i++) {
        printf("%d\n", fib(i));
    }

    return 0;
}