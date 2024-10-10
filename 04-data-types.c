#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Data Types.
    int a = 5;                    // integer
    float b = 3.14;               // floating point number
    char c = 'A';                 // single character
    double d = 3.141592653589793; // double
    bool e = false;               // boolean false
    bool f = true;                // boolean true

    // ASCII number range from 0 to 127.
    int charNum = 'A'; // 65

    char intChar = 65;

    printf("%d\n", a);
    printf("%30f\n", b);
    printf("%c\n", c);
    printf("%.15lf\n", d);
    printf("%d\n", e);
    printf("%d\n", f);

    printf("%d\n", charNum);
    printf("%c", intChar);

    /*
    Format Specifiers.
    1. %c for character
    2. %d for integer
    3. %f for floating point number
    4. %lf for double
    5. .2 (it could be any number) for specifying number of decimal digits
    6. %20 (it could be any number) for specifying minimum field width
    */

    return 0;
}
