#include <stdio.h>
#include <stdlib.h>

int main() {
    // Write a program to create an ATM simulation

    // Declaration of variables
    int currentBalance = 10000;
    int deposit, withdraw;
    int choice;

    // ATM Simulation
    do {

        printf("ATM Menu: \n 1. Check Balance \n 2. Deposit Money \n 3. Withdraw Money \n 4. Exit \n");

        printf("Choose one option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current balance is: %d\n", currentBalance);
                break;
            case 2: 
                printf("Enter the amount to be deposited: ");
                scanf("%d", &deposit);
                if(deposit > 0) {
                    currentBalance += deposit;
                    printf("Current balance is: %d\n", currentBalance);
                } else {
                    printf("Enter a valid amount!\n");
                }
                break;
            case 3: 
                printf("Enter the amount to be withdrawn: ");
                scanf("%d", &withdraw);
                if(withdraw <= currentBalance) {
                    currentBalance -= withdraw;
                    printf("Current balance is: %d\n", currentBalance);
                } else {
                    printf("Enter a valid amount!\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Enter a valid option!\n");
        }
    } while(choice != 4);

    return 0;
}