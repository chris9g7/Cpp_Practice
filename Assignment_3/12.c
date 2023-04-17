#include <stdio.h>

int main()
{

    char ch;

    printf("Enter a character\n");
    scanf("%c", &ch);

    if ((ch >= 'a') && (ch <= 'z'))

        printf("Lowercase : %c", ch);

    else
        printf("Uppercase : %c", ch);

    return 0;
}