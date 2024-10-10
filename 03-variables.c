#include <stdio.h>

int main()
{
    // Variables.
    int x;       // declaration
    x = 123;     // initialization
    int y = 321; // declaration and initialization

    int age = 19;     // integer
    float gpa = 9.6;  // floating point number
    char grade = 'A'; // single character

    printf("Your are %d year old\n", age); // %d is the integer format specifier.
    printf("You gpa is %f\n", gpa);        // %f is the floating point number format specifier.
    printf("Your grade is %c", grade);     // %c is the single character format specifier.

    return 0;
}
