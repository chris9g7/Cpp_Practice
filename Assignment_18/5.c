
#include <stdio.h>
void covertLowercase(char s[]);
int main()
{
    char str[15];
    printf("Enter the Uppercase string\n");
    fgets(str, sizeof str, stdin);

    covertLowercase(str);

    return 0;
}

void covertLowercase(char s[])
{
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }

    printf("%s", s);
}