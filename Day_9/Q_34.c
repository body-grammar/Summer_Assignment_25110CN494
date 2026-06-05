#include <stdio.h>

int main() {
    // Write a program to print reverse number triangle

    // Declaration of variables
    int n;

    // Taking input from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop to print rows
    for(int i = n; i >= 1; i--) {
        // Loop to print columns
        for(int j = 1; j <= i; j++) {

            // Priting number where required
            printf("%d", j);
        }

        // Changing respective rows
        printf("\n");
    }

    return 0;
}