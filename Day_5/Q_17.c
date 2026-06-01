#include <stdio.h>

int main() {
    // Write a program to check perfect number

    int num, rem=0; // Initialization

    printf("Enter a number: ");
    scanf("%d", &num);  // Input from user

    for(int i = 1; i < num; i++) {  // Checking the given number
        if(num % i == 0) {
            rem += i;
        }
    }

    if(rem == num) {    // Whether the number is prefect or not
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}