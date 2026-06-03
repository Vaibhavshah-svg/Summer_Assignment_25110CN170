#include <stdio.h>

int main()
{
    int n, i;
    long long a = 0, b = 1, next_term = 0;
    printf("Enter the position (n) of the Fibonacci term: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    else if (n == 1)
    {
        next_term = a;
    }
    else if (n == 2)
    {
        next_term = b;
    }
    else
    {
        for (i = 3; i <= n; ++i)
        {
            next_term = a + b;
            a = b;
            b = next_term;
        }
    }

    printf("The %dth Fibonacci term is: %lld\n", n, next_term);
    return 0;
}