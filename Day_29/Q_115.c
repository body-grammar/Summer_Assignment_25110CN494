#include <stdio.h>
#include <string.h>

int main() {
    // Write a program to create menu-driven strings operation system

    int choice;
    int n = 0;

    do {
        printf("STRINGS OPERATION SYSTEM\n");
        printf("Options: \n");
        printf("1. Enter string\n");
        printf("2. Display string\n");
        printf("3. Find length\n");
        printf("4. Copy string\n");
        printf("5. Concatenate strings\n");
        printf("6. Compare strings\n");
        printf("7. Reverse string\n");
        printf("8. Convert to uppercase\n");
        printf("9. Convert to lowercase\n");
        printf("10. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            char str[100];
            printf("Enter a string: ");
            scanf("%s", str);
            break;
        
        case 2: 
            printf("String is: %s", str);
            break;

        case 3: 
            printf("Length of the string is: %d", strlen(str));
            break;

        case 4: 
            char cpy[100];
            for(int i = 0; i < strlen(str); i++) {
                str[i] = cpy[i];
            }

            cpy[strlen(str)] = '\0';
            printf("String copied successfully!\n");
            break;

        case 5: 
            char str1[100], str2[100];

            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);

            strcat(str1, str2);

            printf("Concatenated string: %s", str1);
            printf("Strings concatenated successfully!\n");
            break;

        case 6: 
            if(strcmp(str1, str2) == 0) {
                printf("Strings are the same!\n");
            } else {
                printf("Strings are different!\n");
            }
            break;

        case 7: 
            int start = 0;
            int end = strlen(str) - 1;

            while(start < end) {
                int temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            printf("String reversed successfully!\n");
            break;

        case 8: 
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 32;
                }
            }

            printf("Uppercase string: %s\n", str);
            break;

        case 9: 
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = str[i] + 32;
                }
            }

            printf("Lowercase string: %s\n", str);
            break;

        case 10: 
            printf("Exiting...\n");
            break;

        default:
            break;
        }

    } while (choice != 10);

    return 0;
}