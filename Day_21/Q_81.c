#include <stdio.h>

int main() {
    // Write a program to find string length without strlen()

    // Declaration of variables
    char str[100];
    int cnt = 0;

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Finding the length of the string
    while(str[cnt] != '\0') {
        cnt++;
    }

    // Printing the length of the string
    printf("The length of the string is: %d", cnt);

    return 0;
}