// Program to find hypotenuse of a triangle.

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, result;

    printf("Enter A: ");
    scanf("%lf", &a);

    printf("Enter B: ");
    scanf("%lf", &b);

    result = sqrt(pow(a, 2) + pow(b, 2));
    printf("Hypotenuse = %lf", result);

    return 0;
}
