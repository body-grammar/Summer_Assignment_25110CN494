#include <stdio.h>
#include <math.h>

// Function to find the reverse of a number using recursion
int rev(int n) {
    if (n) {
        return ((n % 10) * pow(10, (int)log10(n)) + rev(n/10));
    } else {
        return 0;
    }

    return n;
}

int main() {
    // Write a program to recursive reverse number

    // Declaration of variable
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Printing the reverse of the number
    printf("The reverse of the given number is %d.\n", rev(num));

    return 0;

}