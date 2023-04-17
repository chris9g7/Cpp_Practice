#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character x\n");
    scanf("%c", &ch);

    if ((ch >= 'a') && (ch <= 'z'))
        printf("Alphabet lowercase");

    else if ((ch >= 'A') && (ch <= 'Z'))
        printf("Alphabet Uppercase");

    else if ((ch >= '0') && (ch <= '9'))
        printf("Digit");

    else
        printf("Special character");
    return 0;
}