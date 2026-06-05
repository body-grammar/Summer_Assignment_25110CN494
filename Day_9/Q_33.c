#include <stdio.h>

int main() {
    // Write a program to print reverse star pattern

    // Declaration of variables
    int n;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print rows
    for(int i = 1; i <= n; i++) {

        // Loop to print columns
        for(int j = n; j >= i; j--) {

            // Printing "*" in respective cells
            printf("*");
        }
        // Changing to respective rows
        printf("\n");
    }

    return 0;
}