#include <stdio.h>

int main()
{
    // This is a single line comment.

    /*
    This is a
    multiline
    comment.
    */

    // Escape Sequence.
    printf("New Line\n");       // new line
    printf("Tab\tSpace\n");     // tab space
    printf("\\Backslash\n");    // backslash
    printf("Vertical\vTab\n");  // vertical tab space
    printf("\"Double Quote\n"); // double quote
    printf("\'Single Quote\n"); // single quote
    printf(" \bBackspace");     // backspace
    return 0;
}
