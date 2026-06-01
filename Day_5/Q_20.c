#include <stdio.h>

int main() {
    // Write a program to find the largest prime factor

    // Initialization
    int num, rem = 1;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking for largest prime factor
    for(int i = 2; i <= num; i++) {
        while (num % i == 0) {
            rem = i;
            num = num / i;
        }
    }

    // Output
    printf("The largest prime factor of %d is %d.\n", num, rem);

    return 0;
}