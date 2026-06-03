#include <stdio.h>

int main()
{
    long long num, original_num;
    long long reversed_num = 0;
    int remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    original_num = num;
    while (num > 0)
    {
        remainder = num % 10;                         
        reversed_num = reversed_num * 10 + remainder; 
        num /= 10;                                    
    }
    if (original_num == reversed_num)
    {
        printf("%lld is a palindrome number.\n", original_num);
    }
    else
    {
        printf("%lld is not a palindrome number.\n", original_num);
    }

    return 0;
}