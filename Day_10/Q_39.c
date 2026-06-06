#include <stdio.h>

int main() {
    // Write a program to print a number pyramid

    // Declaration of variables
    int n;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print rows
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n - i); j++) {
            printf(" ");
        }

        // Loop to print numbers in ascending order
        for(int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        // Loop to print numbers in descending order
        for(int m = (i - 1); m >= 1; m--) {
            printf("%d", m);
        }

        // Loop to print spaces
        for(int p = 1; p <= (n - i); p++) {
            printf(" ");
        }

        // Changing respective rows
        printf("\n");
    }

    return 0;
}