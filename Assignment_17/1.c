#include <stdio.h>

int main()
{
    char str[20], i;

    printf("Enter your name\n");
    fgets(str, 20, stdin);

    for (i = 0; str[i]; i++);

    printf("length of string : %d", i-1);

    return 0;
}