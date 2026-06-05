#include <stdio.h>

int main() {
    // Write a program to print hollow square pattern

    // Declaration of variables
    int n;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print rows
    for(int i = 1; i <= n; i++) {

        // Loop to print columns
        for(int j = 1; j <= n; j++) {
            // Conditions to print a hollow square
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}