#include <stdio.h>

int main() {
    long long n;
    long long sum;
    printf("Enter a positive integer (N): ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input! Please enter a valid integer.\n");
        return 1;
    }
    if (n < 1) {
        printf("Please enter a natural number greater than or equal to 1.\n");
    } else {
        // Calculate sum using the formula to ensure O(1) time complexity
        sum = (n * (n + 1)) / 2;
        
        printf("The sum of the first %lld natural numbers is: %lld\n", n, sum);
    }

    return 0;
}