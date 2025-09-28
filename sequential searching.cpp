#include<stdio.h>
int main()
{
    int a[100],n,i,loc=0,x;
    printf("How many Elements:");
    scanf("%d",&n);
    printf("\n Enter the Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the Element to be Search:\n");
    scanf("%d",&x);
    printf("\n Linear Search: ");
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            loc = i+1;
            break;
        }
    }
    if(loc>0)
    {
        printf("Search succesful and Location %d",loc);
    }
    else
    {
        printf("Search Unsucessful");
    }

}