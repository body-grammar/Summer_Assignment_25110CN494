#include <stdio.h>

int main() {
    // Write a program to find sum of digits of a number

     int num, sum = 0, rem, num1;
     printf("Enter a number: ");
     scanf("%d", &num);

    num1 = num;

     while (num > 0) {
        rem = num % 10;
        sum += rem;
        num = num / 10;
     }

    printf("The sum of digits of %d is %d\n", num1, sum);

    return 0;
}