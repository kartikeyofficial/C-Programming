#include <stdio.h>
struct student 
{
    int roll_no;
    char name[10], branch[15],address[25];
    float age,per;
};

int main() 
{
    struct student x[500];
    
    printf("Enter information for each Student:\n");
    for (int i = 0; i <=499; i++) 
    {
        printf("student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s",&x[i].name); 
        printf("Branch: ");
        scanf(" %s",&x[i].branch);
        printf("Address: ");
        scanf(" %s",&x[i].address);
        printf("Roll No.: ");
        scanf("%d", &x[i].roll_no);
        printf("Age: ");
        scanf("%f",&x[i].age);
        printf("Percentage: ");
        scanf("%f",&x[i].per);

    }
    printf("Output Information:\n");
    for (int i = 0; i <= 499; i++) 
    {
        if(x[i].per>=75)
        printf("Name: %s\n", x[i].name);
    }

    return 0;
}