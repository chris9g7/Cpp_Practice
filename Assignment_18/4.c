
#include <stdio.h>  
void covertUppercase(char s[]);
int main()
{
    char str[15];
    printf("Enter the lowercase string\n");
    fgets(str, sizeof str, stdin);

    covertUppercase(str);

    return 0;
}

void covertUppercase(char s[])
{
    for (int i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }

    printf("%s", s);
}