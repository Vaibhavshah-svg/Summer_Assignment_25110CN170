#include <stdio.h>

int main()
{
    int id[100], salary[100];
    char name[100][50], department[100][50];
    int n, i, searchId, found = 0;

    printf("===== Mini Employee Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &id[i]);

        printf("Employee Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Department: ");
        scanf(" %[^\n]", department[i]);

        printf("Salary: ");
        scanf("%d", &salary[i]);
    }

    printf("\n========== Employee Records ==========\n");
    printf("ID\tName\t\tDepartment\tSalary\n");
    printf("------------------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\t\t%d\n",
               id[i], name[i], department[i], salary[i]);
    }

    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &searchId);

    found = 0;

    for (i = 0; i < n; i++)
    {
        if (id[i] == searchId)
        {
            printf("\nEmployee Found\n");
            printf("ID         : %d\n", id[i]);
            printf("Name       : %s\n", name[i]);
            printf("Department : %s\n", department[i]);
            printf("Salary     : %d\n", salary[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Employee not found.\n");
    }

    return 0;
}