#include <stdio.h>
struct student 
{
    int roll_no;
    char name[10], branch[15],address[25];
    float age,per;
};

int main() 
{
    struct student x[50];
    
    printf("Enter information for each Student:\n");
    for (int i = 0; i <=49; i++) 
    {
        printf("student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", x[i].name); 
        printf("Branch: ");
        scanf(" %[^\n]s", x[i].branch);
        printf("Address: ");
        scanf(" %[^\n]s", x[i].address);
        printf("Roll No.: ");
        scanf("%d", &x[i].roll_no);
        printf("Age: ");
        scanf("%f",&x[i].age);
        printf("Percentage: ");
        scanf("%f",&x[i].per);

    }
    printf("Output Information:\n");
    for (int i = 0; i <= 49; i++) 
    {
        printf("student %d:\n", i + 1);
        printf("Name: %s\n", x[i].name);
        printf("Branch: %s\n", x[i].branch);
        printf("Address: %s\n", x[i].address);
        printf("Roll No: %d\n", x[i].roll_no);
        printf("Age: %f\n", x[i].age);
        printf("Percentage: %f\n", x[i].per);
    }

    return 0;
}