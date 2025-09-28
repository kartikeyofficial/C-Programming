#include<stdio.h>
int main()
{
    int i,j,k,a[3][3],b[3][3],c[3][3]= {0};
    printf("Enter the First Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" Enter The Elements: ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter the Second Mtrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" Enter The Elements: ");
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nPrint the First Matrix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nPrint the Second Matrix: \n");
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
            for(k=0;k<3;k++)
            {
                c[i][j] += a[i][k]*b[k][j];
            }
            
        }
        
    }
    printf("\nPrint the Multiplication of matix: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;


}