#include <stdio.h>

int fib(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2); // Fibonacci series using recursion
}

int main() {
    // Write a program to generate a fibonacci series

    int num;

    printf("Enter the number of terms for the fibonacci series: ");
    scanf("%d", &num);

    for(int i = 0; i < num; i++) { // Loop to print the series 
        printf("%d\n", fib(i)); 
    }

    return 0;
}