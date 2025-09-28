#include<stdio.h>
int main()
{
    int num,remainder,sum=0,originalNum,numberofDigits;
    printf("Enter the Number:");
    scanf("%d",&num);
    originalNum = num;
    for (int i = originalNum; i > 0; i = i/10)
    {
        remainder = i % 10;
        sum = sum+(remainder*remainder*remainder);
    }
    if(sum== originalNum)
    {
    printf("%d is an Armstrong Number",originalNum);
    }
    else
    {
    printf("%d is Not an Armstrong Number",originalNum);
    }


}