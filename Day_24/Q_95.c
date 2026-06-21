#include <stdio.h>

int main() {
    // Write a program to find the longest word

    char str[100], req[50];
    int cnt = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[cnt] != '\0') {
        cnt++;
    }

    int maxLen = 0, len = 0, startIndex = 0;

    for(int i = 0; i < cnt; i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            len++;
        } else {
            len = 0;
        }

        if(len >= maxLen) {
            maxLen = len;
            startIndex = i - len + 1;
        }
    }

    for(int i = 0; i < maxLen; i++) {
        req[i] = str[startIndex + i];
    }

    req[maxLen] = '\0';

    printf("The longest word in the string is: %s\n", req);

    return 0;
}