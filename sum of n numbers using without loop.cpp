#include<stdio.h>
int main()
{
    int n, sum;
    printf("Enter the positive integer n:");
    scanf("%d",&n);
    sum = n * (n + 1) / 2;
    printf("the sum of first %d number is= %d\n",n,sum);
}