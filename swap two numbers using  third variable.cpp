#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d and b%d",a,b);
}