#include <stdio.h>

int main()
{
    long long num;
    int count = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    long long temp = num;
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num /= 10; 
            count++;   
        }
    }

    printf("The number of digits in %lld is: %d\n", temp, count);

    return 0;
}