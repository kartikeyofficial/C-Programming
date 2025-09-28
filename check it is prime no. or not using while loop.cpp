#include<stdio.h>
int main()
{
    int num, i = 2;
    printf("Enter the Number:");
    scanf("%d",&num);
    if (num <= 1) 
    {
        printf("%d is Not a prime number.\n", num);
        return 0;
    }

    while (i <= num/2)
    {
        if(num % i == 0)
        {
            printf("%d is Not A Prime Number\n", num);
            return 0;
        }
        i++;
        

    }
    printf("%d is a Prime Number\n", num);
    return 0;
}    