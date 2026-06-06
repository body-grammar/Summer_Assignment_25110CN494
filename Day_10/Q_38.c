#include <stdio.h>

int main() {
    // Write a program to print a reverse pyramid

    // Declaration of variable
    int n;

    // Taking input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print rows
    for(int i = 1; i <= n; i++) {

        // Loop to print spaces in ascending order
        for(int j = 1; j <= (i - 1); j++) {
            printf(" ");
        }

        // Loop to print "*"
        for(int k = 0; k <= ((2*n) - (2*i)); k++) {
            printf("*");
        }

        // Loop to print spaces in decending order
        for(int m = 1; m <= (i - 1); m++) {
            printf(" ");
        }

        // Changing to respective rows
        printf("\n");
    }

    return 0;
}