#include <stdio.h>

int main() {
    // Write a program to check character frequency

    // Declaration of variables
    char str[100];
    char ch;

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character whose frequency is to be found: ");
    scanf(" %c", &ch);

    // Finding the length of the string
    int cnt = 0;

    while(str[cnt] != '\0')
    {
        cnt++;
    }

    // Finding the character frequency
    int freq = 0;

    for(int i = 0; i < cnt; i++)
    {
        if(str[i] == ch)
        {
            freq++;
        }
    }

    // Printing the character frequency
    printf("The character %c occurs %d times in the given string.", ch, freq);

    return 0;
}