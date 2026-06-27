#include <stdio.h>

int main()
{
    int roll[100], marks[100];
    char name[100][50];
    int n, i;

    printf("===== Student Record System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }

    printf("\n========== Student Records ==========\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%d\n",
               roll[i], name[i], marks[i]);
    }

    return 0;
}