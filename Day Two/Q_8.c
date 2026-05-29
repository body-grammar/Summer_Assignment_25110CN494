#include <stdio.h>

int main() {
    // Write a program to check whether a number is a palindrome

    int num, new = 0, rem, num1;
    printf("Enter a number: ");
    scanf("%d", &num);

    num1 = num;

    while (num > 0) {
        rem = num % 10;
        new = (new*10) + rem;
        num = num/10;
    }

    if (num1 == new) {
        printf("%d is a palindrome.\n", num1);
    } else {
        printf("%d is not a palindrome.\n", num1);
    }

    return 0;
}