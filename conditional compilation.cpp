#include<stdio.h>
#define a 30
#define b 20
int main()
{
    int result;
    #if(a>b)
    result= a+b;
    printf("SUM= %d",result);
    #elif(a==b)
    result=a-b;
    pintf("SUB= %d",result);
    #else
    result= a*b;
    printf("MULTI= %d",result);
    #endif
    return 0;

}