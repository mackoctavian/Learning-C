/**
 * A program to calculate sum of numbers(10 numbers max)
 * if user  enters a negative number, Its not add to the result
 */
#include <stdio.h>

int sumOfNumbers()
{
    int number, sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number < 0)
        {
            break;
        }

        sum += number;
    }
    printf("Sum = %d", sum);
    return (0);
}