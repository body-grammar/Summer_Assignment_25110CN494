#include <stdio.h>

struct Account {
    int acc_num;
    char name[100];
    float balance;
};

int main() {
    // Write a program to create a bank account system 

    struct Account acc[100];
    int choice, n = 0;
    int num;

    do {
        printf("\nWelcome to the bank portal!\n");
        printf("Here are your choices: \n");

        printf("1. Create account\n");
        printf("2. Display all accounts\n");
        printf("3. Search account\n");
        printf("4. Deposit money\n");
        printf("5. Withdraw money\n");
        printf("6. Delete account\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the account number: ");
            scanf("%d", &acc[n].acc_num);

            printf("Enter the bank account holder name: ");
            scanf("%s", acc[n].name);

            printf("Enter the current balance in the account: ");
            scanf("%f", &acc[n].balance);

            n++;
            printf("Bank Account Registered Successfully!\n");
            break;

        case 2:
            if(n==0) {
                printf("No Bank Account Found!\n");
            } else {
                printf("Account Records: \n");

                for(int i = 0; i < n; i++) {
                    printf("\nAccount Number: %d\n", acc[i].acc_num);
                    printf("\nAccount Holder Name: %s\n", acc[i].name);
                    printf("\nCurrent Balance: %f\n", acc[i].balance);
                }
            }
            break;

        case 3:
            int found = 0;

            printf("Enter the bank account number to be searched: ");
            scanf("%d", &num);

            for(int i = 0; i < n; i++) {
                if(acc[i].acc_num == num) {
                    printf("\nAccount Number: %d\n", acc[i].acc_num);
                    printf("\nAccount Holder Name: %s\n", acc[i].name);
                    printf("\nCurrent Balance: %f\n", acc[i].balance);
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

            printf("Enter the bank account number to deposit the money: ");
            scanf("%d", &num);

            float deposit;

            printf("Enter the amount to be deposited: ");
            scanf("%f", &deposit);

            for(int i = 0; i < n; i++) {
                if(acc[i].acc_num == num) {
                    acc[i].balance += deposit;
                    printf("Rs. %f deposited successfully!\n");
                    found = 1;
                    break;
                } 
            }

            if(found == 0) {
                printf("Enter a valid account number.\n");
            }

            break;

        case 5: 
            found = 0;

            printf("Enter the bank account number to deposit the money: ");
            scanf("%d", &num);

            float withdraw;

            printf("Enter the amount to be withdrawn: ");
            scanf("%f", &withdraw);

            for(int i = 0; i < n; i++) {
                if(acc[i].acc_num == num) {
                    acc[i].balance -= withdraw;
                    printf("Rs. %f withdrawn successfully!\n");
                    found = 1;
                    break;
                } 
            }

            if(found == 0) {
                printf("Enter a valid account number.\n");
            }

            break;

        case 6:
            printf("Enter the account number to be deleted: ");
            scanf("%d", &num);

            found = -1;

            for(int i = 0; i < n; i++) {
                if(acc[i].acc_num == num) {
                    found = i;
                    break;
                }
            }

            if(found == -1) {
                printf("Bank Account not found!\n");
                break;
            }

            for(int i = 0; i < n-1; i++) {
                acc[i] = acc[i+1];
            }

            n--;

            printf("Account deleted successfully!\n");
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