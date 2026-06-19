#include <stdio.h>

int main() {
    // Write a program to remove spaces from string

    // Declaration of variables
    char str[100];
    int cnt = 0;

    // Taking input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Finding the length of the string
    while(str[cnt] != '\0')
    {
        cnt++;
    }

    // Removing spaces from the string
    int j = 0;

    for(int i = 0; i < cnt; i++)
    {
        if(str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    // Printing the string without spaces
    for(int i = 0; i <= j; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}