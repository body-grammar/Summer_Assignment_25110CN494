#include <stdio.h>
#include <math.h>

// Function to check whether a number is an armstrong number or not
void armstrong(int n) {
    int n1, n2, num=0, rem, cnt=0;

    n1 = n2 = n;

    while(n1 > 0) {
        cnt++;
        n1 = n1 / 10;
    }

    while(n2 > 0) {
        rem = n2 % 10;
        num = num + pow(rem, cnt);
        n2 = n2 / 10;
    }

    if(n == num) {
        printf("%d is an armstrong number.\n", n);
    } else {
        printf("%d is not an armstrong number.\n", n);
    }
}

int main() {
    // Write a program to write a function for armstrong

    // Declaration of variables
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling the function to check if the number is armstrong or not
    armstrong(num);

    return 0;
}