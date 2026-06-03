#include <stdio.h>

int main()
{
    int n, i;
    long long a = 0, b= 1, next_term;
    printf("Enter the number of terms: ");
    scanf("%d", &n); 
    printf("\nFibonacci Series (%d terms):\n", n);
    for (i = 1; i <= n; ++i)
    {
        printf("%lld ", a);
        next_term = a + b;
        a = b;
        b = next_term;
    }
    printf("\n");

    return 0;
}