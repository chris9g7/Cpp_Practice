#include <stdio.h>
void checkString(char s[]);
int main()
{
    char s[20];
    printf("Enter the combination string\n");
    fgets(s, sizeof(s), stdin);

    checkString(s);

    return 0;
}

void checkString(char s[])
{
    int alp = 0, sp = 0, num = 0;
    for (int i = 0; s[i]; i++)
    {
        if (('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z'))
        {
            alp++;
        }

        else if (('0' <= s[i] && s[i] <= '9'))
        {
            num++;
        }

        else
        {
            sp++;
        }
    }

    printf("Special characters : %d\nDigits : %d\nAlphabets : %d", sp - 1, num, alp); // bcz \n also counts in sp
}