#include <stdio.h>
#include <string.h>

int main() {
    // Write a program to check string rotation

    // Declaration of variables
    char str1[100], str2[100], temp[200];

    // Taking input from the user
    printf("Enter a string: ");
    scanf("%s", str1);

    printf("Enter a second string: ");
    scanf("%s", str2);

    // Condition for string rotation
    if(strlen(str1) != strlen(str2)) {
        printf("There is no string rotation.\n");
        return 0;
    }

    // Checking for string rotation
    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2)) {
        printf("There is string rotation.\n");
    } else {
        printf("There is no string rotation.\n");
    }

    return 0;
}