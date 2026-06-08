#include <stdio.h>

// Recursive function to print fibonacci series
int fib(int n) {
    if(n==1) {
        return 0;
    } if(n==2) {
        return 1;
    }

    return fib(n-1)+fib(n-2);
}

int main() {
    // Write a program to write a function for fibonacci

    // Declaration of variables
    int n;

    // Taking input from the user
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    // Loop to print the terms of the series using the function
    for(int i = 1; i <= n; i++) {
        printf("%d\n", fib(i));
    }

    return 0;
}