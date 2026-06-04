#include <stdio.h>

int main() {
    // Write a program to print half pyramid pattern

    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}