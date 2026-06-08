#include <stdio.h>

// Function to check whether a number is a perfect number or not
void perfect(int x) {
    int num = 0;

    for(int i = 1; i < x; i++) {
        if(x % i == 0) {
            num += i;
        }
    }

    if(num == x) {
        printf("%d is a perfect number.\n", x);
    } else {
        printf("%d is not a perfect number.\n", x);
    }
}

int main() {
    // Write a program to write a function for perfect numbers

    // Declaration of variables
    int n;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calling the function to check if the number is a perfect number or not
    perfect(n);

    return 0;
}