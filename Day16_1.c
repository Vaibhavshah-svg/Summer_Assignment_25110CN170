#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d elements:\n", n - 1);
    for(i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for(i = 0; i < n - 1; i++)
    {
        arraySum += arr[i];
    }
    int missing = totalSum - arraySum;
    printf("Missing number = %d\n", missing);
    return 0;
}