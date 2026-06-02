#include <stdio.h>

// Function to find a power of a number
int power(int x, int p) 
{
    int pow = 1;
    
    if(p == 0) {
        pow = 1;
    } else {
        for(int i = 1; i <= p; i++) {
            pow = pow * x;
        }
    }

    return pow;
}

int main()
{
    // Write a program to find x^n without pow()

    // Declaration of variables
    int num, pow;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the value of power to raise the number to: ");
    scanf("%d", &pow);

    // Priting the result
    printf("%d", power(num, pow));

    return 0;
}