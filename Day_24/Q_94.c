#include <stdio.h>

int main() {
    // Write a program to compress a string

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

    // Compressing the string
    for(int i = 0; i < cnt; i++) {

        int freq = 1;

        while(i + freq < cnt && str[i] == str[i + freq]) {
            freq++;
        }

        printf("%c%d", str[i], freq);

        i = i + freq - 1;
    }

    return 0;
}