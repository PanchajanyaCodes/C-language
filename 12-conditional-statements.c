#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("You can drive a car.");
    }
    else if (age < 18)
    {
        printf("You cannot drive a car.");
    }
    else
    {
        printf("You need to give a driving test.");
    }

    return 0;
}
