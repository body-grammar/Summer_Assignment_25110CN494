#include <stdio.h>

int main() {
    // Write programs to count words in a sentence

    // Declaration of variable
    char str[100];

    // Taking input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Finding the length of the string
    int cnt = 0;

    while(str[cnt] != '\0')
    {
        cnt++;
    }

    // Counting the number of words in the string
    int space = 0;

    for(int i = 0; i < cnt; i++) 
    {
        if(str[i] == ' ')
        {
            space++;
        }
    }

    int words = space + 1;

    // Printing the number of words in the string
    printf("There are %d words in '%s'.", words, str);

    return 0;
}