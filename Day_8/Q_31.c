#include <stdio.h>

int main() {
    // Write a program to print character triangle

    // Declaration of variables
    int n;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print rows
    for(int i = 1; i <= n; i++) {

        // Loop to print columns
        for(int j = 1; j <= i; j++) {
            // Printing letters w.r.t ASCII codes
            printf("%c", (65+j-1));
        }

        // Changing respective rows
        printf("\n");
    }

    return 0;
}