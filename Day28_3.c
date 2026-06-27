#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
    float fare;
};

int main()
{
    struct Ticket t;
    int choice, booked = 0;

    while (1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. View Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (booked)
            {
                printf("Ticket already booked!\n");
            }
            else
            {
                printf("Enter Ticket Number: ");
                scanf("%d", &t.ticketNo);

                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", t.name);

                printf("Enter Number of Seats: ");
                scanf("%d", &t.seats);

                t.fare = t.seats * 500; // Fare = Rs.500 per seat

                booked = 1;
                printf("Ticket booked successfully!\n");
            }
            break;

        case 2:
            if (!booked)
            {
                printf("No ticket booked.\n");
            }
            else
            {
                printf("\n===== Ticket Details =====\n");
                printf("Ticket Number : %d\n", t.ticketNo);
                printf("Passenger Name: %s\n", t.name);
                printf("Seats         : %d\n", t.seats);
                printf("Total Fare    : Rs. %.2f\n", t.fare);
            }
            break;

        case 3:
            if (!booked)
            {
                printf("No ticket to cancel.\n");
            }
            else
            {
                booked = 0;
                printf("Ticket cancelled successfully!\n");
            }
            break;

        case 4:
            printf("Thank you for using the Ticket Booking System.\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}