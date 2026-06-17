#include <stdio.h>

int main() {
    // Write a program to convert lowercase into uppercase

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

    // Converting lowercase into uppercase
    for(int i = 0; i < cnt; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    // Printing the modified string
    printf("The string in uppercase is: %s\n", str);

    return 0;
}