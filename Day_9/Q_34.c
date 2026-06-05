#include <stdio.h>

int main() {
    // Write a program to print reverse number triangle

    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}