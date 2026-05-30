#include <stdio.h>

int main() {
    //Write a program to find the GCD of the two numbers

    int num1, num2, rem;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    while (num2>0) {
        rem = num2;
        num2 = num1 % num2;
        num1 = rem;
    }

    printf("GCD of the given numbers is %d.\n", num1);

    return 0;
}