#include <stdio.h>

int main() {
    // Write a program to count digits of a number

    int num, num1, cnt = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    num1 = num;

    while (num > 0) {
        cnt++;
        num = num/10;
    }

    printf("Number of digits in %d is %d", num1, cnt);

    return 0;
}