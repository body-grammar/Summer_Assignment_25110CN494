#include <stdio.h>

int fac(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n*fac(n-1);  // Factorial of a number using recursion
}

int main() {
    // Write a program to check strong number

    int num, num1, rem, new=0;  // Initialization

    printf("Enter any number: ");
    scanf("%d", &num);  // Taking input from the user

    num1 = num;

    while (num1 > 0) {  // Checking the number
        rem = num1 % 10;
        new += fac(rem);
        num1 = num1 / 10;
    }

    if (new == num) {   // Whether the number is strong number or not
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }

    return 0;
}