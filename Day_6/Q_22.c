#include <stdio.h>
#include <math.h>

int main() 
{
    // Write a program to convert binary to decimal

    //Declaration of variables
    int num, cnt = 0, num1, dec = 0;

    // Taking input from the user
    printf("Enter a binary number: ");
    scanf("%d", &num);

    num1 = num;

    // Counting the digits in the given number
    while(num1 > 0) 
    {
        cnt++;
        num1 = num1 / 10;
    }

    // Converting binary to decimal
    for(int i = 0; i < cnt; i++) 
    {
        dec += (num%10)*(pow(2, i));
        num = num / 10;
    }

    // Printing the decimal number
    printf("The decimal form of the given number is: %d", dec);

    return 0;
}