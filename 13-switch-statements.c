#include <stdio.h>

int main()
{
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did Okay!\n");
        break;
    case 'D':
        printf("Atleast it's not an F!\n");
        break;
    case 'F':
        printf("You Failed!\n");
        break;
    default:
        printf("Please enter only valid grade.");
    }

    return 0;
}
