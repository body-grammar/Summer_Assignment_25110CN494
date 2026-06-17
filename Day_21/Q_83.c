#include <stdio.h>

int main() {
    // Write a program to count vowels and consonents

    // Declaration of variables
    char str[100];
    int vow = 0, con = 0, cnt = 0;

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%s", str);

    // Finding the length of the string
    while(str[cnt] != '\0') {
        cnt++;
    }

    // Finding the number of vowels and consonants in the string
    for(int i = 0; i < cnt; i++) {
        if(str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85 || str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117) {
            vow++;
        } else {
            con++;
        }
    }

    // Printing the number of vowels and consonants in the string
    printf("The number of vowels and consonants in '%s' are %d and %d respectively.\n", str, vow, con);

    return 0;
}