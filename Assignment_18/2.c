#include <stdio.h>
#include <string.h>

void revString(char s[], int len);
int main()
{
    char s[30], len;
    printf("Enter the string\n");
    fgets(s, sizeof s, stdin);
    len = strlen(s) - 1; // bcz it's include \n when we press enter

    revString(s, len);
    return 0;
}

void revString(char s[], int len)
{
    int temp;
    for (int i = 0, j = len; i <= j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("Reverse string %s", s);
}
