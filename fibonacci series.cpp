#include<stdio.h>
int main()
{
int n,First=0,Second=1,Next;
printf("Enter the Number of terms:");
scanf("%d",&n);
printf("Fibonacci Series:");
int i = 0;
while(i<n)
{
    if(i<=1)
    Next = i;
    else
    {
        Next = First + Second;
        First = Second;
        Second = Next;
    }
    printf("%d",Next);
    i++;
}
}