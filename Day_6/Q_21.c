#include <stdio.h>

int main() 
{
    // Write a program to convert decimal to binary

    // variables declaration
    int num, bin[32];


    // taking input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    int i = 0;

    //converting decimal to binary
    while (num > 0) 
    {
        bin[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("The given number in base 2 binary number system is: \n");

    // printing the binary form of the given decimal number
    for(int j = i-1; j>=0; j--) 
    {
        printf("%d\n", bin[j]);
    }

    return 0;
}