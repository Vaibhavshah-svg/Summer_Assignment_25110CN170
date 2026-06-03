#include <stdio.h>

int main()
{
    int start, end, i, j, flag;
    printf("Enter lower limit (start): ");
    scanf("%d", &start);
    printf("Enter upper limit (end): ");
    scanf("%d", &end);

    printf("\nPrime numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++)
    {
        if (i <= 1)
        {
            continue;
        }
        flag = 1; 
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0; 
                break;        
            }
        }
        if (flag == 1)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}