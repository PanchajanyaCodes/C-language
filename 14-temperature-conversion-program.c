// Program to convert the temperature from celsius to fahrenheit and fahrenheit to celsius.

#include <stdio.h>

// This header file provides functions to test and manipulate characters like isalpha(), toupper() etc.
#include <ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = tolower(unit);

    if (unit == 'c')
    {
        printf("\nEnter temperature in celsius.");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in fahrenheit is %.1fF", temp);
    }
    else if (unit == 'f')
    {
        printf("\nEnter temperature in fahrenheit.");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in celsius is %.1fC", temp);
    }
    else
    {
        printf("\nPlease enter a valid temperature unit.");
    }

    return 0;
}
