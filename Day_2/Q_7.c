#include <stdio.h>

int main() {
    // Write a program to find the product of digits

    int num, pdt=1, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num%10;
        pdt = pdt * rem;
        num = num/10;
    }

    printf("The product of the digits is: %d\n", pdt);

    return 0;
}