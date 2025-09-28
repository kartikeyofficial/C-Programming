#include<stdio.h>
int main()
{
    float a,b,c,d,e,avg;
    printf("Enter the value of a");
    scanf("%f",&a);
    printf("Enter the value of b");
    scanf("%f",&b);
    printf("Enter the value of c");
    scanf("%f",&c);
    printf("Enter the value of d");
    scanf("%f",&d);
    printf("Enter the value of e");
    scanf("%f",&e);
    avg= (a+b+c+d+e)/5;
    printf("Average of the Numbers=%f",avg);
}