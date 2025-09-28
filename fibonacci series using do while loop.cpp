#include<stdio.h>
int main()
{
    int n,first=0,second=1,next;
    printf("Enter the Number of Turms:");
    scanf("%d",&n);
    printf("Fibonacci Series");
    printf("%d,%d,",first,second);
    int i=2;
    do
    {
        {
            next = first + second;
            printf("%d,",next);
            first = second;
            second = next;
            i++;
        }
    
    }
    while (i<n);
    printf("\n");
    
    
}