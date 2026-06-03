#include <stdio.h>
#include <math.h> 
int main()
{
    long long start, end, i, temp, original_num;
    int digits, remainder;
    long long sum;
    printf("Enter lower limit (start): ");
    scanf("%lld", &start);
    printf("Enter upper limit (end): ");
    scanf("%lld", &end);

    printf("\nArmstrong numbers between %lld and %lld are:\n", start, end);
    for (i = start; i <= end; i++)
    {
        original_num = i;
        digits = 0;
        temp = i;
        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }
        sum = 0;
        temp = i;
        while (temp != 0)
        {
            remainder = temp % 10;
            sum += (long long)(pow(remainder, digits) + 0.5);
            temp /= 10;
        }
        if (sum == original_num)
        {
            printf("%lld ", original_num);
        }
    }
    printf("\n");

    return 0;
}