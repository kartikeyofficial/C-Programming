#include<stdio.h>
int main()
{
    int num,remainder,sum=0,originalNum;
    printf("Enter the Number:");
    scanf("%d",&num);
    originalNum = num;
    while(num>0)
    {
      remainder = num%10;
      sum= sum+(remainder*remainder*remainder);
      num= num/10;
    }
    if(sum== originalNum)
    {
        printf("%d is Armstrong Number");
    }
    else
    {
        printf("%d is Not Armstrong Number");
    }

}