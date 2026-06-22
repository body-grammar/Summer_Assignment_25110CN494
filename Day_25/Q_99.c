#include <stdio.h>
#include <string.h>

int main() {
    // Write a program to sort names alphabetically

    // Declaration of variables
    int n; 
    char names[100][100];
    char temp[100];

    // Taking input from the user
    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names: \n");
    for(int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Sorting the names in alphabetical order
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1; j++) {
            if(strcmp(names[j], names[j+1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    // Printing the sorted names
    printf("Names in alphabetical order are: \n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}