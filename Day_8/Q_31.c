#include <stdio.h>

int main() {
    // Write a program to print character triangle

    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("%c", (65+j-1));
        }

        printf("\n");
    }

    return 0;
}