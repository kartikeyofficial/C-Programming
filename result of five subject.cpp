#include<stdio.h>
int main()
{
    float a,b,c,d,e,p;
    printf("Enter the subject marks");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    p =(a+b+c+d+e)*100/500;
    printf("percentage=%f",p);

    if(p<=60)
    {
        printf("Grade=D");
    }
    else if (p>=90 && p<=100)
    {
        printf("Grade=A");
    }
    else if (p>=80 && p<=90)
    {
        printf("Grade=B");
    }
    else if (p>=60 && p<=80)
    {
        printf("Grade=c");
    }
    
    

    
    


}