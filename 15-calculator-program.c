// Program to make a calculator.

#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("\nEnter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result = %.2lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result = %.2lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result = %.2lf\n", result);
        break;
    case '/':
        result = num1 / num2;
        printf("Result = %.2lf\n", result);
        break;
    default:
        printf("Please enter a valid operator.\n");
    }

    return 0;
}
