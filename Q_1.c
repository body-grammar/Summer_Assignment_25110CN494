#include <stdio.h>

int main() {
    // Write a program to Calculate sum of first N natural numbers

    int n, sum=0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        sum = sum + i;
    }

    printf("Sum of the first %d natural numbers is: %d", n, sum);
    
    return 0;
}