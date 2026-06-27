#include <stdio.h>

int main()
{
    int arr[100], n = 0, i;
    int choice;
    int max, min, sum;
    float avg;

    while (1)
    {
        printf("\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Maximum Element\n");
        printf("4. Find Minimum Element\n");
        printf("5. Find Sum and Average\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter number of elements: ");
            scanf("%d", &n);

            printf("Enter %d elements:\n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d", &arr[i]);
            }
            printf("Array stored successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                printf("Array Elements: ");
                for (i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 3:
            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                max = arr[0];
                for (i = 1; i < n; i++)
                {
                    if (arr[i] > max)
                        max = arr[i];
                }
                printf("Maximum Element = %d\n", max);
            }
            break;

        case 4:
            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                min = arr[0];
                for (i = 1; i < n; i++)
                {
                    if (arr[i] < min)
                        min = arr[i];
                }
                printf("Minimum Element = %d\n", min);
            }
            break;

        case 5:
            if (n == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                sum = 0;
                for (i = 0; i < n; i++)
                {
                    sum += arr[i];
                }
                avg = (float)sum / n;

                printf("Sum = %d\n", sum);
                printf("Average = %.2f\n", avg);
            }
            break;

        case 6:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}