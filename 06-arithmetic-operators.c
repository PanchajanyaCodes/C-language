#include <stdio.h>

int main()
{
    /*
    Arithmetic Operators.
    1. Addition +
    2. Subtraction -
    3. Multiplication *
    4. Division /
    5. Modulus %
    6. Increment ++
    7. Decrement --
    */

    int a = 20, b = 20;

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);

    printf("%d\n", a++); // 20 (post increment)
    printf("%d\n", ++a); // 22 (pre increment)

    printf("%d\n", a--); // 22 (post decrement)
    printf("%d\n", --a); // 20 (pre decrement)

    return 0;
}
