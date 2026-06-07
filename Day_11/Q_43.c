#include <stdio.h>

// Function to print whether the number is prime or not
void checkPrime(int x) {
    int cnt=0;

    for(int i = 1; i <= x; i++) {
        if (x % i == 0) {
            cnt++;
        }
    }

    if(cnt > 2) {
        printf("%d is not prime\n", x);
    } else {
        printf("%d is prime\n", x);
    }
}

int main() {
    // Write a program to write function to check prime

    // Declaration of the variable
    int n;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling the function to print the result
    checkPrime(n);

    return 0;
}