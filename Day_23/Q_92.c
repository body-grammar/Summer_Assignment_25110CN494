#include <stdio.h>

int main() {
    // Write a program to find maximum occuring character

    // Declaration of variables
    char str[100];
    int cnt = 0, maxFreq = 0;
    char req;

    // Taking input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Finding the length of the string
    while(str[cnt] != '\0') {
        cnt++;
    }

    // Checking for the maximum occuring character
    for(int i = 0; i < cnt; i++) {
        int freq = 0;

        for(int j = 0; j < cnt; j++) {
            if(str[i] == str[j]) {
                freq++;
            }
        }

        if(freq > maxFreq) {
            maxFreq = freq;
            req = str[i];
        }
    }

    // Printing the maximum occuring character
    printf("The maximum occuring charcter is %c\n", req);

    return 0;
}