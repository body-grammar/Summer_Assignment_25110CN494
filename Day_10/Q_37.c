#include <stdio.h>

int main() {
    // Write a program to print a star pyramid

    // Declaration of variable
    int n;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print rows
    for(int i = 1; i <= n; i++) {

        // Loop to print spaces
        for(int j = n; j > i; j--) {
            printf(" ");
        }

        // Loop to print "*"
        for(int k = 1; k <= ((2*i)-1); k++) {
            printf("*");
        }

        // Loop to print spaces
        for(int m = n; m > i; m--) {
            printf(" ");
        }

        // To change to respective rows
        printf("\n");
    }

    return 0;
}