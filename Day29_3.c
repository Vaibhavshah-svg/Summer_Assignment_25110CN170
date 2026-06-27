#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], temp[100];
    int choice, i, len;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while (1)
    {
        printf("\n===== MENU-DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            len = strlen(str);
            printf("Length of string = %d\n", len);
            break;

        case 2:
            strcpy(temp, str);
            len = strlen(temp);

            for (i = 0; i < len / 2; i++)
            {
                char ch = temp[i];
                temp[i] = temp[len - i - 1];
                temp[len - i - 1] = ch;
            }

            printf("Reversed String = %s\n", temp);
            break;

        case 3:
            strcpy(temp, str);

            for (i = 0; temp[i] != '\0'; i++)
            {
                temp[i] = toupper(temp[i]);
            }

            printf("Uppercase String = %s\n", temp);
            break;

        case 4:
            strcpy(temp, str);

            for (i = 0; temp[i] != '\0'; i++)
            {
                temp[i] = tolower(temp[i]);
            }

            printf("Lowercase String = %s\n", temp);
            break;

        case 5:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}