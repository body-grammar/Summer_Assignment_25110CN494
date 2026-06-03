#include <stdio.h>

// Function to find the sum of digits of a number
int digitSum(int n) {
    if (n < 10) {
        return n;
    }

    return ((n % 10) + (digitSum(n/10)));
}

int main() {
    // Write a program to recursive sum of digits

    // Declaration of variables
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Priting the sum of the digits of the number
    printf("Sum of digits of %d is %d.\n", num, digitSum(num));

    return 0;
}