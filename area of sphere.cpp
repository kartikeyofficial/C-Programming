#include<stdio.h>
int main()
{
    float r,area;
    printf("Enter the Radius of the Sphere");
    scanf("%f",&r);
    area = (3.14159265*r*r*r*4)/3;
    printf("Area of sphere=%f",area);


}