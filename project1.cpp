#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first element"); 
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping %d%d",a,b);
}