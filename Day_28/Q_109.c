#include <stdio.h>

struct BookEntry {
    int id;
    char title[100];
    char author[100];
    int issued;
};

int main() {
    // Write a program to create a library management system

    struct BookEntry b1[100];
    int choice;
    int i_d;
    int n = 0;
    char headi[100], author_name[100];

    do {
        // Choices
        printf("\nWelcome to the library portal!\n");
        printf("Here are your choices: \n");
        printf("1. Add a Book\n");
        printf("2. Display all the books\n");
        printf("3. Search for a book\n");
        printf("4. Issue a book\n");
        printf("5. Return a book\n");
        printf("6. Delete a book\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the book ID: ");
            scanf("%d", &b1[n].id);

            printf("Enter the title of the book: ");
            scanf("%s", b1[n].title);

            printf("Enter the author of the book: ");
            scanf("%s", b1[n].author);

            b1[n].issued = 0;

            n++;
            printf("Book Registered Successfully!\n");
            break;

        case 2:
            if(n==0) {
                printf("No Records Found!\n");
            } else {
                printf("Book Records: \n");

                for(int i = 0; i < n; i++) {
                    printf("\nBook ID: %d\n", b1[i].id);
                    printf("\nBook Title: %s\n", b1[i].title);
                    printf("\nBook Author: %s\n", b1[i].author);
                    if(b1[i].issued == 1) {
                        printf("\nBook Status: Not available\n");
                    } else {
                        printf("\nBook Status: Available\n");
                    }
                }
            }
            break;

        case 3: 
            int found = 0;

            printf("Enter the ID of the book to be searched: ");
            scanf("%d", &i_d);

            for(int i = 0; i < n; i++) {
                if(b1[i].id == i_d) {
                    printf("\nBook ID: %d\n", b1[i].id);
                    printf("\nBook Title: %s\n", b1[i].title);
                    printf("\nBook Author: %s\n", b1[i].author);
                    if(b1[i].issued == 1) {
                        printf("\nBook Status: Not available\n");
                    } else {
                        printf("\nBook Status: Available\n");
                    }
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("No Record Found\n");
            }
            break;

        case 4: 
            found = 0;

            printf("Enter the ID of the book to be issued: ");
            scanf("%d", &i_d);

            for(int i = 0; i < n; i++) {
                if(b1[i].id == i_d) {
                    if(b1[i].issued == 0) {
                        printf("Book issued!\n");
                        b1[i].issued = 1;
                    } else {
                        printf("Book already issued!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("Enter a valid ID!\n");
            }

        case 5: 
            found = 0;

            printf("Enter the ID of the book to be returned: ");
            scanf("%d", &i_d);

            for(int i = 0; i < n; i++) {
                if(b1[i].id == i_d) {
                    if(b1[i].issued == 1) {
                        printf("Book returned!\n");
                        b1[i].issued = 0;
                    } else {
                        printf("Book already returned!\n");
                    }
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("Enter a valid ID!\n");
            }

        case 6:
            printf("Enter the book ID to be deleted: ");
            scanf("%d", &i_d);

            found = -1;

            for(int i = 0; i < n; i++) {
                if(b1[i].id == i_d) {
                    found = i;
                    break;
                }
            }

            if(found == -1) {
                printf("Book not found!\n");
                break;
            }

            for(int i = 0; i < n-1; i++) {
                b1[i] = b1[i+1];
            }

            n--;

            printf("Book deleted successfully!\n");
            break;

        case 7:
            printf("Exited...\n");
            break;
        
        default:
            break;
        }

    } while (choice != 7);

    return 0;
}