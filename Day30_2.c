#include <stdio.h>
#include <string.h>

int main()
{
    int id[100], n, i, found = 0;
    char title[100][50], author[100][50], search[50];

    printf("===== Mini Library System =====\n");

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &id[i]);

        printf("Book Title: ");
        scanf(" %[^\n]", title[i]);

        printf("Author Name: ");
        scanf(" %[^\n]", author[i]);
    }

    printf("\n========== Book Records ==========\n");
    printf("ID\tTitle\t\tAuthor\n");
    printf("------------------------------------------\n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t%s\t\t%s\n", id[i], title[i], author[i]);
    }

    printf("\nEnter Book Title to Search: ");
    scanf(" %[^\n]", search);

    found = 0;

    for (i = 0; i < n; i++)
    {
        if (strcmp(title[i], search) == 0)
        {
            printf("\nBook Found\n");
            printf("Book ID : %d\n", id[i]);
            printf("Title   : %s\n", title[i]);
            printf("Author  : %s\n", author[i]);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Book not found.\n");
    }

    return 0;
}