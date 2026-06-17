#include <stdio.h>

int main() {
    // Write a program to reverse a string

    // Declaration of variables
    char str[100], rev[100];

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Finding the length of the string
    int cnt = 0;

    while(str[cnt] != '\0') {
        cnt++;
    }

    // Reversing the string
    for(int i = 0; i < cnt; i++) {
        rev[i] = str[cnt - i - 1];
    }

    rev[cnt] = '\0';

    // Printing the reverse of the string
    printf("The reversed string is: %s\n", rev);

    return 0;
}