#include <stdio.h>

int main() {
    //Write a program to reverse a number

    int num, num1, new=0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    num1 = num;

    while (num > 0) {
        rem = num % 10;
        new = (new*10) + rem;
        num = num/10;
    }

    printf("Reverse of %d is: %d\n", num1, new);

    return 0;
}