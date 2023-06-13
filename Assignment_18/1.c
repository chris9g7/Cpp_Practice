
#include <stdio.h>
char lenCalulate(char str[]);
int main()
{
    char str[20];

    printf("Enter the string\n");
    fgets(str, sizeof str, stdin);

    printf("length of string : %d",  lenCalulate(str));

    return 0;
}

char lenCalulate(char str[])
{
    int i;
    for (i = 0; str[i]; i++);
    return i - 1;
}