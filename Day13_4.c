#include <stdio.h>

int main()
{
    int numbers[] = {15, 22, 8, 37, 42, 99, 50, 13};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int even_count = 0;
    int odd_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    printf("Total Even elements: %d\n", even_count);
    printf("Total Odd elements: %d\n", odd_count);
    return 0;
}