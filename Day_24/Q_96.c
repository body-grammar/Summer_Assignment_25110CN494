#include <stdio.h>

int main() {
    // Write a program to remove duplicate characters

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

    // Removing duplicates from the string
    for(int i = 0; i < cnt; i++) {
        for(int j = i + 1; j < cnt; j++) {
            if(str[i] == str[j]) {
                for(int k = j; k < cnt-1; k++) {
                    str[k] = str[k+1];
                }

                cnt--;
                j--;
            }
        }
    }

    str[cnt] = '\0';

    // Printing the modified string
    printf("The modified string is: %s", str);

    return 0;
}