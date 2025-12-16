#include<stdio.h>
int main()
{
    int num, i = 2;
    printf("Enter the Number:");
    scanf("%d",&num);
    if(num <= 1)
    {
        printf("%d is Not a Prime Number\n", num);
        return 0;
    }
    do
    {
        if(num % i == 0)
        {
            printf("%d is not a Prime Number\n",num);
            return 0;
        }
        i++;
    }
    while(i <= num/2);
    printf("%d is a Prime Number\n", num);
    return 0;

   
    
}