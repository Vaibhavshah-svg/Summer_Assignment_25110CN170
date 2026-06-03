#include <stdio.h>
#include <math.h> 

int main()
{
    long long num, original_num, temp;
    int digits = 0;
    long long sum = 0;
    int remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num);

    original_num = num;
    temp = num;
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += (long long)(pow(remainder, digits) + 0.5);
        temp /= 10;
    }
    if (sum == original_num)
    {
        printf("%lld is an Armstrong number.\n", original_num);
    }
    else
    {
        printf("%lld is not an Armstrong number.\n", original_num);
    }

    return 0;
}