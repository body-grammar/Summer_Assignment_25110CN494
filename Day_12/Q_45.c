#include <stdio.h>

// Function to check whether a number is palindrome or not
void palindrome(int n) {
    int rem, n1, new=0;

    n1 = n;

    while (n1 > 0) {
        rem = n1 % 10;
        new = (new * 10) + rem;
        n1 = n1 / 10;
    }

    if(new == n) {
        printf("%d is a palindrome.\n", n);
    } else {
        printf("%d is not a palindrome.\n", n);
    }
}

int main() {
    // Write a program to write function for palindrome

    // Declaration of variables
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling the function to check if the number is palindrome or not
    palindrome(num);

    return 0;
}