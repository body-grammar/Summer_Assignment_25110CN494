#include <stdio.h> 

int fib(int n) {
    if (n==1) {
        return 0;
    } 

    if (n==2) {
        return 1;
    }

    return fib(n-1)+fib(n-2);  // Fibonacci Series
}

int main() {
    // Write the program to find the nth term of fibonacci series

    int num;

    printf("Enter the nth position: ");
    scanf("%d", &num);

    printf("The %dth term of the fibonacci series is %d.\n", num, fib(num)); // nth term of the series

    return 0;
}