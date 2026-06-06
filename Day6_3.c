#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        count += n % 2; // Add 1 if the last bit is set
        n /= 2;         // Remove the last bit
    }
    printf("Number of set bits = %d\n", count);
    return 0;
}