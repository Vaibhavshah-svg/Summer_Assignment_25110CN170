#include <stdio.h>
#include <stdlib.h> 

int main()
{
    long long num, original_num;
    long long product = 1;
    int remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    original_num = num;
    if (num == 0)
    {
        product = 0;
    }
    else
    {
        num = llabs(num);
        while (num > 0)
        {
            remainder = num % 10;
            product *= remainder; 
            num /= 10;            
        }
    }

    printf("The product of the digits of %lld is: %lld\n", original_num, product);

    return 0;
}