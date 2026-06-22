#include <stdio.h>

int main() {
    // Write a program to find common characters in a string

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

    // Printing common characters in the given string
    for(int i = 0; i < cnt; i++) {
        int found = 0;

        for(int j = i+1; j < cnt; j++) {
            if(str[i] == str[j]) {
                found = 1;
                break;
            }
        }

        int prin = 0;
        for(int k = 0; k < i; k++) {
            if(str[i] == str[k]) {
                prin = 1;
                break;
            }
        }

        if(found && !prin) {
            printf("%c\t", str[i]);
        }
    }

    return 0;
}