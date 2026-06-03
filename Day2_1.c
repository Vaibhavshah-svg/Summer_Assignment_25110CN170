#include <stdio.h>
#include <stdlib.h> 

int main()
{
    long long num, original_num;
    int sum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    original_num = num;
    num = llabs(num);
    while (num > 0)
    {
        remainder = num % 10; 
        sum += remainder;    
        num /= 10;            
    }

    printf("The sum of the digits of %lld is: %d\n", original_num, sum);

    return 0;
}