#include <stdio.h>
#include <string.h>

int main() {
    // Write a program to sort words by length

    // Declaration of variables
    int n; 
    char words[100][100];
    char temp[100];

    // Taking input from the user
    printf("Enter number of words: ");
    scanf("%d", &n);

    printf("Enter words: \n");
    for(int i = 0; i < n; i++) {
        scanf("%s", words[i]);
    }

    // Sorting words by length
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {
            if(strlen(words[j]) > strlen(words[j+1])) {
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    // Printing words sorted according to their length
    printf("Words in sorted order are: \n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}