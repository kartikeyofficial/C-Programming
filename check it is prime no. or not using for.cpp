#include<stdio.h>
int main()
{
    int is_prime = 1;
    int i,num;
    printf("Enter the Number:");
    scanf("%d",&num);
   
    for (i=2; i<=num/2; i++)
    if(num%i==0)
    {
        is_prime = 0;
        break;
    }
    if(is_prime==1)
    {
        printf("%d is a Prime Number:\n",num);
    }
    else
    {
        printf("%d is Not a Prime Number:\n",num);
    }


}