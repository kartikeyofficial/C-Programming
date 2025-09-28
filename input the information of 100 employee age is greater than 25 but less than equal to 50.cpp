#include <stdio.h>
struct employee 
{
    int emp_ID;
    char name[10], department[15],address[25];
    float age,salary;
};

int main() 
{
    struct employee x[100];
    
    printf("Enter information for each Employee:\n");
    for (int i = 0; i <=99; i++) 
    {
        printf("employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %s",&x[i].name); 
        printf("Department: ");
        scanf(" %s",&x[i].department);
        printf("Address: ");
        scanf(" %s",&x[i].address);
        printf("Employee ID: ");
        scanf("%d", &x[i].emp_ID);
        printf("Age: ");
        scanf("%f",&x[i].age);
        printf("Salary: ");
        scanf("%f",&x[i].salary);

    }
    printf("Output Information:\n");
    for (int i = 0; i <= 99; i++) 
    {
        
        if(x[i].age >= 25 && x[i].age<=50)
        printf("Name: %s\n", x[i].name);
        printf("salary: %f\n", x[i].salary);
    }

    return 0;
}