#include <stdio.h>
int main()
{
    int numbers[] = {34, 12, 89, 5, 23, 91, 67};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int smallest = numbers[0];
    int largest = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i]; 
        }
        if (numbers[i] > largest)
        {
            largest = numbers[i]; 
        }
    }
    printf("Original Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);
    return 0;
}