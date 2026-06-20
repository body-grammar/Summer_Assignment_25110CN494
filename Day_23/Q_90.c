#include <stdio.h>

int main() {
    // Write a program to find first repeating character

    // Declaration of variable
    char str[100];
    int cnt = 0;

    // Taking input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Finding the length of the string
    while(str[cnt] != '\0') {
        cnt++;
    }

    // Finding the first repeating character
    for(int i = 0; i < cnt; i++) {

        int found = 0;

        for(int j = 0; j < cnt; j++) {
            if(str[i] == str[j]) {
                found++;
            }
        }

        if(found > 1) {
            printf("The first repeating character is: %c", str[i]);
            break;
        }
    }

    return 0;
}