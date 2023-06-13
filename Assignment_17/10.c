#include <stdio.h>

int main()
{
    char s[20], freq[130] = {0};
    printf("Enter the string\n");
    fgets(s, sizeof s, stdin);

    for (int i = 0; s[i]; i++)
    {
        freq[s[i]]++;
    }

    for (int i = 11; i < 130; i++) // i = 10 bcz fgets add (new line feed automatically and its ascii value is 10 )
    {
        if (freq[i] != 0)
        {
            printf("%c ==> %d\n", i, freq[i]);
        }
    }

    return 0;
}