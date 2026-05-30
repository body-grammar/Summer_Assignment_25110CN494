#include <stdio.h>

int main() {
    // Write a program to check whether a number is a prime

    int num, fac=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 1; i<=num; i++) {
        if (num%i == 0) {
            fac++;
        }
    }

    if (fac<=2) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("The %d is not a prime number.\n", num);
    }

    return 0;
}