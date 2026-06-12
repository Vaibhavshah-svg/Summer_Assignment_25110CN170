#include <stdio.h>
#include <math.h>
int armstrong(int n)
{
    int original = n, sum = 0, digit, count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return (sum == original);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}