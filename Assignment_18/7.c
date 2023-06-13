#include <stdio.h>
#include <string.h>

void revString(char s[], int len);
int main()
{
    char s[30], len;
    printf("Enter the string\n");
    fgets(s, sizeof s, stdin);
    len = strlen(s) - 2;

    revString(s, len);
    return 0;
}

void revString(char s[], int len)
{
    int i;
    for (i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i]) // please dry run it for better understanding
        {
            printf("Not a palindrome");
            break;
        }
    }

    if (i == len / 2)
        printf("Palindrome number");
}
