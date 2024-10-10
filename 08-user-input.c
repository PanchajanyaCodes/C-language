#include <stdio.h>

// include this header file to get functions like strcspn(), strlen(), etc. for manipulating the string.
#include <string.h>

int main()
{
    char name[25]; // 25 bytes / 25 characters.
    int age;

    printf("What's your name: ");
    // scanf("%s", name); // spaces between name are not included.
    fgets(name, 25, stdin); // spaces between name are included.

    // this line scans in the 'name' string for the first occurrence of '\n' and return its index and replace it with the '\0'.
    // name[strcspn(name, "\n")] = '\0'; // remove newline from the fgets() function.

    // this line gets the last character of the 'name' string and replace it with '\0'.
    name[strlen(name) - 1] = '\0';
    printf("Hello %s.\n", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d.", age);

    return 0;
}

/*
1. \0 is the null terminator, used to mark the end of the string.
2. fgets() function is used to read text from the specified input stream. It includes new line in input if there is room in buffer.
3. strcspn() function scans a string for the first occurrence of any character in another string. And returns the number of characters found in the another string.
4. strlen() function calculates the length of the string.
*/
