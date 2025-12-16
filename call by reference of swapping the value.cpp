#include<stdio.h>
int swap(int *x,int *y);
int main()
{
    int a=10, b=20;
    swap(&a,&b);
    printf("%d,%d",a,b);

}
int swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("%d,%d\n",*x,*y);

}