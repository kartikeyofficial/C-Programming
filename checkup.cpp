
#include<stdio.h>
int main()
{
    int a[5],sum=0, avg, i;
    for(i=0;i<5;i++)
    {
        printf("Enter The Array:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum= sum+a[i];
        avg = sum/5;
        printf("Sum of Five Numbers:\n",sum);
        printf("Average of Five Numbers:",avg);
    }
    
}