#include <stdio.h>

int main() {
    // Write a program to print factors of a number

    // Initialization
    int num;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("The factors of %d are: \n", num);

    //Printing the factors of the given number
    for(int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}