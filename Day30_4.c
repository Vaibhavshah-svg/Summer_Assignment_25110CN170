#include <stdio.h>
#include <string.h>

int roll[100], marks[100], n = 0;
char name[100][50];

void addStudent();
void displayStudents();
void searchStudent();

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            printf("Exiting Program...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf(" %[^\n]", name[n]);

    printf("Enter Marks: ");
    scanf("%d", &marks[n]);

    n++;
    printf("Student record added successfully.\n");
}

void displayStudents()
{
    int i;

    if (n == 0)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n----------------------------------------\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("----------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n",
               roll[i], name[i], marks[i]);
    }
}

void searchStudent()
{
    int i, searchRoll, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for (i = 0; i < n; i++)
    {
        if (roll[i] == searchRoll)
        {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %d\n", marks[i]);

            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Student not found.\n");
    }
}