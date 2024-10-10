// Program to find circumference of the circle.

#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    double radius, circumference;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    circumference = (2 * PI * radius);
    printf("Circumference = %lf", circumference);

    return 0;
}
