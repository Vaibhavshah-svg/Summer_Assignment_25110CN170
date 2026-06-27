#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank acc;
    int choice;
    float amount;

    printf("===== Bank Account Management System =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Display Account Details\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            acc.balance += amount;
            printf("Amount Deposited Successfully.\n");
            break;

        case 2:
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (amount <= acc.balance)
            {
                acc.balance -= amount;
                printf("Amount Withdrawn Successfully.\n");
            }
            else
            {
                printf("Insufficient Balance!\n");
            }
            break;

        case 3:
            printf("\n===== Account Details =====\n");
            printf("Account Number : %d\n", acc.accNo);
            printf("Account Holder : %s\n", acc.name);
            printf("Balance        : %.2f\n", acc.balance);
            break;

        case 4:
            printf("Thank you for using the Bank Account System.\n");
            return 0;

        default:
            printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}