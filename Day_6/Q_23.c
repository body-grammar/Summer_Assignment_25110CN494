#include <stdio.h>

int main() 
{
    // Write a program to count set bits in a number

    // Declaration of variables
    int num, bin[32], set_bits = 0;

    // Taking the input from user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int i = 0;

    // Converting Decimal to Binary
    while (num > 0)
    {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    // Counting set bits in the number
    for(int j = 0; j < i; j++)
    {
        if(bin[j] == 1) 
        {
            set_bits++;
        }
    }

    //Printing the set bits in the number
    printf("There are %d set bits in the given number.\n", set_bits);

    return 0;
}