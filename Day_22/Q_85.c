#include <stdio.h>

int main() {
    // Write a program to check palindrome string

    // Declaration of variables
    char str[100];
    int cnt = 0;

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Finding the length of the string
    while(str[cnt] != '\0') 
    {
        cnt++;
    }

    // Copying the string into another string
    char strcpy[100];

    for(int i = 0; i < cnt; i++)
    {
        strcpy[i] = str[i];
    }

    strcpy[cnt] = '\0';

    // Reversing the string
    int start = 0;
    int end = cnt - 1;

    while(start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    // Checking for palindrome
    int same = 0;

    for(int i = 0; i < cnt; i++) 
    {
        if(str[i] == strcpy[i])
        {
            same++;
        }
    }

    // Printing whether the string is palindrome or not
    if(same == cnt)
    {
        printf("The string is a palindrome.\n");
    } else 
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}