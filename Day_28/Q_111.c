#include <stdio.h>

struct Ticket {
    int ticketID;
    char name[50];
    int seatNum;
    int booked;
};

int main() {
    // Write a program to create ticket booking system

    struct Ticket tickets[100];
    int choice;
    int count = 0;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Check Seat Availability\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            int seatNo;
            int seatTaken = 0;

            printf("Enter Ticket ID: ");
            scanf("%d", &tickets[count].ticketID);

            printf("Enter Passenger Name: ");
            scanf(" %s", tickets[count].name);

            printf("Enter Seat Number: ");
            scanf("%d", &seatNo);

            for (int i = 0; i < count; i++) {
                if (tickets[i].seatNum == seatNo &&
                    tickets[i].booked == 1) {
                    seatTaken = 1;
                    break;
                }
            }

            if (seatTaken) {
                printf("Seat already booked!\n");
            } else {
                tickets[count].seatNum = seatNo;
                tickets[count].booked = 1;
                count++;
                printf("Ticket booked successfully!\n");
            }
            break;
        
        case 2:
            if (count == 0) {
                printf("No tickets booked.\n");
                break;
            }

            printf("\nID\tName\t\tSeat\tStatus\n");

            for (int i = 0; i < count; i++) {
                printf("%d\t%s\t\t%d\t%s\n",
                        tickets[i].ticketID,
                        tickets[i].name,
                        tickets[i].seatNum,
                        tickets[i].booked ? "Booked" : "Cancelled");
            }
            break;

        case 3:
            int id, found = 0;

            printf("Enter Ticket ID to search: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (tickets[i].ticketID == id) {
                    printf("\nTicket Found!\n");
                    printf("Passenger: %s\n", tickets[i].name);
                    printf("Seat Number: %d\n", tickets[i].seatNum);
                    printf("Status: %s\n",
                            tickets[i].booked ? "Booked" : "Cancelled");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Ticket not found.\n");

            break;

        case 4:
            int id, found = 0;

            printf("Enter Ticket ID to cancel: ");
            scanf("%d", &id);

            for (int i = 0; i < count; i++) {
                if (tickets[i].ticketID == id) {
                    tickets[i].booked = 0;
                    printf("Ticket cancelled successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Ticket not found.\n");

            break;

        case 5:
            int seatNo;
            int available = 1;

            printf("Enter Seat Number: ");
            scanf("%d", &seatNo);

            for (int i = 0; i < count; i++) {
                if (tickets[i].seatNum == seatNo &&
                    tickets[i].booked == 1) {
                    available = 0;
                    break;
                }
            }

            if (available)
                printf("Seat is available.\n");
            else
                printf("Seat is already booked.\n");

            break;

        case 6:
            printf("Exited...\n");
            break;

        default:
            break;
        }
    } while (choice != 6);

    return 0;
}