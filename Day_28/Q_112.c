#include <stdio.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    // Write a program to create a contact management system

    struct Contact contacts[100];
    int choice;
    int n = 0;
    int num;

    do {
        printf("\nContact Manager!\n");
        printf("Here are your options: \n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            printf("Enter the contact id: ");
            scanf("%d", &contacts[n].id);

            printf("Enter the contact name: ");
            scanf("%s", contacts[n].name);

            printf("Enter the phone number: ");
            scanf("%s", contacts[n].phone);

            printf("Enter the email: ");
            scanf("%s", contacts[n].email);

            n++;
            printf("Contact saved!\n");
            break;

        case 2:
            if(n==0) {
                printf("No Contact Found!\n");
            } else {
                printf("Contact Details: \n");

                for(int i = 0; i < n; i++) {
                    printf("\nContact ID: %d\n", contacts[i].id);
                    printf("\nContact Name: %s\n", contacts[i].name);
                    printf("\nPhone Number: %s\n", contacts[i].phone);
                    printf("\nEmail: %s\n", contacts[i].email);
                }
            }
            break;

        case 3:
            int found = 0;

            printf("Enter the contact ID to be searched: ");
            scanf("%d", &num);

            for(int i = 0; i < n; i++) {
                if(contacts[i].id == num) {
                    printf("\nContact ID: %d\n", contacts[i].id);
                    printf("\nContact Name: %s\n", contacts[i].name);
                    printf("\nPhone Number: %s\n", contacts[i].phone);
                    printf("\nEmail: %s\n", contacts[i].email);
                    found = 1;
                    break;
                }
            }

            if(found == 0) {
                printf("No Contact Found\n");
            }
            break;
        
        case 4:
            int id, found = 0;

            printf("Enter Contact ID to update: ");
            scanf("%d", &id);

            for (int i = 0; i < n; i++) {
                if (contacts[i].id == id) {

                    printf("Enter new name: ");
                    scanf(" %s", contacts[i].name);

                    printf("Enter new phone number: ");
                    scanf("%s", contacts[i].phone);

                    printf("Enter new email: ");
                    scanf("%s", contacts[i].email);

                    printf("Contact updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Contact not found!\n");
            }
            break;

        case 5:
            printf("Enter the contact ID to be deleted: ");
            scanf("%d", &num);

            found = -1;

            for(int i = 0; i < n; i++) {
                if(contacts[i].id == num) {
                    found = i;
                    break;
                }
            }

            if(found == -1) {
                printf("Contact not found!\n");
                break;
            }

            for(int i = 0; i < n-1; i++) {
                contacts[i] = contacts[i+1];
            }

            n--;

            printf("Contact deleted successfully!\n");
            break;

        case 6: 
            printf("Exited...\n");
            break;
        
        default:
            break;
        }

    } while (choice != 6);
}