#include <stdio.h>
struct student 
{
    int roll_no;
    char name[10], branch[15],address[25];
    float age,per;
};

int main() 
{
    struct student x;
    
    printf("Enter information for each Student:\n");
    printf("Name: ");
    scanf(" %[^\n]s", x.name); 
    printf("Branch: ");
    scanf(" %[^\n]s", x.branch);
    printf("Address: ");
    scanf(" %[^\n]s", x.address);
    printf("Roll No.: ");
    scanf("%d", &x.roll_no);
    printf("Age: ");
    scanf("%f",&x.age);
    printf("Percentage: ");
    scanf("%f",&x.per);

    
    printf("Output Information:\n");
    printf("Name: %s\n", x.name);
    printf("Branch: %s\n", x.branch);
    printf("Address: %s\n", x.address);
    printf("Roll No: %d\n", x.roll_no);
    printf("Age: %f\n", x.age);
    printf("Percentage: %f\n", x.per);
    

    
}