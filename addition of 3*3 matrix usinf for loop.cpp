#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("Enter the First Mtrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the Elements: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n Enter the Second Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the Elements: ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n Print the First Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);

        }
        printf("\n");
    }
    printf("\n Print the Second Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }
    }
    printf("\n Addition of Two Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}