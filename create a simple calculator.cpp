#include <stdio.h>

int main()
 {
    char g;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &g);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(g) 
    {
        case '+':
            result = num1 + num2;
            printf("%lf + %lf = %lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%lf - %lf = %lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%lf * %lf = %lf", num1, num2, result);
            break;
        case '/':
                result = num1 / num2;
                printf("%lf / %lf = %lf", num1, num2, result);
            break;
        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}