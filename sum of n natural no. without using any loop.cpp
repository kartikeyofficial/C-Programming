#include <stdio.h>
int sum_of_natural_numbers(int n) 
{
    int sum = n * (n + 1) / 2;
    return sum;
}

int main() 
{
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    int sum = sum_of_natural_numbers(n);
    printf("Sum of first %d natural numbers = %d\n", n, sum);
}
