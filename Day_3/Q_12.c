#include <stdio.h>

int main() {
    // Write a program to find the LCM of two numbers

    int num1, num2, rem, num_2, num_1;
    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    num_1 = num1;
    num_2 = num2;

    while (num2>0) {
        rem = num2;
        num2 = num1 % num2;
        num1 = rem;
    }

    int lcm = (num_1*num_2)/num1;

    printf("The LCM of %d and %d is %d.\n", num_1, num_2, lcm);

    return 0;
}