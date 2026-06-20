#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Write a program to check anagram strings

    // Declaration of variables
    char str1[100], str2[100];
    int cnt1 = 0, cnt2 = 0;

    // Taking input from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Finding the length of the strings
    while(str1[cnt1] != '\0') {
        cnt1++;
    }

    while(str2[cnt2] != '\0') {
        cnt2++;
    }

    // Condition for anagram strings
    if(cnt1 != cnt2) {
        printf("The strings are not anagrams.\n");
        exit(0);
    }

    for(int i = 0; i < cnt1; i++) {
        int found = 0;

        for(int j = 0; j < cnt2; j++) {
            if(str1[i] == str2[j]) {
                found = 1;
                break;
            }
        }

        if(found == 0) {
            printf("The strings are not anagrams.\n");
            exit(0);
        }
    }

    printf("The strings are anagrams.\n");

    return 0;
}