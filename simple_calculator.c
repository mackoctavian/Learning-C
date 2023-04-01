/**
 * A program to create a simpe calcuator
 * Author: Mack Octavian
 */
#include <stdio.h>

int simpleCalculator()
{
    char operation;
    double n1, n2;

    printf("Enter an operator(+,-,*,/): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operation)
    {
    case '+':
        printf("%lf + %lf = %lf", n1, n2, n1 + n2);
        break;

    case '-':
        printf("%lf - %lf = %lf", n1, n2, n1 - n2);
        break;

    case '*':
        printf("%lf * %lf = %lf", n1, n2, n1 * n2);
        break;

    case '/':
        printf("%lf / %lf = %lf", n1, n2, n1 / n2);
        break;

    /**
     * When Operation does not match any case
     */
    default:
        printf("Error! Operator is not correct.");
        break;
    }
    return (0);
}