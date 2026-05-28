#include <stdio.h>

int fac(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 

    return n*fac(n-1);
}

int main() {
    // Find a program to find a factorial of a number

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, fac(num));

    return 0;
}