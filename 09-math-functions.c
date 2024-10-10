#include <stdio.h>

// include this header file to user functions like sqrt(), ceil() etc. for performing mathematical operations.
#include <math.h>

int main()
{
    double A = sqrt(9); // square root of a number
    printf("%lf\n", A);

    double B = pow(2, 4); //  power of a number
    printf("%lf\n", B);

    int C = round(3.4); // rounds a number to the nearest decimal place
    printf("%d\n", C);

    int D = ceil(3.14); // rounds up a number
    printf("%d\n", D);

    int E = floor(7.9); // rounds down a number
    printf("%d\n", E);

    double F = fabs(-10); // absolute value of a number
    printf("%lf\n", F);

    double G = sin(45); // sin value
    printf("%lf\n", G);

    double H = cos(45); // cos value
    printf("%lf\n", H);

    double I = tan(45); // tan value
    printf("%lf", I);

    return 0;
}
